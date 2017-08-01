/*Program for calculations*/
#include<iostream.h>
#include<conio.h>

int main()
{
int a,b;
float c;
char op;

int add(int,int);
int sub(int,int);
int mul(int,int);
float divi(int,int);
cout<<"Enter the two numbers: ";
cin>>a>>b;
cout<<"Enter the operater: ";
cin>>op;
if (op=='+')
{
c=add(a,b);
}
else if (op=='-')
{
c=sub(a,b);
}
else if (op=='*')
{
c=mul(a,b);
}
else if (op=='/')
{
c=divi(a,b);
cout<<"The quotient is: "<<a/b<<" & ";
}
else
{
cout<<"Wrong Choice. Check the operator.";
}
if(op=='/')
{
cout<<"the remainder is: "<<c;
}
else
{
cout<<"Result is: "<<c;
}
return 0;
}

int add(int a, int b)
{
return a+b;
}

int sub(int a, int b)
{
return a-b;
}
int mul(int a, int b)
{
return a*b;
}
float divi(int a, int b)
{
return a%b;
}
