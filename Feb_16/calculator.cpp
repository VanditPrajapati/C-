//By : Vandit Prajapati
//Program for returning object through using function

#include<iostream>
using namespace std;

//Defining class named calculator
class calculator
{
	public:
		int input1;
		int input2;
		
		//Function for initializing the inputs
		void setinput(int a,int b)
		{
			input1=a;
			input2=b;
		}
		
		//Function of class calculator type and returns the value of type calculator
		calculator add(calculator obj1,calculator obj2)
		{
			calculator obj3; //Creating a temp object of class calculator 
			obj3.input1=obj1.input1+obj2.input1;
			obj3.input2=obj1.input2+obj2.input2;
			return obj3; // Returning the temp object
		}
};

int main()
{
	calculator obj1,obj2,obj3;
	obj1.setinput(10,2);
	obj2.setinput(5,5);
	obj3=obj1.add(obj1,obj2);
	cout<<"Result: "<<obj3.input1<<" "<<obj3.input2<<endl;
	return 0;
}
