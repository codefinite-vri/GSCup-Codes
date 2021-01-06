/*Find sum of those proper divisors of number a*/
#include<iostream>
#include<stdio.h>
using namespace std;

int sumdiv(int num, int x);

int main()
{
	int num;
    cout<<"Enter a number : ";
	cin>>num;
	cout<<"DIVISORS = ";
	cout<<endl<<"SUM="<<sumdiv(num,num/2);
	return 0;
}

sumdiv(int num, int x)
{
	if(x==1)
	{
		cout<<x<<" ";
		return 1;
	}
	if(num%x==0)/*if x is a proper divisor*/
	{
		cout<<x<<" ";
		return x + sumdiv(num,x-1);
	}
	else
		return sumdiv(num,x-1);
}

