#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int sum=0,iterator=0;
    int storage;
    int *Array;
    size_t sizearr;
    printf("Enter the size of the array (1<= n <= 1000):  ");
    scanf("%d",&sizearr);
    printf("\n"); // for spacing
     Array=malloc(sizearr*sizeof(int));
     int sizeofarr=sizearr;
     for(iterator=0;iterator<sizeofarr;iterator++)
        {
            printf("Enter the number you want to store in the first element of array: ");
            scanf("%d",&Array[iterator]);
            printf("\n"); // for spacing
            sum+=Array[iterator];
        }
        printf("Sum of the elements of array is : %d",sum);
     free(Array);
    return 0;
}
