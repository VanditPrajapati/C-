//Code for calculator
#include<iostream>
using namespace std;

//Defining class named calculator for taking inputs and providing appropiate ouptu
class calculator
{
	public:
		//Taking two inputs 
		int input1;
		int input2;
		
		//Function for setting the inputs to the variables defined in class
		void setinput(int a,int b)
		{
			input1=a;
			input2=b;
		}

		//Function for addition 
		int add()
		{
			return input1+input2;
		}
		
		//Function for multiplication
		int mult()
		{
			return input1*input2;
		}
	
		//Function for division	
		int div()
		{
			return input1/input2;
		}
		
		//Function for subtraction
		int sub()
		{
			return input1-input2;
		}
};

int main()
{
	calculator obj1; //Declaring object obj1 of class calculator
	int op;
	cout<<"Enter the operation to perform:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n"<<endl;
	cin>>op; 
	obj1.setinput(10,2);
	// Switch case for performing operation
	switch(op)
	{
		case 1: obj1.add();
			cout<<"Addition of "<<obj1.input1<<" and "<<obj1.input2<<" is: "<<obj1.add()<<endl;
			break;
		
		case 2: obj1.sub();
			cout<<"Subtraction of "<<obj1.input1<<" and "<<obj1.input2<<" is: "<<obj1.sub()<<endl;
			break;
		
		case 3: obj1.mult();
			cout<<"Multiplication of "<<obj1.input1<<" and "<<obj1.input2<<" is: "<<obj1.mult()<<endl;
			break;

		case 4: obj1.div();
			cout<<"Division of "<<obj1.input1<<" and "<<obj1.input2<<" is: "<<obj1.div()<<endl;
			break;
	}
}		
