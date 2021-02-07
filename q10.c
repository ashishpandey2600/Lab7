#include<stdio.h>
int fact(int n) //10. WAP to print all the factors of a given number.
{    
    for(int i=1;i<=n;i++){
      if(n%i==0){
          printf("%d,",i);
      }
    }
    return 1;

}
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    fact(num);


    return 0;
}