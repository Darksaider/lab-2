#include <stdio.h>
int main(){
    float a = 100, 
    b = 1, 
    c = -2; 

    float y = 4 - ((3 * ( a + b + c)) / (2 - c)) - (1 / b);
    float one= (3 * ( a + b + c));
    float two= 4 - (3 * ( a + b + c) / (2 -c)) - (1/b);
    float three = 2 -c;
    float four = one / 4;
    float five = 1 / b;
    
    printf("Результат y = %g \n", y );
    printf("Результат y = %g \n", one );
    printf("Результат y = %g \n", two );
    printf("Результат y = %g \n", three );
    printf("Результат y = %g \n", four );
    printf("Результат y = %g \n", five );
}