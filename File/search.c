// Search for a word in a file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char fileName[100], word[100], temp[100];
    FILE *fp;
    int found = 0;

    printf("Enter file name: ");
    scanf("%s", fileName);

    printf("Enter word to search: ");
    scanf("%s", word);

    fp = fopen(fileName, "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    while (fscanf(fp, "%s", temp) != EOF) {
        if (strcmp(temp, word) == 0) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Word \"%s\" found in the file.\n", word);
    else
        printf("Word \"%s\" not found in the file.\n", word);

    fclose(fp);
    return 0;
}
