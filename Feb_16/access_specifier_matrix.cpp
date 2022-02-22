//By: Vandit Prajapati
//Program for showing the access specifiers of C++

#include<iostream>
using namespace std;

//Defining Class access_specifier 

class access_specifier
{
	// Defining variable of type public, private and protected
	private:
		int p;
	protected:
		int p1;
	public:
		int i;
		
		//Public variable can be directly used by public function
		void dis_public()
		{
			cout<<"Value of public variable is: "<<i<<endl;
		}
			
		//Protected variable 
		void dis_protected(int x)
		{
			p1=x;
			cout<<"Value of protected variable is: "<<p1<<endl;
		}
		
		//Private variable 
		void dis_private(int x)
		{
			p=x;
			cout<<"Value of private variable is: "<<p<<endl;
		}
};

int main()
{
	access_specifier d;
	d.i=10;
	
	//d1.p1=20; Cannot be accessed as the variable is defined as protected
	//d1.p=30; Cannot be accessed as the variable is defined as private
	
	d.dis_public();
	d.dis_protected(20);
	d.dis_private(30);
}	
