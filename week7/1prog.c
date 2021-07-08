#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cricket{
    char *player_name;
    char *team_name;
    int batting_average; //this shall be the day where i start taking meaningful varibles names.
}players[5];
void read5(){
    char temppname[50],temptname[50];
    int tempbatavg;
    for(int i=0;i<5;i++)
    {
        printf("Player %d : \n",i+1);
        printf("Enter player name : ");
        scanf(" %[^\n]%*c",temppname);
        (players+i)->player_name=(char *)malloc(50);
        strcpy((players+i)->player_name,temppname);
        printf("Enter team name : ");
        scanf(" %[^\n]%*c",temptname);
        (players+i)->team_name=(char *)malloc(50);
        strcpy((players+i)->team_name,temptname);
        printf("Enter batting average :");
        scanf("%d",&((players+i)->batting_average));
    }
}
void teamsort()
{
    int p,c;
    p=0;
    while(p<5)
    {
        // printf("halo");
        c=p; //using insertion sort where p is number of passes and c is number of comparisions
        for(int i=c;i>0;i--)
        {
            
            if(strcmp(players[i-1].team_name,players[i].team_name)>0)
            {
                printf("halo");
                struct cricket temp;
                temp=*(players+i); //member-wise copy
                *(players+i)=*(players+(i-1));
                *(players+(i-1))=temp;
            }
        }
        p++;
    }
}
void print5(){
    printf("Player list after team wise sorting :\n");
    for(int i=0;i<5;i++)
    {
        printf("%s\t%s\t%d\n",(players+i)->player_name,(players+i)->team_name,(players+i)->batting_average);
    }
}
int main(){
    read5();
    teamsort();
    print5();
}
