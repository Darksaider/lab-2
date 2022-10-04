#include <stdio.h>
int main(){
    float a ,b,product,avageTwoNumbers,doubleAmount;

    printf("Введiть перше цiле число: ");
    scanf("%g", &a);  
    printf("Введiть друге цiле число: ");
    scanf("%g", &b); 
     
    product = a * b;
    doubleAmount = (a + b) * 2;
    avageTwoNumbers = (a + b) / 2; 
    
    printf("Добуток двох чисел; %g \n" ,product);
    printf("Подвоєна сума двох чисел; %g \n" ,doubleAmount);
    printf("Середнє значення двох чисел; %g \n" ,avageTwoNumbers);
    return 0 ;
} 