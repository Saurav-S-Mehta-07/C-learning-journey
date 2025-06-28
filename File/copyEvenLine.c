// Copy only even-numbered lines to another file

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100], targetFile[100], line[1000];
    FILE *source, *target;
    int lineNumber = 1;

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

    while (fgets(line, sizeof(line), source) != NULL) {
        if (lineNumber % 2 == 0) {
            fputs(line, target);
        }
        lineNumber++;
    }

    printf("Even-numbered lines copied to %s successfully.\n", targetFile);

    fclose(source);
    fclose(target);

    return 0;
}
