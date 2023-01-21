 #include<iostream>
using namespace std;
void printPercentage(int n);
main()
{
       int number;
       int n;
       cout<<"enter number of integers:";
       cin>>n;
       printPercentage(n);
}
void printPercentage(int n)
      {
        int number;
        float sum1=0.00;
        float sum2=0.00;
        float sum3=0.00;
        float percent1=0.00;
        float percent2=0.00;
        float percent3=0.00;
      
       for (int count=1;count<=n;count=count+1)
    {
        cout<<"enter a  number:";
        cin>>number;
        if(number%2==0)
        {
            sum1=sum1+1;
            percent1=(sum1/n)*100;
            
        }
        if(number%3==0)
        {
            sum2=sum2+1;
            percent2=(sum2/n)*100;
            
        }
        if(number%4==0)
        {
            sum3=sum3+1;
            percent3=(sum3/n)*100;
            
        }
       
}
        cout<<percent1<<"%"<<endl;
        cout<<percent2<<"%"<<endl;
        cout<<percent3<<"%"<<endl;
        
}
    
  

    