#include <stdio.h>
#define max 100

int ifExists(int z[], int u, int v){
    int i;
    for(i=0;i<u;i++)
        if (z[i] == v) return 1;
    return 0;
}

void main(){
    int p[max], q[max];
    int m;
    int i,k;
    k = 0;

    // Getting the length of an array
    printf("Enter length of the array:");
    scanf("%d",&m);

    // Getting data for the array
    printf("Enter %d elements of the array : \n",m);

    // Using loop to get data for array
    for(i=0;i<m;i++)
        scanf("%d",&p[i]);
    
    // Saying p[index] value is same for q[index]
    q[0] = p[0];

    k = 1;
    
    for(i=1;i<m;i++){
        if(!ifExists(q,k,p[i])){
            q[k]=p[i];
            k++;
        }
    }

    printf("\nThe unique elements in the array are : \n");
    for(i=0; i<k; i++)
        printf("%d\n",q[i]);
}