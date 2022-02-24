//Code to demonstrate Unary operator overloading

#include<iostream>
using namespace std;

class space
{
	int x,y,z;
	public:
		space()
		{
			x=0;
			y=0;
			z=0;
		}
		
		space(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		
		void display()
		{
			cout<<"x="<<x<<"\ty="<<y<<"\tz="<<z<<endl;
		}
		
		void operator - ();
		void operator -- ();
		friend space operator ++(space s);
		void operator ++(int);
};

space operator ++ (space s)
{
	++s.x;
	++s.y;
	++s.z;
	//cout<<"x="<<x<<"\ty="<<y<<"\tz="<<z<<endl;
	return s;
}

void space::operator ++(int)
{
	x++;
	y++;
	z++;
	cout<<"x="<<x<<"\ty="<<y<<"\tz="<<z<<endl;
}	

void space::operator - ()
{
	x=-x;
	y=-y;
	z=-z;
}

void space::operator -- ()
{
	x--;
	y--;
	z--;
}

int main()
{
	space s1(5,4,3),s2;
	s1.display();
	-s1;
	s1.display();
	--s1;
	s1.display();
	cout<<"Pre Increment: "<<endl;
	s2=++s1;
	s2.display();
	cout<<"Post Increment: "<<endl;
	s1++;
	return 0;
}
