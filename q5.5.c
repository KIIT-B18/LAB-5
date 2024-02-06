#include<stdio.h>
void main()
{
 char c;
 printf("Enter char");
 scanf("%c",&c);
 int a,b,total;
 printf("Enter two no.");
 scanf("%d%d",&a,&b);
 switch(c)
 {
  case '+':
  total=a+b;
  break;
  case '-':
  total=a-b;
  break;
  case '*':
  total=a*b;
  break;
  case '/':
  total=a/b;
  break;
  case '%':
  total=a%b;
  break;
  }
 printf("Result: %d",total);
} 
