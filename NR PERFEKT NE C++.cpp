// **************************************
// PROGRAMI QE KONTROLLON NUMRAT PERFEKT
// **************************************
#include <iostream>
using namespace std;
int main()
{
  int n, i, s = 0;
  
  cout << "Jepni nje numer natyror: ";
  cin >> n;
  for(i = 1; i < n; ++i)
  {
      if(n % i == 0)
      {
          s += i;
      }
  }
  if (s == n)
      cout << n << " eshte numer Perfekt";
  else
      cout << n << " nuk eshte numer Perfekt";
  return 0;
}
