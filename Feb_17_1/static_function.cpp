//By: Vandit Prajapati
//Static Member Function program

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
		
		static void getcount() //Static Function defined
		{
			cout<<"Value of count: "<<count<<endl;
		}
};

int item::count; //Static bvariable defined

int main()
{
	item a,b,c;
	
	a.getdata(100);
	item::getcount();
	
	b.getdata(200);
	item::getcount();
	
	c.getdata(300);
	item::getcount();
	
	return 0;
}
