/* 145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
Find the sum of all numbers which are equal to the sum of the factorial of their digits.
Note: as 1! = 1 and 2! = 2 are not sums they are not included.
This code returns the answer 40730 in 2.352839 seconds */

#include <iostream>
using namespace std;

int factorial(int n){
    return ( n==1 || n==0 ? 1 : n*factorial(n-1));
}

int digf(int n){
    int suma = 0;
    int n2 = n;
    do{
        int d = n2%10;
        n2 /= 10;
        suma += factorial(d);
    } while(n2>0);
    return (suma==n ? true : false);
}

int main(){
    int sumat = 0;
    for(int i=3; i<100000; i++){
        if(digf(i)){
            sumat+=i;
            cout << i << endl;
        }
    }
    cout << sumat << endl;
    return 0;
}
