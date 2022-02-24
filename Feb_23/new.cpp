//CPP Code to demo the new operator
#include<iostream>
using namespace std;

int main()
{
	int *p = new int;
	*p=55;
	
	cout<<"Value: "<<*p<<endl;
	cout<<"Address of int variable: "<<p<<endl;
	cout<<"Size of int variable: "<<sizeof(*p)<<endl;
	cout<<"Size of int pointer: "<<sizeof(p)<<endl;
	cout<<"Address of int pointer: "<<&p<<endl;
	return 0;
}
