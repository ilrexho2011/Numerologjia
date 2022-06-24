// *********************************************
//  Kontrollimi per Numra Prim ne nje segment
// *********************************************
#include <iostream>
#include <iomanip>
using namespace std;
int main()                 
{
   int i=2, j=1, numero=0;
   int kufi;
   cout << "Jepni vleren kufi kufi=";
   cin >> kufi;
   cout << "     Ne segmentin 2 - " << kufi << " :" << endl;
   cout << "----------------------------------\n";
   while(i<=kufi)
 	{                             
    	while(j<=kufi)
	   	{                               
		     if(j<i)
		     {
		      if(i%j==0) numero++;
		     }                          
	     	j++;
	   	}                          
	
	   if(numero==1)
	   {
	    cout  << setw(8) << i << " eshte numer Prim," << "\n";
	   }
   i++;
   j=1;  numero=0;
 	}
return 0;
}   
