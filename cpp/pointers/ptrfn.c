#include <stdio.h>


void updateValue(int *ptr){
    *ptr = 20;

}


int main(){

    int num = 10;
    updateValue(&num);
    printf("%d", num);
    return 0;
}