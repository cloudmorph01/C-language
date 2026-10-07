#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter a Row:");

    scanf("%d", &n);

    printf("Enter a column:");

    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        printf("*");

        for (int j = 1; j <= m; j++)
        {

            printf("*");
        }
        printf("\n");
    }
    return 0;
}
