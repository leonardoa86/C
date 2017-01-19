#include <stdio.h>
#include <string.h>

int main() {
    
    //Basic Examples using string library
    
    char  s1[80], s3[80];
    char dest1[80], dest2[80], dest3[80];
    
    //s1 = destination and string is the
    strcpy(s1,"water\n");
    strcpy(dest1, s1);
    printf("%s",dest1);
    
    //Other way
    char s2[80] = ("waterr\n");
    strcpy(dest2, s2);
    printf("%s",dest2);
    
    //s3 = destination and string is the
    strcpy(s3,"water\n");
    strcpy(dest3, s1);
    printf("%s",dest1);
    
    //Comparing string
    int i = strcmp(s1, s3);
    int j = strcmp(s2, s3);

    if(i == 0){
        printf("Strings are the same\n");
    }
    if(i < 0){
        printf("String 2 is greater than String 1\n");
    }
    if(i > 0){
        printf("String 2 is less than String 1\n");
    }
    printf("\n\nSecond Comparisson\n\n");
    if(j == 0){
        printf("Strings are the same\n");
    }
    if(j < 0){
        printf("String 2 is greater than String 1\n");
    }
    if(j > 0){
        printf("String 2 is less than String 1\n");
    }
return 0;
}
