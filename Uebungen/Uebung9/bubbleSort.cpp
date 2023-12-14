#include <stdio.h>

void sort(int *a, unsigned int n);

int main()
{
    int array[] = {15, 7, 13, 24, 9, 25};
    sort(&array[0], 6);
    for(int i = 0; i <6; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

void sort(int *a, unsigned int n) //n ist laenge des Arrays
{
    int *start = a;
    int temp = *a;
    for (int round = 0; round < n - 1; round++)
    {
        for (int position = 0; position < n - 1 - round; position++)
        {
            if (*a > *(a + 1))
            {
                temp = *a;
                *a = *(a + 1);
                *(a + 1) = temp;
            }
            a = a + 1;
        }
        a = start;
    }
}
