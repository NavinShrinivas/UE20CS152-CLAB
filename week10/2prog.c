#include<stdio.h>

int main(int argc, char* argv[])
{
    if(argc<=2)
    {
        printf("Not sufficient arguments!Enter names of two file");
        return 0;
    }
    FILE* f1=fopen(argv[1],"r"); //0 index is the command itself
    FILE* f2=fopen(argv[2],"w+");
    char contents[10000];
    fscanf(f1,"%[^NULL]%*c",contents);
    fprintf(f2,"%s",contents);
    printf("Contents copied from %s to %s",argv[1],argv[2]);
}