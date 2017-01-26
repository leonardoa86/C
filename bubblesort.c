#include <stdio.h>
#define TRUE 1;
#define FALSE 0;

void swap(int *n1, int *n2);
void bubblesort(int arr[], int size);
int main() {

  int arr[] = {10,15,2,5,4,7};
  int n = sizeof(arr)/sizeof(arr[0]); //size of the array
  int i;
  bubblesort(arr,n);

//Display array
  printf("Sorting Array\n");
  for(i = 0; i < n ; i++){
    printf("\narray[ %d ] = %d",i , arr[ i ]);
  }

  printf("\n");
  return 0;
}
void swap(int *n1, int *n2){
    int swap = *n1;
    *n1 = *n2;
    *n2 = swap;
}
void bubblesort(int arr[], int size){

  int i, swapped;

  while(swapped){
    swapped = FALSE;
  for(i = 0; i < size-1 ; i++){
    if(arr[i] > arr[i+1]){ // use < to sort in descending order
      //swap numbers
      swap(&arr[i],&arr[i+1]);
      swapped = TRUE;
      }
    }
  }
}
