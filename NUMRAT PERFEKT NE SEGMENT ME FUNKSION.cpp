// PROGRAM PER NUMRAT PERFEKT ne segment ME FUNKSION
#include <iostream>
#include <iomanip>
using namespace std;
void perfekt (int n)
{
	int i=1, j=1, shuma=0;
   while(i<=n)
 {                             
    while(j<=n)
   {                               
     if(j<i)
     {
      if(i%j==0)
      shuma=shuma+j;
     }                          
    
     j++;
   }                          

   if(shuma==i)
   {
    cout << setw(8) << i << "\n";
   }

   i++;
   j=1;  shuma=0;
 }
}
int main()                 
{
   int const m=10000;
   cout << "Numra te persosur 1 - " << m << endl;
   cout << "-----------------" << endl;
   perfekt (m);
   cout << "-----------------" << endl; 
   return 0;
 }   
