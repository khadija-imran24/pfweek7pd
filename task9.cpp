#include <iostream>
using namespace std;
void star1(int rows);
main()
{
    int rows;
    cout<<"enter rows:";
    cin>>rows;
   
    star1(rows);
   
}
void star1(int rows)
{
    for(int i=1;i<=rows;i++)
    {
      for(int l=1;l<=i;l++)
        {
          cout<<"*";
        }
        for(int j=1;j<=rows-i;j++)
        {
            cout<<" ";
        }
         for(int m=1;m<=rows-i;m++)
        {
           cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
          cout<<"*";
        }
        cout<<endl;
     }

}
