void concatenate(char* s1,char* s2,int n)
{
    int size1=0;
    while(*(s1+size1)!='\0'){
        size1++;
    }
    int size2=0;
    while(*(s2+size2)!='\0'){
        size2++;
    }
    while(n)
    {
    for(int i=0;i<size2;i++)
    {
        if(*(s2+i)!='\0')
        {
            *(s1+size1)=*(s2+i);
            size1++;
        }
    }
    n--;
    }
    *(s1+size1)='\0';
}