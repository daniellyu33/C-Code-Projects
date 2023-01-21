#include <stdio.h>
#include <stdlib.h>

int main(){

    int input;
    double answer = 0;

    printf("Please enter base: ");
    scanf("%d",&input);
    answer = (input  * 0.5);
    
    printf("Please enter the height: ");
    scanf("%d", &input);
    answer *=input;

    printf("Area of the triangle is :%.2f\n\n",answer);

    return 0;
}
