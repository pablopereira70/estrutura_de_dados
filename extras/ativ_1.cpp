#include <stdio.h> 
int main() {     
    int x = 10;     
    int *p = &x;     
    *p = *p + 5; // 10 + 5 
    printf("%d", x); //15    
    return 0; 
} 