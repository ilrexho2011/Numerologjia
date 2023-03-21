// Programi i numrave Prim ne segmentin 1-500 pa funksion
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
void NrPrim(int n)
{
	int i=1, j=1, nr_pjes=0;
	while(i<=n)
 {                             
    while(j<=n)
   {                               
     if(j<=i)
     {
      if (i%j==0) nr_pjes++;
     }                          
     j++;
   }                          
   if(nr_pjes==2)
   {
    cout << setw (12) << i <<"\n";
   }
   i++; j=1; nr_pjes=0;
 }     
}
int main()                 
{ 
   int m;
   cout << "Jepni kufirin m=";
   cin >> m;
   cout << endl;
   cout << "Numrat Prim nga 1-" << m << endl;
   cout << "-----------------------" << endl;
   NrPrim(m);                        
   cout << "-----------------------" << endl;
   getch();
   return 0;
 }   
