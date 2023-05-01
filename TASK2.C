#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int a,b;
  printf("the number a=");
  scanf("%d",b);
  printf("the number b=");
  scanf("%d",&b);
  if(a<b)
  {
   printf("a is minimum");
  }
  else
  {
   printf("b is minimum");
  }
  getch();
}