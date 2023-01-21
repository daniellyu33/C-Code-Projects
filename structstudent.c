#include<stdio.h>

int main(){
     
     //Declaration

     struct Student {
         char name[20];
         int roll;
         int age;       
     };

     //Create struct variable

     struct Student s1;
     printf("Enter your name\n");
     scanf("%s",s1.name);

     printf("Enter your roll number\n");
     scanf("%d",&s1.roll);

     printf("Enter your age\n");
     scanf("%d",&s1.age);



     printf("Name: %s\n",s1.name);
     printf("Roll Number: %d \n", s1.roll);
     printf("Age: %d \n",s1.age);

     return 0;
}