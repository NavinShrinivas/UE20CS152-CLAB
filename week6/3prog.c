#include<stdio.h>
#include<stdlib.h>

int main()
{
    char d1[12],d2[12];
    //2 extra for delimeters and new line cus of fgets , gcc compiler in linux shouts that using gets()
    //is dangerous
    printf("Enter date 1 in the format dd/mm/yyyy : ");
    fgets(d1,12,stdin);
    printf("Enter date 2 in the format dd/mm/yyyy : ");
    fgets(d2,12,stdin);d1[10]='\0';d2[10]='\0';//line feed gives extra newlines in puts, less remove them
    printf("DATE 1 : ");
    puts(d1);
    printf("DATE 2 : ");
    puts(d2);
    char years1[5]={d1[6],d1[7],d1[8],d1[9],'\0'};
    int year1=atoi(years1);
    char years2[5]={d2[6],d2[7],d2[8],d2[9],'\0'};
    int year2=atoi(years2);
    char months1[3]={d1[3],d1[4],'\0'};
    int month1=atoi(months1);
    char months2[3]={d2[3],d2[4],'\0'};
    int month2=atoi(months2);
    char days1[3]={d1[0],d1[1],'\0'};
    int day1=atoi(days1);
    char days2[3]={d2[0],d2[1],'\0'};
    int day2=atoi(days2);
    if(year1==year2 && month1==month2 && day1==day2)
    {
        printf("The dates are equal!");
        return 0;
    }
    else if(year1>year2)
    {
        printf("Date 1 is greater than Date 2");
        return 0;
    }
    else if(month1>month2)
    {
        printf("Date 1 is greater than Date 2");
        return 0;
    }
    else if(day1>day2)
    {
        printf("Date 1 is greater than Date 2");
        return 0;
    }
    printf("Date 2 is greater than Date 1");
    return 0;
}