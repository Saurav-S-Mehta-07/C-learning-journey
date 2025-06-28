// Merge two files into a third file

#include <stdio.h>
#include <stdlib.h>

int main() {
    char file1[100], file2[100], mergedFile[100];
    FILE *f1, *f2, *f3;
    char ch;

    printf("Enter first file name: ");
    scanf("%s", file1);
    printf("Enter second file name: ");
    scanf("%s", file2);
    printf("Enter merged file name: ");
    scanf("%s", mergedFile);

    f1 = fopen(file1, "r");
    f2 = fopen(file2, "r");
    f3 = fopen(mergedFile, "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Error opening one of the files.\n");
        exit(1);
    }

    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f3);
    }

    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }

    printf("Files merged successfully into %s\n", mergedFile);

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
