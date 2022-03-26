#include <stdio.h>


int main() {    

    int number1, number2, sum, multi;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      

    // Multiply number 1 and number 2
    multi = number1 * number2;
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
