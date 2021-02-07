#include<stdio.h> //2. Write a program to swap two values where input and output statements
                    // are in calling (main) function.

  
void  swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf(" after swap a=%d ,    b=%d.\n",a,b);
   
}
int main()
{
    int a,b;
   printf("Enter the two number\n");
   scanf("%d%d",&a,&b);
   printf(" before swap a=%d ,    b=%d.\n",a,b);
   swap(a,b);
    return 0;
}