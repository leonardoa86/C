#include <stdio.h>
#include <stdlib.h>

int main()
{

const float JPY = 113.00;
const float EUR = 0.93;
const float CAD = 1.31;
const float UKP = 0.81;
const float MXN = 21.60;
const float BRZ = 3.20;
float amount;
int option;

float usdToJpy, usdToEuro, usdToCad;
float usdToPound, usdToMxpeso, usdToReal;

Loop: printf("Convert Dollar to the following currencies:\n");
      printf("1) Japanese Yen\n");
      printf("2) Euro\n");
      printf("3) Canadian Dollar\n");
      printf("4) British Pound\n");
      printf("5) Mexican Peso\n");
      printf("6) Brazilian Real\n");
      printf("7) Exit\n");

printf("Choose option: ");
scanf("%d",&option);

switch (option){

    case 1:
        printf("Enter dollar amount: ");
        scanf("%f",&amount);
        usdToJpy = amount * JPY;
        printf("Amount in Yen: %.2f\n",usdToJpy);
        goto Loop;
    break;
    case 2:
        printf("Enter dollar amount: ");
        scanf("%f",&amount);
        usdToEuro = amount * EUR;
        printf("Amount in Euro: %.2f \n",usdToEuro);
        goto Loop;
    break;
    case 3:
        printf("Enter dollar amount: ");
        scanf("%f",&amount);
        usdToCad = amount * CAD;
        printf("Amount in Canadian Dollar: %.2f \n",usdToCad);
        goto Loop;
    break;
    case 4:
        printf("Enter dollar amount: ");
        scanf("%f",&amount);
        usdToPound = amount * UKP;
        printf("Amount in Pound %.2f \n",usdToPound);
        goto Loop;
    break;
    case 5:
        printf("Enter dollar amount: ");
        scanf("%f",&amount);
        usdToMxpeso = amount * MXN;
        printf("Amount in Mexican Peso: %.2f \n",usdToMxpeso);
        goto Loop;
    break;
    case 6:
        printf("Enter dollar amount: ");
        scanf("%f",&amount);
        usdToReal = amount * BRZ;
        printf("Amount in Real: %.2f \n",usdToReal);
        goto Loop;
    break;
    case 7:
        printf("Bye");
        exit(0);
    break;

    default:
        break;
    }
system("pause");
return 0;
}
