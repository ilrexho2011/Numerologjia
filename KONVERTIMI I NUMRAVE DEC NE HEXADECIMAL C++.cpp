// ********************************
//  Numrat Decimal ==> Hexadecimal
// ********************************
 
#include <iostream>
using namespace std;
 
// funcksioni i konvertimit decimal ne hexadecimal
void decNeHexadec(int n)
{
    // vargu i karaktereve qe do te ruaje numrin hexadecimal
    char hexadecNum[100];
 
    // numeratori i vargut te karaktereve te numrit hexadecimal 
    int i = 0;
    while (n != 0) {
        // variabli i perkohshem per ruajtjen e mbetjes se rradhes
        int mbetja = 0;
 
        // ruajtja e mbetjes se rradhes ne variablin e perkohshem.
        mbetja = n % 16;
 
        // kontrollon nese mbetja < 10
        if (mbetja < 10) {
            hexadecNum[i] = mbetja + 48;
            i++;
        }
        else {
            hexadecNum[i] = mbetja + 55;
            i++;
        }
 
        n = n / 16;
    }
 
    // afishimi i shifrave ne vargun e numrit hexadecimal ne rendin e anasjellte
    for (int j = i - 1; j >= 0; j--)
        cout << hexadecNum[j];
}
 
// funksioni kryesor
int main()
{
    int n = 372657485;
 
    decNeHexadec(n);
 
    return 0;
}
