/*Simple For Loop Program*/
/*By AnthroSoft (https://github.com/AnthroSoft)*/
#include <stdio.h>
int main()
{
    int i, o, x;
    printf("Enter The Number\n");
    scanf("%d", &x);
    for (i = 0, o = 0; o <= x, i <= x; i++)
    {
        printf("%d %d\n", i, o);
        o++;
    }

    return 0;
}
