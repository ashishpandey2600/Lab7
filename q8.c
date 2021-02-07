#include<stdio.h>
int flag =1;   //ques:  8. WAP to determine whether a number is ‘even’ or ‘odd’.
void check(int n)        //input from main function and output from same funtion
{
    if(n%2==0)
    {
        flag=0;
        
    }
}
int main()
{
    int num;

    printf ("Enter the number\n");
    scanf("%d",&num);
    check(num);
    if(flag==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    
    return 0;
}