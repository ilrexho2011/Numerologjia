/* The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.
Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.
(Please note that the palindromic number, in either base, may not include leading zeros.)  
returns the answer 872187 */

#include<iostream>

using namespace std;

int* getdigits(int num, int base)
{
        int res = num;
        int remainder;
        int numofdigits = 0;
        int* digits;
        int* temp;
        digits = new int[1];
        digits[0] = 0;
        while(res != 0)
        {
                temp = new int[numofdigits + 2];
                for(int i = 1; i <= numofdigits; i++)
                        temp[i+1] = digits[i];
                numofdigits++;
                temp[0] = numofdigits;
                remainder = res % base;
                temp[1] = remainder;
                res = (res - remainder)/base;
                delete [] digits;
                digits = temp;
        }
        return digits;
}

bool ispalindromic(int* digits)
{
        int numofdigits = digits[0];
        for(int i = 1; i <= numofdigits/2; i++)
                if(digits[i] != digits[numofdigits - i + 1])
                        return false;
        return true;
}

int main()
{
        int sum = 0;
        for(int i = 1; i < 1000000; i++)
                if(ispalindromic(getdigits(i,10)) && ispalindromic(getdigits(i,2)))
                        sum += i;
        cout << "The sum of all numbers, less than one million, which are palindromic in base 10 and base 2 is " << sum << ".\n";
        system("PAUSE");
        return 0;
}
