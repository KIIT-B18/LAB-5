#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c;
 printf("Input values for a,b and c:");
 scanf("%d%d%d",&a,&b,&c);
 double d;
 d=(b*b-(4*a*c));
 if(a==0 && b==0)
 {
  printf("No Solutuion");
 }
 else if(d==0)
 {
  printf("There is only one root");
 }
 else if(d<0)
 {
  printf("No real root");
 }
 else
 {
  double r1,r2;
  r1=(-b+(sqrt(d)))/2*a;
  r2=(-b-(sqrt(d)))/2*a;
  printf("Roots are %lf %lf",r1,r2);
 }
 return 0;
}
