// *********************************
//    NUMRAT PALINDROMIK NE C++
// *********************************
#include <iostream>
using namespace std;
int main()
{
     int n, num, shifra, rev = 0;
     cout << "Jepni nje numer natyror: ";
     cin >> num;
     n = num;
     do
     {
         shifra = num % 10;
         rev = (rev * 10) + shifra;
         num = num / 10;
     } 
	 while (num != 0);
     cout << "Numri i anasjellte eshte: " << rev << endl;
     if (n == rev)
         cout << " Numri eshte palindrome.";
     else
         cout << " Numri nuk eshte palindrome.";
    return 0;
}
