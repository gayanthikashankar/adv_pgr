#include <iostream>
/*
implicit casting doesnt work w pointers
explicit works with pointer

typecasting ptr
*/
int main(){
    int i = 2;
    double j = 3;
    int *iptr = &i;
    double *dptr = &j;

    //iptr = dptr; => error
    iptr = (int*)dptr;
    dptr = (double*)iptr;

}