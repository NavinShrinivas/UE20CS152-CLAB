#include<stdio.h>

int main() {
    char file1[20], file2[20];
    printf("Enter name of first file :");
    scanf("%[^\n]%*c", file1);
    printf("Enter name of second file :");
    scanf("%[^\n]%*c", file2);
    FILE * f1 = fopen(file1, "r");
    FILE * f2 = fopen(file2, "r");
    FILE * f3 = fopen("1file3.txt", "w+");
    char ch = fgetc(f1);
    while (ch != EOF) {
        if (ch != '\0')
            fputc(ch, f3);
        ch = fgetc(f1);
    }
    fputs("\n", f3);
    ch = fgetc(f2);
    while (ch != EOF) {
        fputc(ch, f3);
        ch = fgetc(f2);
    }
    printf("Two file merged into file3.txt successfully!");
    fclose(f1);
    fclose(f2);
    fclose(f3);
}