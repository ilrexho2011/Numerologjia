// ******************************
//    Numrat binar ==> decimal
// ******************************
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int i=0,dec=0,bin,mb;
	cout << "Jepni numrin ne sistemin binar:" << endl;
	cout << "bin=";
	cin  >> bin;
	while(bin>0)
	{
		mb=bin%10;
	 	bin=bin/10;
	 	dec=dec+(mb*pow(2,i));
	 	i=i+1;
	}
	cout << "Numri ne sistemin decimal eshte dec=" << dec;
	return 0;
}
