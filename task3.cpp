#include <iostream>
using namespace std;
void star1(int rows);
void star2(int rows);
main()
{
    int rows;
    cout<<"enter rows:";
    cin>>rows;
    rows=rows/2;
    star1(rows);
    star2(rows);

}
void star1(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows-i;j++)
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
void star2(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=2;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=i;k<=rows;k++)
        {
          cout<<"*";
        }
        cout<<endl;
     }
}