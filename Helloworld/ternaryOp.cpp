#include <iostream>
using namespace std;
int main()
{
    int num=40;
    if (num>60)
    {
        cout<<"greater"<<endl;
    }
    else
    cout<<"smaller"<<endl;
    cout<<"using ternary operator:"<<endl;
   string result=(num>60)? "greater":"smaller";
   cout<<result;\
   return 0;
}