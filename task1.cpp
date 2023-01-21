#include <iostream>
using namespace std;
void star(int rows);
main()
{
    int rows;
    cout<<"enter rows:";
    cin>>rows;
    star(rows);

}
void star(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }

}