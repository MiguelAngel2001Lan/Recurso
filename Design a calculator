
#include <stdio.h>
#include <stdlib.h>

int main ()
    {

    float Num1, Num2; ///The numbers introduced by the user.
    char Op; ///Operation that is going to be performed.

    printf("Calculator\n");
    checkpoint1:
    printf("Select an operator: + for addition | - for subtraction | * for multiplication | / for division \n");
    scanf("%c", &Op);
    ///The user selects the operation that he is going to perform.

    if(Op == '+' || Op == '-' || Op == '*' || Op == '/'){ ///This is to avoid users selecting an invalid operator.
        printf("Set first number \n");
        scanf("%f", &Num1);
        printf("Set second number\n");
        scanf("%f", &Num2);

        ///The program asks for the numbers and are saved to the variables num1 and num2

        float add = (Num1 + Num2);
        float sub = (Num1 - Num2);
        float mult = (Num1 * Num2);
        float div = (Num1 / Num2);

        ///Here the instruction for the tasks are assigned to the operators given to be performed.

        if (Op == '+'){
            printf("%f", add);
        }
        else if (Op =='-'){
            printf("%f", sub);
        }
        else if (Op == '*'){
            printf("%f", mult);
        }
        else if (Op == '/'){
            printf("%f", div);
        }

        ///The operations are saved to the variables set up earlier, and printed for the user.

    }
    else{
         printf("Invalid parameter, set a valid symbol");
        goto checkpoint1;
    }

    ///If the user introduced an invalid operator the program will restart and go back to operator selection.


    return 0;
    }
