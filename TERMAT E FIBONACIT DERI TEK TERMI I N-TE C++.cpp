// ***************************************************
//  Programi gjeneron dhe afishon serine e numrave
//  te Fibonacit derisa plotesohet nje numer termash
// ***************************************************
#include <iostream>  
using namespace std; 
 
int main() 
{  
int f0=0,f1=1,f,i,nrterm;    
cout << "Jepni numrin e elementeve: ";    
cin >> nrterm;
    
 cout << f0 << " " << f1 << " ";  // afishohen 0 dhe 1    
 for(i=2; i<nrterm; i++)          // unaza starton nga 2 sepse 0 dhe 1 jane afishuar    
	 {    
		  f=f0+f1;    
		  cout << f << " ";    
		  f0=f1;    
		  f1=f;    
	 } 
	    
return 0;  
} 
