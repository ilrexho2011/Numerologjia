// *************************************
//      KONTROLLIMI I NUMRAVE PRIM
// *************************************
#include <iostream>
using namespace std;
int main()
{
  int n, i;
  bool eshtePrim = true;
  cout << "Jepni nje numer natyror: ";
  cin >> n;
  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          eshtePrim = false;
          break;
      }
  }
  if (eshtePrim)
      cout << n << " eshte numer Prim";
  else
      cout << n << " nuk eshte numer Prim";
  return 0;
}
