#include<iostream>
using namespace std;
int main()
{
//Q1 - Write a program to check whether two numbers (entered by user) are equal or not.
cout<<"Solution of-Q1 - Write a program to check whether two numbers (entered by user) are equal or not."<<endl;
int a,b;
cout<<"Enter a number: ";
cin>>a;
cout<<"Enter another number: ";
cin>>b;
cout<<(a==b)<<endl;

//Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if
//both the conditions 'a < 50' and 'a < b' are true.
cout<<"solution of-Q2 - Write a program to take the values of two variables a and b from the keyboard and then"; 
cout<< "check if both the conditions 'a < 50' and 'a < b' are true"<<endl;
int f,g;
cout<<"enter a integer:";
cin>>f;
cout<<"enter another integer:";
cin>>g;
cout<<(f<50&&f<g)<<endl;


int total,boys,girls;
total = (45*80)/100;
boys = 17;
girls= total-boys;
cout<<girls<<endl;
//Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
cout<<"Solution of-Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number."<<endl;

int n,first,second,third,forth,fifth,sum;
cout<<"Enter  a five digit number:";
cin>>n;
first=n/10000;
n=n%10000;
second=n/1000;
n=n%1000;
third=n/100;
n=n%100;
forth=n/10;
n=n%10;
fifth=n;
sum=forth+first;
cout<<"Required sum: "<< sum<<endl;

//Write a program to calculate the sum of digits of a 3 digit number. 
cout<<"Solution of-Q5-Write a program to calculate the sum of digits of a 3 digit number."<<endl;
cout<<"Enter any two digit number: ";
cin>>n;
first=n/100;
n=n%100;
second=n/10;
n=n%10;
third=n;
cout<<(first+second+third)<<endl;
//Q6- Design a calculator to perform basic arithmetic operations (+,-,/,*,%).
cout<<"Solution of-Q6-Write a program to calculate the sum of digits of a 3 digit number."<<endl;
float x,y;
cout<<"enter one number: ";
cin>>x;
cout<<"enter another number:";
cin>>y;
cout<<"sum="<<x+y<<endl;
cout<<"Difference="<<x-y<<endl;
cout<<"Product="<<x*y<<endl;
cout<<"Quotient="<<x/y<<endl;
cout<<"modules="<<int(x)%int(y)<<endl;







return 0;
}