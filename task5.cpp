#include <iostream>
using namespace std;
void triangle(int number);
main()
{
    int number;
    cout<<"enter number:";
    cin>>number;
    
triangle( number);
}
void triangle(int number)
{ 
    int sum=0;
    int n1=0;
     int i=1;
    
       while(i<=number) 
       {
        sum=n1+i;
        n1=sum;
        i=i+1;
       }
       
    
    cout<<sum;
}
   