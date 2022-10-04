#include <stdio.h>
#include <math.h>
int main(){
    float a,b,y,result;

    printf("Ведiть перше цiле число a : ");
    scanf("%g", &a);  
    printf("Ведiть друге цiле число b : ");
    scanf("%g", &b); 
    printf("Ведiть друге цiле число y : ");
    scanf("%g", &y); 

    result = sqrt(a - pow(b , 2)) + sqrt((a * b) +(y / 2));
    printf("Результат : %.2f \n" ,result);
    return 0;
} 
