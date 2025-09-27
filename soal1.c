#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float v, j, t;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    scanf("%f", &j);
    scanf("%f", &t);
    
    v = j/t;
    
    printf("%.3f", v);
    
    return 0;
}