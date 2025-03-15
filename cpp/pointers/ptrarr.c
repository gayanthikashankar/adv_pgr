#include <stdio.h>

int main(){
int arr[3] = {1,2,3};
int *ptr = arr;
printf("%d", *(ptr+1)); //outputs 2
return 0;

}