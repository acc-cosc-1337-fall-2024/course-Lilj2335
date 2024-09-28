//add include statements
#include "repetition.h"

// add function(s) code here
int factorial(int num)
{
    int sum = 1;
    for (auto i = 1; i <= num; i++)
    {
        sum = sum * i;
    }
    return sum;




}
int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        if(num1 < num2)
        {
            //swaps num1 and num2
            num1 = num1 + num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
        } 
        else if(num1 > num2)
        {
            num1 -= num2;
        }
    }
    return num1;
}


















    
    
    










