#include <stdio.h>
#include <stdlib.h>

char validator[1] = " ";

int main()
{
    int num;

    repit:

    printf("Please enter a number ");
    scanf("%d", &num);

    ///Number is introduced by the user, and saved to the variable num.

    if (num%2==0){
        printf("%d is even ", num);
    }
    else
    {
        printf("%d is odd ", num);
    }

    ///A number is even if the residue of its division by 2 is 0, otherwise is odd.

      printf("Do you want to repit? 'Y' to continue!\n");
        scanf("%s", validator);

        //strcmp(validator, "Y"  )  == 0
        if (validator[0] == 'Y' ){
                goto repit;
        };

    ///Here we use a validator to assign a key, that if introduced by the user it will go to the start, this in order repeat the process.

        printf("Program finished!\n");
        return 0;
}
    ///If the user introduces a key that is not the one used for the validator the program will finish.
