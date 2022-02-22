//Code for defining a measure class and accordingly perform calculation
#include<iostream>
using namespace std;

//Defining class named Measure
class Measure
{
	public:
		//Defining variables for calculating the area and volume
		int height;
		int length;
		int width;

		//Function for initializing the variables
		void setInput(int a,int b,int c)
		{
			height=a;
			width=b;
			length=c;
		}		
		
		//Function for calculating area
		int area()
		{
			return height*width;
		}
		
		//Function for calculating Volume
		int volume()
		{
			return height*width*length;
		}
};

int main()
{
	Measure m1,m2; //Defining two objects m1 and m2 of class Measure
	int a,b,c;
	cout<<"Enter the height, width and length of Rectangle 1: ";
	cin>>a>>b>>c;
	m1.setInput(a,b,c);
	cout<<"Enter the height, width and length of Rectangle 2: ";
	cin>>a>>b>>c;
	m2.setInput(a,b,c);
	//Calling the function defined in class measure and outputing the value
	cout<<"Area and Volume of Rectangle 1: "<<m1.area()<<" and "<<m1.volume()<<endl; 
	cout<<"Area and Volume of Rectangle 2: "<<m2.area()<<" and "<<m2.volume()<<endl;
}
