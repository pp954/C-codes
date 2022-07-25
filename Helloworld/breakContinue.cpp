#include <iostream>
using namespace std;
void Break(){
    for(int i=0;i<=10;i++)
    {
        if (i==3)
        {
            break;
        }
        cout<<i<<"\n";
    }
}

void Continue(){
    for(int i=0;i<=10;i++)
    {
        if (i==3)
        {
            continue;
        }
        cout<<i<<"\n";
    }
}
int main()
{
    cout<<"example of using break:"<<endl;
    Break();
    cout<<"example of using continue:"<<endl;
    Continue();
    return 0;

}