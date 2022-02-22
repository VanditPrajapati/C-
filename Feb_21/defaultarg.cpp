//Demo code for Default Arguments

#include<iostream>
using namespace std;

//Default arguments function passing
int sum(int x,int y=10,int z=20)
{
	return (x+y+z);
}

int main()
{
	cout<<"Sum is (5): "<<sum(5)<<endl;
	cout<<"Sum is (5,5): "<<sum(5,5)<<endl;
	cout<<"Sum is (5,5,5): "<<sum(5,5,5)<<endl;
}
