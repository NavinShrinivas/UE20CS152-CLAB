#include<stdio.h>
#include <stdlib.h>


bool validdate(int &day,int &month,int &year)
{
    if(month>12 || month<=0)
        return false;
    if(day>31 || day<1)
        return false;
    if(year%4==0) //corner cases of leap years
    {
        if(month==2 && day>29)
            return false;
        else 
            return true;
    }
    if(month==2 && day>28) //corner cases of feb month
        return false; 
    if(month<8)
    {
        if(month%2==0 && day>30)
            return false;
    }
    if(month>=8)
    {
        if(month%2!=0 && day>30)
            return false;
    }
    return true;
}

int nextday(int &day,int &month,int &year)
{
    if(year%4==0) //corner cases of leap years
    {
        if(month==2 && day==29)
            return 1;
    }
    if(month==2 && day==28) //corner cases of feb month
        return 1;
    if(month<8)
    {
        if(month%2==0 && day==30)
            return 1;
        if(month%2!=0 && day==31)
            return 1;
    }
    if(month>=8)
    {
        if(month%2!=0 && day==30)
            return 1;
        if(month%2==0 && day==31)
            return 1;
    }
        return day+1;
}
int nextmonth(int &day,int &month,int &year)
{
    if(year%4==0) //corner cases of leap years
    {
        if(month==2 && day==29)
            return month+1;
    }
    if(month==2 && day==28) //corner cases of feb month
        return month+1;
    if(month<8)
    {
        if(month%2==0 && day==30)
            return month+1;
    }
    if(month>=8)
    {
        if(month%2!=0 && day==30)
            return month+1;
        if(month==12)
            return 1;
    }
        return month;
}
int nextyear(int &day,int &month,int &year)
{
    if(month==12 && day==31)
        return year+1;
    else
        return year;
}

int main()
{
    char str[10];
    int day,month,year;
    printf("Enter day : ");
    scanf("%i",&day);
    printf("Enter month : ");
    scanf("%i",&month);
    printf("Enter year : ");
    scanf("%i",&year);
    if(validdate(day,month,year))
    {
        printf("The given date is valid \n");
        int newday=nextday(day,month,year);
        int newmonth=nextmonth(day,month,year);
        int newyear=nextyear(day,month,year);
        printf("Next date : %i/%i/%i",newday,newmonth,newyear);
    }
    else 
        printf("The given date is invalid");

    
}