/*Switch Case Control Statements*/
/*By AnthroSoft (https://github.com/AnthroSoft)*/
#include <stdio.h>
int main()
{
    int age;
    printf("Please Enter Your Age\n");
    scanf("%d", &age);
    switch (age)
    {
    case 1 ... 17:
        /*"..." indicates the range for e.g "1 ... 17" is indicating the range of number from 1 till 17*/
        printf("You Are Underaged");
        break;
    case 18 ... 99:
        printf("You Are Adult");
        break;

    default:
        printf("You Are Overaged!");
        break;
    }
    return 0;
}