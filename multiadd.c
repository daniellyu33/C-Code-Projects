#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(int argc,char *argv[])
{   /*as program name also counted as argument thus
        to check atleast one argument we need to check argc<2*/
    int i,j,sum=0;
    if(argc<2){
        printf("Error!!\n");
        return 1;
    }
    else{
        //we started from 1 as argv[0] points to program name
        for(i=1;i<argc;i++){
            for(j=0;j<strlen(argv[i]);j++){
                //isdigit() return 0 if it is not digit otherwise non-zero value
                if(isdigit(argv[i][j])==0){
                    printf("\nError!! It is not a digit!!");
                    return 1; // exit from program as it is not digit
                }
            }//end of 2nd for
            sum = sum + atoi(argv[i]);//convert string to integer
        }
        printf("\nThe sum of its argument:%d\n",sum);
    }

    return 0;
}