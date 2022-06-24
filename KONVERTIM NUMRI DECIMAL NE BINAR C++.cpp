// *****************************
//   Numrat decimal ==> binar
// ***************************** 
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i=0, dec, bin=0, mb;
	cout << "Jepni numrin ne sistemin decimal:" << endl;
	cout << "dec=";
	cin  >> dec;
	while(dec>0)
	{
		mb=dec%2;
	 	dec=dec/2;
	 	bin += mb*pow(10,i);
	 	i=i+1;
	}
	cout << "Numri ne sistemin binar eshte bin=" << bin;
	return 0;
}
