 #include<iostream>
using namespace std;
void cargo(int n);
main()
{
        
       int n;
       cout<<"enter count of cargo:";
       cin>>n;
       cargo(n);
}
void cargo(int n)
      {
        int ton;
        float price;
        float total;
        float sum1=0;
        float sum2=0;
        float sum3=0;
        float percent1=0.00;
        float percent2=0.00;
        float percent3=0.00;
      
       for (int count=1;count<=n;count=count+1)
    {
        cout<<"enter tonnage of cargo:";
        cin>>ton;
        if(ton<=3)
        {
            sum1=sum1+ton;
            
            
        }
        if(ton>3&&ton<=11)
        {
            sum2=sum2+ton;
            
        }
        if(ton>11)
        {
            sum3=sum3+ton;

        }
        
       
}
         total=sum1+sum2+sum3;
         percent1=(sum1/total)*100;
          percent2=(sum2/total)*100;
           percent3=(sum3/total)*100;
           price=((sum1*200)+(sum2*175)+(sum3*120))/total;
           cout<<"price:"<<price<<endl;
        cout<<percent1<<"%"<<endl;
        cout<<percent2<<"%"<<endl;
        cout<<percent3<<"%"<<endl;
        
}
    
  

    