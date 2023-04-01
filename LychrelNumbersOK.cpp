//	Lychrel numbers
/*	If we take 47, reverse and add, 47 + 74 = 121, which is palindromic.

Not all numbers produce palindromes so quickly. For example,

349 + 943 = 1292,
1292 + 2921 = 4213
4213 + 3124 = 7337

That is, 349 took three iterations to arrive at a palindrome.

Although no one has proved it yet, it is thought that some numbers, like 196, 
never produce a palindrome. A number that never forms a palindrome through 
the reverse and add process is called a Lychrel number. 
Due to the theoretical nature of these numbers, and for the purpose of this problem, 
we shall assume that a number is Lychrel until proven otherwise. 
In addition you are given that for every number below ten-thousand, 
it will either (i) become a palindrome in less than fifty iterations, or, 
(ii) no one, with all the computing power that exists, has managed so far to map it 
to a palindrome. In fact, 10677 is the first number to be shown to require 
over fifty iterations before producing a palindrome: 4668731596684224866951378664 
(53 iterations, 28-digits).

Surprisingly, there are palindromic numbers that are themselves Lychrel numbers; the first example is 4994.
How many Lychrel numbers are there below ten-thousand?
NOTE: Wording was modified slightly on 24 April 2007 to emphasise the theoretical nature of Lychrel numbers.
Pergjigja e sakte eshte: 249	*/

#include <iostream>
#include <memory.h>
#define MAX 100
using namespace std;

void Reverse(char*a,char*res)
{
    memset(res,'0',MAX);
	int len,i;
    for(len=MAX-1;a[len]=='0';len--)
        ;
    for(i=len;i>=0;i--)
    {
    	res[len-i]=a[i];
	}
}

void Largesum(char*a,char*b,char*res)
{
    memset(res,'0',MAX);
    int alen,blen,i;
    for(alen=MAX-1;a[alen]=='0';alen--)
        ;
    for(blen=MAX-1;b[blen]=='0';blen--)
        ;
    int c=0;
    for(i=0;i<=alen||i<=blen;i++)
    {
        c+=a[i]+b[i]-'0'-'0';
        res[i]=c%10+'0';
        c=c/10;
    }
    if(c!=0) res[i]='0'+c;
}

int IsPalindrome(char*s)
{
	int len;
	for(len=MAX-1;s[len]=='0';len--)
        ;
	for(int pos=0;pos<=len/2;pos++)
    {
        if(s[pos]!=s[len-pos]) return 0;
    }
    return 1;
}

void itorevs(int n,char*str)
{
    memset(str,'0',MAX);
    for(int pos=0;n>0;pos++)
    {
        str[pos]='0'+n%10;
        n/=10;
    }
}

int main()
{
	int n,t,count=0;
	char str[MAX],temp[MAX],sum[MAX];
	for(n=1;n<=10000;n++)
	{
		itorevs(n,str);
		for(t=1;t<=50;t++)
		{
			Reverse(str,temp);
			Largesum(str,temp,sum);
			memcpy(str,sum,sizeof(str));
			if(IsPalindrome(str)) break;
		}
		if(t==51)
		{
			cout<<n<<endl;
			count++;
		}
	}
	cout<<count;
	return 0;
}

