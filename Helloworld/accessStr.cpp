#include <iostream>
#include <string>
using namespace std;


int main()
{
    string name="Mary";
    cout<<"first letter of the name : "<<name[0]<<endl;
    cout<<"second letter of the name : "<<name[1]<<endl;
    name[2]='a';
    cout<<"changed name: "<<name;
    }