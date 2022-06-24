// ***********************************************
//       NUMRAT ARMSTRONG 3 SHIFROR NE C++
// ***********************************************
#include <iostream>
using namespace std;
int main()
{
  int Num, num, mbetja, sum = 0;
  cout << "Jep nje numer natyror: ";
  cin >> Num;
  num = Num;
  while(num != 0)
  {
      mbetja = num % 10;
      sum += mbetja * mbetja * mbetja;
      num /= 10;
  }
  if(sum == Num)
    cout << Num << " eshte numer Armstrong.";
  else
    cout << Num << " nuk eshte numer Armstrong.";
  return 0;
}
