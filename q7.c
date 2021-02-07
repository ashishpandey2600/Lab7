#include<stdio.h> //WAP to calculate series :- sin X = X – X^3 / 3! + X^5 / 5! – X^7 / 7!
#include<math.h>  // work on progress!!!!!!!!!!!!!
int fact(int m)
{ int facto=1;
  for(int i=2;i<=m;i++)
  {
      facto*=i;
  }
  return facto;
}
float sin(float X)
{    float n,store=0;
  for(int i=1;i<=7;i++)
  {
      if(i%2!=0)
      {
         store+=pow(X,i)/fact(i);
         if(i==3 || i==7)
         store=store*-1;
      }

  }
  return store;
}


int main()
{
    float x;
    printf("Enter the x");
    scanf("%f",&x);
    sin(x);
    printf("%f",sin(x));
    return 0;
}
