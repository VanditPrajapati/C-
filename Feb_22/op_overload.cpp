//Demo code for operator overloading

#include<iostream>
using namespace std;

class complex
{
	int real, img;
	
	public:
		complex() //default constructor
		{
			real=0;
			img=0;
		}
		
		complex(int r, int i) //parameterized constructor
		{
			real=r;
			img=i;
		}
		
		void display() //function to display values of real and img 
		{
			cout<<"The value for real part is: "<<real<<endl;
			cout<<"The value for img part is: "<<img<<endl<<endl;
		}
		
		friend complex operator + (complex c1, complex c2); //Operator '+' overloading
		
		complex operator - (complex c) //Operator '-' overloading
		{
			complex temp;
			temp.real=real-c.real;
			temp.img=img-c.img;
			return temp;
		}
		
		complex operator * (complex c) //Operator '*' overloading
		{
			complex temp;
			temp.real=real*c.real;
			temp.img=img*c.img;
			return temp;
		}
		
		complex operator / (complex c) //Operator '/' overloading
		{
			complex temp;
			temp.real=real/c.real;
			temp.img=img/c.img;
			return temp;
		}			
};

complex operator + (complex c1, complex c2) //Operator '+' overloading
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}

int main()
{
	complex c1(1,1), c2(5,10);
	complex c3;
	int c=1,op;
	printf("Enter the operation to perform:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1: c3=c1+c2;
			c3.display();
			break;
		case 2: c3=c1-c2;
			c3.display();
			break;
		case 3: c3=c1*c2;
			c3.display();
			break;
		case 4: c3=c1/c2;
			c3.display();
			break;
	}
}
