#include<iostream>
using namespace std;

class square;
class rectangle
{
	int l,b;
	public:
		rectangle(int x, int y)
		{
			l=x;
			b=y;
		}
		
		void rect_disp()
		{
			cout<<"Length and Breadth of rectangle are: "<<l<<" "<<b<<endl<<endl;
		}
		
		friend rectangle operator == (rectangle x, square y);
		friend rectangle operator > (rectangle x, rectangle y);
};

class square
{
	public:
		int l;
		square(int x)
		{
			l=x;
		}
		
		void sqr_disp()
		{
			cout<<"Length of Square is: "<<l<<endl;
		}
}; 

rectangle operator == (rectangle x, square y)
{
	if(x.l==y.l && x.b==y.l)
	{
		cout<<"Rectangle is Square"<<endl;
	}
	else
	{
		cout<<"Rectangle is not Square"<<endl;
	}
}

rectangle operator > (rectangle x, rectangle y)
{
	if(x.l*x.b > y.l*y.b)
	{
		cout<<"Rectangle A is bigger than B"<<endl;
	}
	else
	{
		cout<<"Rectangle B is bigger than A"<<endl;
	}
}

int main()
{
	rectangle q(10,10),r(11,5);
	square p(10),z(11);
	q>r;
	q==p;
}
