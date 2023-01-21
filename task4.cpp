#include <iostream>
using namespace std;
void amplify(int seq,int divisible);
main()
{
    int seq;
    int divisible;
    cout<<"enter sequence:";
    cin>>seq;
    cout<<"enter divisible number";
    cin>>divisible;
amplify(seq,divisible);
}
void amplify(int seq,int divisible)
{ 
    cout<<"1";
    for(int i=2;i<=seq;i++)
    {
        if(i%divisible==0)
        {
            int j=i*10;
            cout<<","<<j;
    
        }
        else
        {
            cout<<","<<i;
        }
    }
}
   