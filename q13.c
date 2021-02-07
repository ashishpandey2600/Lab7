#include<stdio.h>
int fact(int n)  //13. WAP that calculates the factorial of a given number using recursion.
{
    if(n==0)
    return 1;
    
    return (n*fact(n-1));
    

}

int main()
{ 
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("%d",fact(num));


    
    return 0;
}