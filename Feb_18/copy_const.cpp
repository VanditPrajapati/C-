//Copy constructor called made by compiler

#include<iostream>
using namespace std;

class A
{
	private:
		int i=10;
	public:
		A()
		{
			cout<<"Inside the constructor"<<endl<<endl;
		}
		A(A &ob)
		{
			cout<<"Inside the copy constructor"<<endl<<endl;
		}
		
		/*void add(A ob,A ob1)
		{
			cout<<"Inside the add() function"<<endl<<endl;
		}*/
		
		A add_ret()
		{
			A temp;
			cout<<"Inside the add_ret() function"<<endl<<endl;
			return temp;
		}
};

int main()
{
	A obj1,obj2;
	
	//A obj2=obj1;	
	
	//obj1.add(obj1,obj2);
	
	obj2=obj1.add_ret();
	
	return 0;
}
