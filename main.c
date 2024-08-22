/*
 * Switch case programming exercises and solutions in C
 *
 *  Created on: Aug 22, 2024
 *      Author: Hager Khaled
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    /*
//*************1.Write a C program to input week number(1-7) and print day of week name using switch case.**************
   int day;
   printf("Input week number(1-7):");
   scanf("%d",&day);
   switch(day)
   {
   case 1:
     printf("Saturday");
     break;
   case 2:
     printf("Sunday");
     break;
   case 3:
     printf("Monday");
     break;
   case 4:
     printf("Tuesday");
     break;
   case 5:
     printf("Wednesday");
     break;
   case 6:
     printf("Thursday");
     break;
   case 7:
     printf("Friday");
     break;
   }

   */


   /*
//****************2.Write a C program to input month number and print total number of days in month****************
   int mounth;
   printf("Input month number:");
   scanf("%d",&mounth);
   switch(mounth)
   {
   case 1:
    printf("Total number of days = 31");
    break;
   case 2:
    printf("Total number of days = 28/29");
    break;
   case 3:
    printf("Total number of days = 31");
    break;
   case 4:
    printf("Total number of days = 30");
    break;
   case 5:
    printf("Total number of days = 31");
    break;
   case 6:
    printf("Total number of days = 30");
    break;
   case 7:
    printf("Total number of days = 31");
    break;
   case 8:
    printf("Total number of days = 31");
    break;
   case 9:
    printf("Total number of days = 30");
    break;
   case 10:
    printf("Total number of days = 31");
    break;
   case 11:
    printf("Total number of days = 30");
    break;
   case 12:
    printf("Total number of days = 31");
    break;
   default:
    printf("invalid input");
    break;
   }

   */




   /*

  //*************3. Write a C program to input an alphabet and check whether it is vowel or consonant using switch case.************8
     char alpha;
     printf("Input alphabet:");
     scanf("%c",&alpha);
     switch(alpha)
     {
     case 'a':
        printf("vowel");
        break;
     case 'e':
        printf("vowel");
        break;
     case 'o':
        printf("vowel");
        break;
     case 'u':
        printf("vowel");
        break;
     case 'i':
        printf("vowel");
        break;
     case 'A':
        printf("vowel");
        break;
     case 'E':
        printf("vowel");
        break;
     case 'O':
        printf("vowel");
        break;
     case 'U':
        printf("vowel");
        break;
     case 'I':
        printf("vowel");
        break;
     default:
        printf("constant");
        break;

     }

*/


/*

//*************4.Write a C program to input two numbers from user and find maximum between two numbers using switch case.**************

   int num1,num2;
   printf("Input first number: ");
   scanf("%d",&num1);
   printf("Input second number:");
   scanf("%d",&num2);
   switch(num1>num2)
   {
   case 1:
      printf("Maximum:%d",num1);
      break;
   case 0:
      printf("Maximum:%d",num2);
      break;

   }

*/


/*

//***************5.Write a C program to input number from user and check whether the number is even or odd using switch case.***************

  int num;
  printf("Input number:");
  scanf("%d",&num);
  switch(num%2==0)
  {
      case 1:
        printf("Even number");
        break;
      case 0:
        printf("Odd number");
        break;
  }

*/





/*
//****************6.Write a C program to input a number and check positive ,negative or zero using switch case.*************8
        int num;
        printf("Input number:");
        scanf("%d",&num);
        switch(num>0)
        {
        case 1:
            printf("%d is positive",num);
            break;
        case 0:
            switch(num<0)
            {
                case 1:
                 printf("%d is negative ",num);
                 break;
               case 0:
                 printf("%d is Zero",num);
                 break;
            }
        }

*/




/*
//**************7.Write a C program to find all roots of a Quadratic equation using switch case***************


    float a,b,c ,delta, root1,root2 , imag;
    printf("Input a:");
    scanf("%f",&a);
    printf("Input b: ");
    scanf("%f",&b);
    printf("Input c: ");
    scanf("%f",&c);
    delta =( b * b ) -( 4*a*c );
    switch(delta>0)
    {
      case 1:
        root1= (-b+sqrt(delta)) / (2*a);
        root2= (-b-sqrt(delta)) / (2*a);
        printf("root1 = %.2f  ",root1);
        printf("root2 = %.2f",root2);
        break;

      case 0:
        switch(delta<0)
        {
        case 1:
          root1= root2= -b/(2*a);
          imag= sqrt(-delta)/(2*a);
          printf("root1 = %.2f + i%.2f  ",root1,imag);
          printf("root2 = %.2f - i%.2f",root2,imag);
          break;
        case 0:
            root1=root2= -b/(2*a);
            printf("two roots are equal and reel only= %.2f and %.2f",root1,root2);
            break;
        }
    }

*/





//*************8.Write a C program to create menu driven calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions.****************
   float num1,num2,result=0;
   char op;
   printf("enter number1 then operator(+,-,*,/) then number2 : ");
   scanf("%f %c %f",&num1,&op,&num2);
   switch(op)
   {
       case '+':
           result = num1+num2;
           printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
           break;
       case '-':
           result = num1-num2;
           printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
           break;
       case '*':
           result = num1*num2;
           printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
           break;
       case '/':
           result = num1/num2;
           printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
           break;
       default :
           printf("not valid operator");
   }



    return 0;
}
