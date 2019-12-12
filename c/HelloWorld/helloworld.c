#include <stdio.h>
#include <math.h>

int main(void)
{
    int MAX = 64;
    int cenas[MAX], i, value;

    for (i = 0; i < MAX; i++)
    {
        if (i % 2 == 0)
        {
            value = 1;
        }
        else
        {
            value = 2;
        }
        if (i > 7)
        {
            if (cenas[i - 8] == 1)
            {
                value = 2;
            }
            else
            {
                value = 1;
            }
        }
        cenas[i] = value;
    }
    for (i = 0; i < MAX; i++)
    {
        if ((i) % 8 == 0)
        {
            printf(" \n");
        }
        printf("%d ", cenas[i]);
    }
}