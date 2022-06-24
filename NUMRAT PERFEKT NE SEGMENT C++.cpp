// *******************************************
//   PROGRAM PER NUMRAT PERFEKT ne segment
// *******************************************
#include <iostream>
using namespace std;
int main()
{
	int n, s=0, i=1, j=1;
	cout << "Jepni numrin natyror N=";
	cin >> n;
	cout << endl;
	cout << "     Ne segmentin 1 - " << n << " :"<< endl;
	cout << "---------------------------------" << endl;
	while (i<=n)
	{
		
		while (j<=n)
			{
				
				if (j<i)
					{
						if (i%j==0) s+=j;
						
					}
			j++;
			}	
				if (s==i) cout << "Numri " << i << " eshte Perfekt" << endl;
			
	i++; s=0; j=1;
	}
	cout << "---------------------------------";
	return 0;
}
