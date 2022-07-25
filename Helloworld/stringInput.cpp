#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullname;
    string nickname;
    cout<<"Enter your first and last name: "<<endl;
    getline(cin,fullname);
    cout<<"your first and last name: "<<fullname<<endl;;
    cout<<"Enter your nickname "<<endl;
    cin>>nickname;
    cout<<"nickname: "<<nickname;
}