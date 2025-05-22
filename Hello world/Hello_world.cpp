/*#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    cout << "This is my first programm yes \n";
    cout << num;
    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

int mul (int x, int y); // прототип

int main() 
{
    int result = mul(5, 6);
    int i;
    for (i = 1; i <= 10; i++)
        cout << result << "\n";
}

int mul(int x, int y)
{
    return x * y;
}