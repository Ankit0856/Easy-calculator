#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int agrc , char *agrv[])
{
    float valueone;
    float valuetwo;
    char operator;
    float answer;

    printf("Enter your calculations:");
    scanf("%f" "%c" "%f"  , &valueone , &operator , &valuetwo );

    switch (operator) {
    case '+': answer =  valueone + valuetwo ;
    break;
    case '-' : answer = valueone - valuetwo ;
    break;
    case '/' : answer = valueone / valuetwo ;
    break;
    case '*' : answer = valueone * valuetwo ;
    break;
    default: goto fail;

    }
    printf("%9.6f%c%9.6f = %9.4f\n\n" , valueone , operator , valuetwo ,answer );
    goto exit;
    fail:
    printf("fail\n");
    exit:
    return 0;
}