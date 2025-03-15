#include <stdio.h>
#include <stdlib.h>
/*
dynamic memory allocation with pointers
typecasting: changing from one data type to another
int* = telling the memory that we are storing an integer value (divide into 4 bytes)
static memalloc is better when we dont have to free the memory manually etc
*/
int main()
{
    int *arr;
    int n;
    printf("Enter the number of elements: ");  
    scanf("%d", &n);
    
    arr = (int*) malloc(n * sizeof(int));
    
    if (arr == NULL) {         
        printf("Memory allocation failed\n");   
        return 1;
    }
    
    for (int i = 0; i < n; i++) {    
        arr[i] = i + 1;
    }
    
    for (int i = 0; i < n; i++) {    
        printf("%d ", arr[i]);        
    }
    printf("\n");    
      
    free(arr);  
    return 0;
}