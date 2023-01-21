#include <stdio.h>  
#include <string.h>  
  
// function to reverse string  
void rstr(char *st)  
{  
    // declaring variables  
    int i, l, temp;  
    l= strlen(st); // finding length of string  
      
    //iterating through each character in string   
    for (i = 0; i < l/2; i++)  
    {  
        //reversing string  
        temp = st[i];  
        st[i] = st[l - i - 1];  
        st[l - i - 1] = temp;  
    }  
}  
      
int main()  
{  
    char str[50]; // character string  
    printf ("Enter string: ");  
    scanf("%s",str) ;// taking string input from user  
    //calling function to reverse string   
    rstr(str);  
    //printing reversed string
    printf ("String after reversing: %s", str);  
    } 