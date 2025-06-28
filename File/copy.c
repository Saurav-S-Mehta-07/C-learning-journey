//copy the contents of one file into another file

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100], targetFile[100];
    FILE *source, *target;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter target file name: ");
    scanf("%s", targetFile);

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
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);

    return 0;
}
