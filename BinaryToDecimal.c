//
//  main.c
//  Convert Binary to Decimal
//
//  Created by Leonardo Lima on 1/5/17.
//  Copyright © 2017 Leonardo Lima. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int Decimal(long long n){
    int decimalNumber = 0, i = 0, reminder;
    while(n!=0){
        reminder = n%10;
        n /= 10;
        decimalNumber += reminder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main() {
    
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary is equal to %d decimal:",n ,Decimal(n));
    return 0;
}
