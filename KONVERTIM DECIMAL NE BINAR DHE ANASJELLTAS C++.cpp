// *************************************
//   NUMRAT BIN NE DEC E ANASJELLTAS
// *************************************
#include <iostream>
#include <cmath>
using namespace std;
int konvertoBinNeDec(long long);
int konvertoDecNeBin(long long);
int main()
{
    long long n;
    int zgjedhja;
    cout << "\n\t-------------------------";
    cout << "\n\t| KONVERTUESI I NUMRAVE |";
    cout << "\n\t| 01. DECIMAL NE BINAR  |";
    cout << "\n\t| 02. BINAR NE DECIMAL  |"; 
    cout << "\n\t-------------------------\n";
    rijep:
    cout << "\n\t BENI ZGJEDHJEN TUAJ  ";
    cin >> zgjedhja;
    switch (zgjedhja)
    {
    	case 1: {cout << "Jepni nje numer decimal: ";
    			 cin >> n;
				 cout << n << " nga decimal = " << konvertoDecNeBin(n) << " ne binar";}break;
		case 2: {cout << "Jepni nje numer binar: ";
			     cin >> n;
			     cout << n << " nga binar = " << konvertoBinNeDec(n) << " ne decimal";}break;
		default: cout << "\n\tVlere e gabuar: "; goto rijep;
	}
    return 0;
}
int konvertoBinNeDec(long long n)
{
    int decimalNum = 0, i = 0, mbetja;
    while (n!=0)
    {
        mbetja = n%10;
        n /= 10;
        decimalNum += mbetja*pow(2,i);
        ++i;
    }
    return decimalNum;
}
int konvertoDecNeBin(long long n)
{
    int binNum = 0, i = 0, mbetja;
    while (n!=0)
    {
        mbetja = n%2;
        n /= 2;
        binNum += mbetja*pow(10,i);
        ++i;
    }
    return binNum;
}
