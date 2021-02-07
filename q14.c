#include<stdio.h>  //14. Write a program to find the greatest common divisor 
                       //of two given numbers using recursion.
int gcd(int a,int b)
{
   if(a==0)
   return b;
   if(b==0)
   return a; 
   if(a>b)
   return gcd(a-b,b);
   return gcd(a,b-a);
}

int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("GCD = %d",gcd(num1,num2));

    
    return 0;
}