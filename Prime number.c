#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, dividend = 0; ///num is the number introduced by the user, i is the variable used for the count, and dividend if for the total of divisors of the given number.

    printf("Enter a number: "); ///number is introduced.
    scanf("%d", &num); ///reads the numbers and is assigned to the variable "num".

    for(i=1; i<=num; i++)
    ///the count will start at 1, at it will go one by one till the count, variable "i", is equal to the number introduced "num".
    {

    if(num%i==0){
            dividend++;
        }
    ///The number introduced will be divided by every number from 1 to the number introduced, if the residue is 0, it will be added to the variable "dividends", if the total of dividends is 2, the number will be prime.
    }
    if(dividend==2){
        printf("%d is prime", num);
    }
    else{
        printf("%d is not prime",num);
    }

}

