#include <stdio.h>

int main()
{
    int n;
    char star = '*';
    char space = ' ';
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            printf("%c", star);
        }
        printf("\n");
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=n; j++)
        {
            printf("%c", star);
        }
        printf("\n");
    }
    return 0;
}