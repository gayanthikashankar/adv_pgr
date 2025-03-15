#include <stdio.h> /input and output op
#include <stlib.h> //memory, random number, integrearithemtic, string conversion, system calls

int main(){
    int* ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    free(ptr); // frees memory
    return 0;
}