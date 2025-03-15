#include <iostream>
/*
implicit casting doesnt work w pointers of diff types
explicit works with pointer

typecasting ptr
*/
int main(){
    int i = 2;
    double j = 3;
    int *iptr = &i; //pojniters that point to them
    double *dptr = &j;

    //iptr = dptr; => error
    iptr = (int*)dptr;
    dptr = (double*)iptr;

}