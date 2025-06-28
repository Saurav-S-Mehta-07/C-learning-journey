// Count frequency of each character in a file

#include <stdio.h>
#include <stdlib.h>

int main() {
    char fileName[100];
    FILE *fp;
    int freq[256] = {0};  // ASCII character frequencies
    char ch;

    printf("Enter file name: ");
    scanf("%s", fileName);

    fp = fopen(fileName, "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        freq[(unsigned char)ch]++;  // count each character
    }

    fclose(fp);

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
