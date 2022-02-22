//Demo of function overloading

#include<iostream>
using namespace std;

int sum(int i);
int sum(int i, int j);
int sum(int i,int j, int k);

int main()
{
	cout<<"Sum(10) is: "<<sum(10)<<endl;
	cout<<"Sum(10,20) is: "<<sum(10,20)<<endl;
	cout<<"Sum(10,20,30) is: "<<sum(10,20,30)<<endl;
}

int sum(int i)
{
	return i;
}

int sum(int i, int j)
{
	return i+j;
}

int sum(int i,int j,int k)
{
	return i+j+k;
}
