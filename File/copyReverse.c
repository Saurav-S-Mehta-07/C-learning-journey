//copy a file into another file but in reverse order

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100], targetFile[100];
    FILE *source, *target;
    long fileSize;
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

    fseek(source, 0, SEEK_END);
    fileSize = ftell(source);

    for (long i = fileSize - 1; i >= 0; i--) {
        fseek(source, i, SEEK_SET);
        ch = fgetc(source);
        fputc(ch, target);
    }

    printf("File copied to %s in reverse order successfully.\n", targetFile);

    fclose(source);
    fclose(target);

    return 0;
}
