 // ******************************************************
 // Programi qe afishon faktoret prim te nje numri natyror  
 // ******************************************************
# include <iostream>  
# include <math.h>  
using namespace std;
    
int main()  
{  
    int n;  
    cout << "Jepni numrin te cilin do te faktorizoni n=";
    cin >> n;
	cout << "--------------------------------\n";
	cout << " Faktoret Prim te Numrit N=" << n << "\n";
	cout << "\t" << n << " = "; 
	// Fillojme zberthimin e faktoreve nga numri prim 2 qe eshte i vetmi nr prim cift
    while (n%2 == 0)  
    {  
        cout << 2 << " ";  
        n = n/2;  
    }  
    
    // per numrat n tek vazhdon faktorizimi nga 3 -shi deri tek rrenja katrore me hap 2
    for (int i = 3; i <= sqrt(n); i = i+2)  
    {  
        // Afishohen i-te qe jane plotpjestues te n-se  
        while (n%i == 0)  
        {  
            cout << i << " ";  
            n = n/i;  
        }  
    }  
    
    // Ky kusht kontrollon rastet kur n eshte vete nje numer prim > 2  
    if (n > 2)  
        cout << n << " ";  
    
    cout << "\n--------------------------------";
    
    return 0;  
}
