# include <stdio.h>
int main(void)
{
    int ar[10], key, i, j;
    printf ("Enter 10 numbers: \n");
    for (i=0; i<10; i++)
        scanf ("%d", &ar[i]);
    for (i=1; i<10; i++)
    {
        key = ar[i];
        j = i-1;
        while (j>=0 && ar[j]>key)
        {
            ar[j+1] = ar[j];
            j = j-1;
        }
        ar[j+1] = key;
    }
    printf ("The Sorted array:\n");
    for (i=0; i<10; i++)
        printf ("ar[%d] = %d\n", i, ar[i]);
    return 0;
}
