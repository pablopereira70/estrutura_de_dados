#include <stdio.h> 
int main() {     
    int x = 3, 
    y = 7;     
    int *p = &x;     
    int *q = &y;      
    *p = *q; // 7    
    *q = *q + *p;  // 7 + 7
    printf("%d", y); // 14  
    return 0;
} 