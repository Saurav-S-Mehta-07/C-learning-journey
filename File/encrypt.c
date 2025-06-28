// Encrypt a file with Caesar cipher and save to another file
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char sourceFile[100], targetFile[100];
    FILE *source, *target;
    int key;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter target file name: ");
    scanf("%s", targetFile);

    printf("Enter encryption key (e.g., 3): ");
    scanf("%d", &key);

    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Cannot open source file.\n");
        exit(1);
    }

    target = fopen(targetFile, "w");
    if (target == NULL) {
        printf("Cannot open target file.\n");
        fclose(source);
        exit(1);
    }

    while ((ch = fgetc(source)) != EOF) {
        if (isalpha(ch)) {
            if (islower(ch)) {
                ch = ((ch - 'a' + key) % 26) + 'a';
            } else if (isupper(ch)) {
                ch = ((ch - 'A' + key) % 26) + 'A';
            }
        }
        fputc(ch, target);
    }

    printf("File encrypted with key %d and saved to %s successfully.\n", key, targetFile);

    fclose(source);
    fclose(target);

    return 0;
}
