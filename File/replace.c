//  Replace a word in a file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sourceFile[100], targetFile[100], word[100], replace[100], temp[1000];
    FILE *source, *target;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter target file name: ");
    scanf("%s", targetFile);

    printf("Enter word to replace: ");
    scanf("%s", word);

    printf("Enter replacement word: ");
    scanf("%s", replace);

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

    while (fscanf(source, "%s", temp) != EOF) {
        if (strcmp(temp, word) == 0) {
            fprintf(target, "%s ", replace);
        } else {
            fprintf(target, "%s ", temp);
        }
    }

    printf("Word replacement completed and saved to %s successfully.\n", targetFile);

    fclose(source);
    fclose(target);

    return 0;
}
