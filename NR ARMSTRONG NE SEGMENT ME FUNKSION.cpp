// NUMRAT ARMSTRONG NE NJE SEGMENT
#include <iostream>
using namespace std;
void lexo()
{  
  int num1, num2;
  cout << "Jepni numrin e pare: ";
  cin >> num1;
  cout << "Jepni numrin e dyte: ";
  cin >> num2;
  cout << "Numrat Armstrong ndermjet " << num1 << " dhe " << num2 << " jane: " << endl;
}
void afisho(  int num1, int  num2)
{
	int i,digit,num,sum;
	  for(i = num1; i <= num2; i++)
  {
        sum = 0;
        num = i;
        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum += digit * digit * digit;
        }
        if(sum == i)
        {
            cout << i << endl;
        }
  }
}
int main()
{
	
   lexo();
   afisho(num1,num2);

  return 0;
}
