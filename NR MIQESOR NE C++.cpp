// ***************************************
//       NUMRAT AMICABLE (Miqesor) ne C++
// ***************************************
#include <iostream>
using namespace std;

int main()
{
	int nr1, nr2, i, sum1=0, sum2=0;
	
	cout << "Jepni numrin nr1=";
	cin >> nr1;
	cout << "Jepni numrin nr2=";
	cin >> nr2;
	
	for(i=1; i<nr1; i++)
	{
		if(nr1%i==0) sum1+=i;
	}
	for(i=1; i<nr1; i++)
	{
		if(nr2%i==0) sum2+=i;
	}
	if((sum1==nr2)&&(sum2==nr1)) cout << "Numrat " << nr1 << " & " << nr2 << " jane Amico!";
						  else   cout << "Numrat " << nr1 << " & " << nr2 << " nuk jane Amico!";
	
	return 0;
}
