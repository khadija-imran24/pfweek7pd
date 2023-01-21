#include <iostream>
using namespace std;
void patientRecord(int period);
main()
{ 
    int period;
    cout<<"enter period:";;
    cin>>period;
    patientRecord(period);
}
void patientRecord(int period)
{
   
    int d =7;
    int treated=0;
    int untreated=0;
    int total;

    for(int i=1;i<=period;i++)
    {
         int patient;
         cout<<"enter number of patient visited:";
         cin>>patient;
        if(i%3!=0)
        {
            if(patient<=d)
            {
                treated=treated+patient;
            }
            else
            {
            untreated=untreated+patient-d;
            treated=treated+d;
            }
            
        }
        
        if(i%3==0)
        {
            if(untreated>treated)
            {
               d=d+1;
               
                  
            }
             if(patient<=d)
            {
                treated=treated+patient;
            }
            else
            {
            untreated=untreated+patient-d;
            treated=treated+d;
            }
        
        }
        
    }
    
        cout<<"untreated patient:"<<untreated;
        cout<<"treated patients:"<<treated;

}