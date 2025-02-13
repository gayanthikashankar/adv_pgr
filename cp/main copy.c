#include <stdio.h>

int main() {
    int num = 1;
    
    //For each row 
    for(int i = 1; i <= 4; i++) {
        //Print spaces for alignment
        for(int j = 1; j <= 4-i; j++) {
            printf("  ");
        }
        
        //Print numbers for this row
        for(int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    
    return 0;
}