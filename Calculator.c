//
//  main.c
//  Basic Calculator
//
//  Created by Leonardo Lima on 04/01/2017
//  Copyright © 2017 Leonardo Lima. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
 char operator;
 float number1, number2;
 float result;
    
 printf("Enter an operator (+, -, *,/, p): ");
 scanf("%c", &operator);
    
 printf("Enter two operands: ");
 scanf("%f %f",&number1, &number2);
     
    switch (operator) {
        case 'p':
            result = pow(number1,number2);            
            printf("%.1f ˆ %.1f) = %.1f ", number1, number2, result);
            break;           
        case '+':
            result = number1 + number2;
            printf("%.1f + %.1f = %.1f ", number1, number2, result);
            break;
        case '-':
            result = number1 - number2;
            printf("%.1f - %.1f = %.1f ", number1, number2, result);
            break;
        case '*':
            result = number1 * number2;
            printf("%.1f * %.1f = %.1f ", number1, number2, result);
            break;
        case '/':
            if(number2 != 0) {
                result = number1 / number2;
                printf("%.1f / %.1f = %.1f ", number1, number2, result);
                break;
            }
            else {
                printf("Division not allowed");
            }
        default:
            printf("Error! operator is not correct");
            break;
    }
    return 0;    
}


