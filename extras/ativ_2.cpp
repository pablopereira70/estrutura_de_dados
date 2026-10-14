#include <stdio.h> 
int main() {     
    int v[3] = {4, 8, 12};     
    int *p = v; //4    
    p++;  // 8
    printf("%d", *p); // 8 
    return 0; 
} 