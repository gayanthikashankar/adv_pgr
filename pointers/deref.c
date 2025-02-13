//dereferencing a pointer
#include <stdio.h>

int main(){
int num = 10;
int *ptr = &num;
printf("%d", *ptr); // outputs 10
return 0;
}
//ptr++ points to the elemet in the 2nd elemen