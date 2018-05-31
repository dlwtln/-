#include<stdio.h>
int minus(int a,int b);
int plus(int a,int b);
int multiple(int a,int b);
int divide(int a,int b);
int main()
{
 char sign;
 int num1, num2;
 printf("start the calculator");
 printf("\n--------------------------\n");
 scanf("%d %c %d",&num1,&sign,&num2);
 if(sign=='+')
    plus(num1,num2);
 else if(sign=='-')
    minus(num1,num2);
 else if(sign=='*')
    multiple(num1,num2);
  
 else if(sign=='/')
    divide(num1,num2);
 else
 printf("please input valid sign\n");
 
 
 main(); 
}
int minus(int a,int b)
{
 int s;
 s=a-b;
 printf("%d - %d = %d\n",a,b,s);
}
int plus(int a,int b)
{
 int s;
 s = a+b;
 printf("%d + %d = %d\n",a,b,s);
}
int multiple(int a,int b)
{
 int s;
 s = a*b;
 printf("%d * %d = %d\n",a,b,s);
}
int divide(int a,int b)
{
 int s;
 s = a/b;
 printf("%d / %d = %d\n",a,b,s);
}
