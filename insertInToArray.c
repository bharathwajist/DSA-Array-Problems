#include <stdio.h>
#define max 100

void main()
{
    // Creating variables
    // P[max] is an array to store values in it
    // n is to get size of an array
    // i used to represent index of an array
    // k's value is used to get position to insert
    int p[max], n, i, k, j;
    printf("Enter length of array");
    scanf("%d", &n);
    printf("Enter %d elements of array\n", n);
    for (i = 0; i <= n - 1; i++)
        scanf("%d", &p[i]);
    printf("\nThe array is : \n");
    for (i = 0; i <= n - 1; i++)
        printf("%d\n", p[i]);
    printf("\nEnter position where to insert : ");
    scanf("%d", &k);
    k--; /* The position is always one value higher that the subscript,
    so it is decremented by one */
    for (j = n - 1; j >= k; j--)
        p[j + 1] = p[j];
    /* Shifting all the elements of the array one position down from the location
    of insertion */
    printf("\nEnter the value to insert: ");
    scanf("%d", &p[k]);
    printf("\nArray after insertion of element : \n");
    for (i = 0; i <= n; i++)
        printf("%d\n", p[i]);
}