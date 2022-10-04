#include <stdio.h>
int main(){
    float a = 100, 
    b = 0, 
    c = -2; 

    float y = 4 - ((3 * ( a + b + c)) / (2 - c)) - (1 / b);

    printf("Результат y = %g \n", y );
  
}
