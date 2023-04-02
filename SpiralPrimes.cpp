/* Spiral primes

Problem 58 Starting with 1 and spiralling anticlockwise in the following way, a square spiral with side length 7 is formed.
37 36 35 34 33 32 31 38 17 16 15 14 13 30 39 18 5 4 3 12 29 40 19 6 1 2 11 28 41 20 7 8 9 10 27 42 21 22 23 24 25 26 43 44 45 46 47 48 49
It is interesting to note that the odd squares lie along the bottom right diagonal, but what is more interesting is that 8 out of the 13 numbers lying along both diagonals are prime; that is, a ratio of 8/13 ≈ 62%.
If one complete new layer is wrapped around the spiral above, a square spiral with side length 9 will be formed. If this process is continued, what is the side length of the square spiral for which the ratio of primes along both diagonals first falls below 10%?

Answer: 26241   */

#include <stdio.h>

int apower(int a, int n, int mod){
   long long power=a;
   long long result=1;
   
   while(n){
      if(n%2) result=(result*power)%mod;
      power=(power*power)%mod;
      n/=2;
      }
   return (int)result;
   }
   
int witness(int a, int n){
   int t,u;
   long long prev,curr;
   int i;
   long long lln=(long long) n;
   
   u=n/2;
   t=1;
   while(u%2==0){
      u/=2;
      t++;
      }
   prev=(long long)apower(a,u,n);
   for(i=1;i<=t;i++){
      curr=(prev*prev)%lln;
      if((curr==1ll)&&(prev!=1ll)&&(prev!=lln-1ll)) return 1;
      prev=curr;
      }
   if(curr!=1ll) return 1;
   return 0;
   }
   
int is_prime(int n){

   if(witness(2,n)) return 0;
   if(witness(7,n)) return 0;
   if(witness(61,n)) return 0;
   return 1;
   }
   
int main(){
   int side;
   int numbers;
   int primes;
   int percentage;
   
   primes=0;
   numbers=1;
   percentage=100;
   for(side=3;percentage>=10;side+=2){
      numbers+=4;
      if(is_prime(side*side)) primes++;
      if(is_prime(side*side-side+1)) primes++; 
      if(is_prime(side*side-2*side+2)) primes++; 
      if(is_prime(side*side-3*side+3)) primes++;
      percentage=(100*primes)/numbers;
      /* printf("%d %d\n",side,percentage);*/
      }
   printf("%d\n",side-2);
   return 0;
   } 