#include <stdio.h>
#include <stdlib.h>

//Sort the elements of the array in ascending order.
int main()
{
    int i, j, a, num, number[30];

    printf("Enter the N number to be sorted\n");
    scanf("%d",&num);

    printf("Enter the desired numbers\n");
    for (i=0; i < num;i++){

        printf("element - %d : ",i);
        scanf("%d",&number[i]);
    }
    for(i=0; i < num; i++){
        for(j= i+1; j < num; j++){

            if(number[i] > number[j]){
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
     printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<num; i++)
    {
        printf("%d  ", number[i]);
    }
    return 0;

}
