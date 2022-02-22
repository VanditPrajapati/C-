//By: Vandit Prajapati
//Code to demo inline function

#include<iostream>
using namespace std;

inline int cube(int n) //Defining the function cube as inline
{
	int i=10;
	i++;
	cout<<i<<endl;
	cout<<"Inside the function"<<endl<<endl;
	return n*n*n;
}

int main()
{
	cout<<"Cube of value 5 is: "<<cube(5)<<endl<<endl;
}
