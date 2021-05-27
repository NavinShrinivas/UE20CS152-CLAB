int power(int b,int p)
{
    if(p==0)
        return 1;
    
    return b*power(b,p-1);
}