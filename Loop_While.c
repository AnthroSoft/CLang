/*Multiplication Table Using While Loop*/
/*By AnthroSoft (https://github.com/AnthroSoft)*/
#include <stdio.h>
int main()
{
    int i, o, a, num;
    num = 1;
    printf("Enter The Number\n");
    scanf("%d", &i);
    a = i;
    o = a;
    while (i < o * 11)
    {
        printf("%d x %d = %d\n", num, a, i);
        i = i + o;
        num = num + 1;
    }

    return 0;
}
