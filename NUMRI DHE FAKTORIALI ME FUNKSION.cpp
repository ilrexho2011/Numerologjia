// Program Numri Katrori
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
void NrKatrori()
{
	int i, katrori; 
   cout<<"Numri        Katori"<<endl;
   cout<<"______________________"<<endl;
 for(i=1; i<=10; i++)  
 cout<<setw(3)<<i<<setw(13)<<i*i<<endl;	
}
int main()                 
{
   NrKatrori();             
   getch();
   return 0;
 }   
