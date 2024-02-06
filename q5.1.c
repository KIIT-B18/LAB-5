#include <stdio.h>
void main()
{
 int a,b,c;
 printf("Enter 3 sides of triangle:");
 scanf("%d%d%d",&a,&b,&c);
 if(!(a+b)>c &&(b+c)>a && (a+c)>c)
 {
  printf("Do not form a valid triangle");
 }
 else
 {
  if(a==b && b==c)
  printf("Triangle is an equilateral triangle");
  else if (a==b || b==c || b==c)
  { 
   if((a*a+b==c*c) || (b*b+c*c==a*a) || (a*a+c*c==b*b))
   printf("This is a right-angled scalane triangle");
   else
   printf("This is a scalane triangle");
 }
 }
}
 
 
