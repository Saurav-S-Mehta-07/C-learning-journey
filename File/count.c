//count characters, words, and lines in a file
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char fileName[100];
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0, inWord = 0;

    printf("Enter file name: ");
    scanf("%s", fileName);

    fp = fopen(fileName, "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
