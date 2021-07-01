#include<stdio.h>
#include<string.h>

int main() {
    int n;
    char file[50];
    printf("Enter file name : ");
    scanf("%[^\n]%*c", file);
    printf("Enter number of lines :");
    scanf("%d", & n);
    printf("Enter the lines : \n");
    char data[n * 1000];
    fflush(stdin);
    fflush(stdout);
    for (int i = 0; i < n; i++) {
        char new [] = "\n";
        char temp[1000];
        scanf(" %[^\n]%*c", temp);
        strcat(data, temp);
        strcat(data, new);
    }
    FILE * f = fopen(file, "w+");
    fprintf(f, "%s", data);
    printf("Contents of the file %s is : \n", file);
    printf("%s", data);
}