// Program rekursiviteti per vargun e Fibonacit
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

// Funksioni rekursiv i Fibonacit
unsigned long fibonaci(unsigned long numer)
{
	if ((numer == 0) || (numer == 1))
	return numer;
	else return fibonaci(numer - 1) + fibonaci(numer-2);
}

// Programi kryesor me rekursivitet
int main ()
{
	// Llogaritja e numrave te Fibos deri te termi i 14-te
	cout << "   Termi        Vlera    " << endl;
	cout << "_________________________" << endl;
	for(int i = 0; i <= 19; ++i)
	cout << setw(8) << "Termi " << i << "=" << setw(8) << fibonaci(i) << endl;
	getch();
	return 0;
}
