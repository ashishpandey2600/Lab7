#include<stdio.h> //1. Write a Menu Driven program to find addition, subtraction, 
                     //multiplication and division all
                     //using one user defined function for each operation.
int sum(int x,int y){  // function for sum
    int z =x+y;
    return z;

}
int sub(int x,int y){ // function for subtraction
    int z =x-y;
    return z;

}
int multi(int x,int y){ // function for multiplication
    int z =x*y;
    return z;

}
float div(float x,float y){ // funtion for division
    float z =x/y;
    return z;

}
int main()
{
    char ch;
    int a,b;
    printf("Enter the choice press \n1> '+' for addtion.\n2> '-' for subration.\n3> '*' for multiplication .\n4> '/' for divison\n");
    scanf("%c",&ch);
    printf("Enter two values\n");
    scanf("%d%d",&a,&b);
    if(ch=='+')
    {

        printf("%d+%d=%d",a,b,sum(a,b));
    }
    else if(ch=='-')
    {
        printf("%d-%d=%d",a,b,sub(a,b));
    }
    else if(ch=='*')
    {
        printf("%d*%d=%d",a,b,multi(a,b));
    }
    else if(ch=='/')
    {
        printf("%f/%f=%f",(float)a,(float)b,div(a,b));
    }
    else
    {
        printf("Try again, wrong choice");
    }

    return 0;
}