#include<stdio.h>
#include<string.h>

enum month{ran,jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};

struct enummap{
    char* usermon;
    enum month enummon;
}maptable[]={{"jan",jan},{"feb",feb},{"mar",mar},
             {"apr",apr},{"may",may},{"jun",jun},
             {"jul",jul},{"aug",aug},{"sep",sep},
             {"oct",oct},{"nov",nov},{"dec",dec}};

int nextflag;

void next(char day,enum month mon) //this checks of the next day is not in the current month
{
    if(mon==2 && day==29) //we dont have year so assuming years are never leap
            nextflag=1;
    if(mon<8)
        if(mon%2==0 && day==30)
            nextflag=1;
        if(mon%2!=0 && day==31)
            nextflag=1;
    if(mon>=8)
        if(mon%2!=0 && day==30)
                nextflag=1;
        if(mon%2==0 && day==31)
            nextflag=1;
}
int main()
{
    int day;
    enum month m;
    char mon[3];
    printf("Enter date in the format DD MMM [e.g. 31 jan] :");
    scanf("%d %[^\n]%*c",&day,mon);
    for(int i=0;i<12;i++)
    {
        if(strcmp((maptable+i)->usermon,mon)==0)
            m=(maptable+i)->enummon;
    }
    next(day,m);
    if(nextflag) //assuming user always gives a valid date
    {
        m+=1;
        if(m==13)//demn i did not think of this case , that example in the file is sneaky!
            m=1;
        char* nextmon;
        for(int i=0;i<12;i++)
        {
            if((maptable+i)->enummon-m==0)
                nextmon=(maptable+i)->usermon;
        }
        printf("Next day is : %d %s",1,nextmon);
    }
    else{
        printf("Next day is : %d %s",day+1,mon);
    }
}


//I am guessing this is the end of UE20CS152 for this sem

//With this we come to the end of C lab! C lab was hella fun not gonna lie , even tho i know c
//from before i still picked quite a lot of stuff in this lab :))

/*--------------------END OF UE20CS152--------------------*/
