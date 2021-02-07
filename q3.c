#include<stdio.h> //work on progreess
int gcd(int x,int y)
{
    int z;
   if(x>y)
    z=x-y;
    if(y>x)
    z=y-x;
    return z;

}
int main()
{
    int a,b;
    printf("Enter the number \n");
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));


    return 0;
}