void populatefibbonaci(int a[],int n)
{
    int first=0;
    int second=1;
    if(n<=2){
        a[0]=first;
        a[1]=second;
    }
    else{
        a[0]=first;
        a[1]=second;
        for(int i=2;i<n;i++)
        {
            a[i]=first+second;
            first=second;
            second=a[i];
        }
    }
}