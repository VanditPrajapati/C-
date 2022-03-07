//Hybrid Inheritance

#include<iostream>
using namespace std;

class a
{
	public:
		int a;
		
		void disp_a()
		{
			cout<<"Inside Class A"<<endl;
		}
};

class b: public a
{
	public:
		int b;
		
		void disp_b()
		{
			cout<<"Inside Class B"<<endl;
		}
};

class c: public a
{
	public:
		int c;
		
		void disp_c()
		{
			cout<<"Inside Class C"<<endl;
		}
};

class d: public b, public c
{
	public:
		int d;
		
		void disp_d()
		{
			cout<<"Inside Class D"<<endl;
		}
};

int main()
{
	d d1;
	
	d1.disp_d();
	d1.disp_c();
	//d1.disp_a();

	b b1;
	b1.disp_b();
	b1.disp_a();
	
}
