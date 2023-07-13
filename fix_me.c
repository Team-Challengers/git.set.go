#include <stdio.h>


int main() {    

    int number1, number2, sum, multi, substract, div;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    // Multiply number 1 and number 2
    multi = number1 * number2;
    div = number1 / number2;
    substract = number1 - number2;
    printf("%d + %d = %d", number1, number2, sum);
    printf("%d - %d = %d", number1, number2, substract);
    printf("%d * %d = %d", number1, number2, multi);
    printf("%d / %d = %d", number1, number2, div);
    return 0;
}
