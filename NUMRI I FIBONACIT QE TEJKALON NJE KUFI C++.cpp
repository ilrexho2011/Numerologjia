// *************************************************
// Programi i meposhtem gjeneron numra te Fibonaccit
// Procesi duhet te ndalet kur gjenerohet i pari 
// numer i Fibonacit qe tejkalon nje vlere te dhene
// *************************************************
#include <iostream>
using namespace std; 

int main() 
{ 
	int  n;   				// kufiri i dhene per tejkalim
	cout << "Jepni kufirin n=";
	cin >> n;
	int f0=0, f1=1, f=1; 	// Perftojme 3 elementet e pare te serise
	while (f<=n)        	// Perftojme elementet e tjere te Fibonacit
			{
				f0=f1; 
				f1=f; 
				f=f0+f1;
			} 
	cout << "Numri i pare qe tejkalon " 
		 << n 
		 << " eshte numri " 
		 << f 
		 << endl;
	return 0; 
}
