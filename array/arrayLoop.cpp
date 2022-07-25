#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num[4] = {7, 2, 8, 4};
    for (int i = 0; i <= 4; i++)
    {
        cout << "element " << i + 1 << "\n"
             << num[i] << endl;
    }
}
