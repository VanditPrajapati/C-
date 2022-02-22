//By: Vandit Prajapati
//Friend Function program 
//Constructor and Destructor

#include<iostream>
using namespace std;

class Rectangle;
class Square
{
	public:
		int side;
		
		//Constructor
		Square(int s)
		{
			side=s;
		}
		
		//Initializing a friend function
		friend void display(Rectangle , Square );
		
		//Destructor
		~Square()
		{
			cout<<"Square Destructor Called\n";
		}
};

class Rectangle
{
	public:
		int width,height;
		
		//Parametarized Constructor
		Rectangle(int w,int h)
		{
			width=w;
			height=h;
		}
		
		//Initializing a friend function
		friend void display(Rectangle , Square );
		
		//Destructor Defined
		~Rectangle()
		{
			cout<<"Rectangle Destructor Called\n";
		}
};

//Friend function defined
void display(Rectangle r, Square s)
{
	cout<<"Rectangle: "<< r.width * r.height;
	cout<<"\nSquare: "<< s.side * s.side;
	cout<<"\n";
}

int main()
{
	Rectangle rec(10,2);
	Square sq(5);
	display(rec,sq); //Friend function not requiring class object for calling
	return 0;
}
