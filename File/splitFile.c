// Split a file into chunks of 100 lines each

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100], targetFile[100];
    FILE *source, *target;
    char line[1000];
    int fileCount = 1;
    int lineCount = 0;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Cannot open source file.\n");
        exit(1);
    }

    sprintf(targetFile, "split_%d.txt", fileCount);
    target = fopen(targetFile, "w");
    if (target == NULL) {
        printf("Cannot create split file.\n");
        fclose(source);
        exit(1);
    }

    while (fgets(line, sizeof(line), source) != NULL) {
        fputs(line, target);
        lineCount++;

        if (lineCount == 100) {
            fclose(target);
            fileCount++;
            sprintf(targetFile, "split_%d.txt", fileCount);
            target = fopen(targetFile, "w");
            if (target == NULL) {
                printf("Cannot create split file.\n");
                fclose(source);
                exit(1);
            }
            lineCount = 0;
        }
    }

    fclose(target);
    fclose(source);

    printf("File successfully split into %d files.\n", fileCount);

    return 0;
}
