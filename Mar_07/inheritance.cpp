//Single Level Inheritance of class

#include<iostream>
using namespace std;

class person
{	
	public:
		int age=10,height=20;
		
		/*person()
		{
			age=10;
			height=50;
		}*/
		
		void dispage()
		{
			cout<<"Inside Public (Age): "<<age<<endl;
		}
		
		void dispheight()
		{
			cout<<"Inside Public (Height): "<<height<<endl;
		}
	
	private:
		int age1=100;
		
		void dispage_private()
		{
			cout<<"Inside Private (Age): "<<age1<<endl;
		}
		
	protected:
		int age2=30;
		
		void dispage_protected()
		{
			cout<<"Inside Protected (Age): "<<age2<<endl;
		}
};

class doctor: public person
{
	public:
		int weight=60;
		
		void dispweight()
		{
			cout<<"Weight of doctor is: "<<weight<<endl;
		}
};

int main()
{
	doctor d;
	
	d.dispweight();
	d.dispage();
	//d.dispage_protected();
	//d.dispage_private();
	d.dispheight();
}
