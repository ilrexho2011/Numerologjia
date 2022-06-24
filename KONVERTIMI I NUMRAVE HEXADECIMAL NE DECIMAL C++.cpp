// **********************************
//   Numrat hexadecimal ==> decimal
// **********************************
#include <bits/stdc++.h>
using namespace std;
 
// Funksioni i konvertimit hexadecimal ne decimal
 
int hexadecNeDec(string hexNum)
{
    int gjatesi = hexNum.size();
 
    // Inicializimi i vleres baze ne 1, dmth 16^0
    int baza = 1;
 
    int decNum = 0;
 
    // Dekompozimi i karaktereve ne shifra nisur nga karakteri i fundit
    for (int i = gjatesi - 1; i >= 0; i--) {
        // nese karakteri ndodhet ne intervalin '0'-'9', konvertohet
        // serisht ne shifrat 0-9 me spostim prej 48 nga
        // vlera e kodit ASCII
        if (hexNum[i] >= '0' && hexNum[i] <= '9') {
            decNum += (int(hexNum[i]) - 48) * baza;
 
            // shumezimi i bazes me fuqine (bazen e sistemit)
            baza = baza * 16;
        }
 
        // nese karakteri ndodhet ne intervalin 'A'-'F' , konvertohet
        // serisht ne shifrat 0-9 me spostim prej 55 nga
        // vlera e kodit ASCII
        else if (hexNum[i] >= 'A' && hexNum[i] <= 'F') {
            decNum += (int(hexNum[i]) - 55) * baza;
 
            // edhe njehere si me siper
            // behet shumezimi i bazes me fuqine (bazen e sistemit)
            baza = baza * 16;
        }
    }
    return decNum;
}
 
// funksioni kryesor i programit
int main()
{
    string hexNumer = "1AED09";
    cout << (hexadecNeDec(hexNumer));
 
    return 0;
}
