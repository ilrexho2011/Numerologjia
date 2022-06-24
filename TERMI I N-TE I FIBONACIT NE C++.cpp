// *******************************************
// Programi i meposhtem gjeneron termin e N-TE
//   te Fibonacit, ku N jepet nga tastiera
// *******************************************
#include <iostream>
using namespace std;

int nr=10;   		// kerkohet vlera e termit te 10 te Fibonacit
int f0=0,f1=1,f=1;
int nr_term=3;

int main ()
{
    while (nr_term < nr)
	{    
		f0=f1; 
	    f1=f;
	    f=f0+f1; 
		nr_term++;
	}
	// afishimi perfundimtar i termit te N-te te Fibonacit
	cout << "Numri " << f << " ishte termi i " << nr_term << "-te";

    return 0;
}
