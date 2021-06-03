void noduplicate(char* out , char* c)
{
    int lookup[123]={0}; 
    /*this pesudo implementation of hash tables will allow us 
    to solve this problem in O(n) instead of O(n^2)worst case senarios*/
    /*think of this as simply a map*/
    //n is the number of charecters in the sentence
    int i=0;
    while(*(c+i)!='\0')
    {
        lookup[(int)*(c+i)]++; //hashing
        i++;
    }
    i=0;   
    int w=0;
    while(*(c+i)!='\0')
    {
        if(lookup[(int)*(c+i)]==0)
            i++;
        else if(lookup[(int)*(c+i)]>1)
        {
            *(out+w)=*(c+i);
            lookup[(int)*(c+i)]=0;
            i++;
            w++;
        }
        else{
            *(out+w)=*(c+i);
            lookup[(int)*(c+i)]=0;
            i++;
            w++;
        }
    }
}