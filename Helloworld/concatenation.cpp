#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName = "John ";
    string lastName = "Brown";
    string fullName = firstName.append(lastName);
    cout << fullName;
    return 0;
}