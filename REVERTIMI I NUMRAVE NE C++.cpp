// ****************************************
//      I ANASJELLTI I NJE NUMRI
// ****************************************
#include <iostream>
using namespace std;
int main()
{
    int n, reversNum = 0, mbetja;
    cout << "Jepni nje numer natyror: ";
    cin >> n;
    while(n != 0)
    {
        mbetja = n%10;
        reversNum = reversNum*10 + mbetja;
        n /= 10;
    }
    cout << "Numri revers = " << reversNum;
    return 0;
}
