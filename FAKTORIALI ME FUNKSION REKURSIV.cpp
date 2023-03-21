//faktoriali me funksion rekursiv
#include<iostream>

#include<iomanip>
using namespace std;
int faktoriali (int n)
{
	if (n == 1)      
          return 1;      
        else      
          return(n * faktorial(n-1));      
}
int main ()
{
	int m;
	cout <<setw (8)<<"jepni vleren natyror k=";
	cin >>setw (14)>>m;
	cout<<"faktoriali="<<faktoriali(m);
	return 0;
}
