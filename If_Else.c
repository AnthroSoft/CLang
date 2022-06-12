/*if keyword is used to implement the decision control instruction.
The condition for the if statement is always enclosed within a pair of parentheses.
If the condition is true, then the set of statements will execute.
If the condition is not true then the statement will not execute*/

/*Here's an example of program using If else statement*/
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    if (x == 1)
    {
        printf("X = 1");
    }
    else if (x == 2)
    {
        printf("X = 2");
    }
    else
    {
        printf("X is not 1 nor 2");
    }

    return 0;
}
