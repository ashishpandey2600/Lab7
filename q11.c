#include<stdio.h>
int fib(int num) //11. WAP to generate a Fibonacci series.
{
    int t3,t1=0,t2=1;
    for(int i=1;i<=num;i++)
    { 
      printf("%d  ",t1);
      t3=t1+t2;
      t1=t2;
      t2=t3;

    }
    return 1;
}
int main()
{
    int n;
    printf("Enter the number  series have to print\n");
    scanf("%d",&n);
    fib(n);

    
    return 0;
}