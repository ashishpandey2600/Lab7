#include<stdio.h>  //ques:5 WAP to calculate the factorial of a given number.
int fact(int n)
{  int facto=1;
  for(int i=2;i<=n;i++)
  {
      facto*=i;

  }
  return facto;

}
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("%d is factorial of %d ",fact(num),num);
    
    return 0;
}