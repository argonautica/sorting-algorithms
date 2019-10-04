# include <stdio.h>
#define MAX 1000
int main(void)
{
    int i, j, N, pos, temp;
    int ar[MAX];
    printf ("Enter the number of integers to sort:");
    scanf ("%d", &N); 
    printf ("Enter the integers: \n");
    for (i=0; i<N; i++)
        scanf ("%d", &ar[i]);
    for(i=0; i<N-1; i++)
    {
        pos = i;
        for (j=i+1; j<N; j++)
        {
            if (ar[j]<ar[pos])
            {
                pos = j;
            }
        }
        temp = ar[pos];
        ar[pos]=ar[i];
        ar[i]=temp;
    }
    printf ("The sorted array : \n");
    for (i=0; i<N; i++)
        printf ("ar[%d] = %d \n", i, ar[i]);
    return 0;
}
