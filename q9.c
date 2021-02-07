#include<stdio.h>
#include<math.h>
#include<bootstrap.h>
bool prime(int n) //9. WAP to determine if a given number is prime or not.

{     for(int i=2;i<=sqrt(n);i++)
{
        if(n%i==0){
         return false;}
} 
        return true;
}
int main()
{  int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(prime(num))
    printf("%d is prime",num);
    else
    {
        printf("%d is not prime",num);
    }
    return 0;
}