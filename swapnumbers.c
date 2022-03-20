#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
printf("enter any two numbers\n");
scanf("%d%d",&a,&b);
printf("before swaping : a=%d,b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("after swaping : a=%d,b=%d",a,b);
getch();
}
