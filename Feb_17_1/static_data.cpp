//By: Vandit Prajapati
//Static Data Member Code

#include<iostream>
using namespace std;

class item
{
	int number;
	static int count; //Static Variable declared
	
	public:
		void getdata(int a)
		{
			number=a;
			count++;
		}
		
		void getcount()
		{
			cout<<"Value of count is: "<<count<<endl;
		}
};

int item::count; //Static Variable defined

int main()
{
	item a,b,c;
	
	a.getdata(100);
	a.getcount();
	
	b.getdata(200);
	a.getcount();
	
	c.getdata(300);
	a.getcount();
	
	return 0;
}


