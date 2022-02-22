//By: Vandit Prajapati
//Constructor and Destructor program

#include<iostream>
using namespace std;

class dist
{
	public:
		int feet,inch;
		
		//Default Constructor Defined
		dist()
		{
			feet=10;
			inch=20;
		}
		
		//Parameterized Constructor defined
		dist(int f, int i)
		{
			feet=f;
			inch=i;
		}
		
		void get()
		{
			cout<<"Feet and inch is: "<<feet<<" & "<<inch<<endl;
		}
		
		//Function of type class dist defined
		dist distance(dist d)
		{
			dist d1;
			d1.feet=d.feet;
			d1.inch=d.inch;
			return d1;
		}
		
		//Destructor Defined
		~dist()
		{
			cout<<"Destructor called"<<endl;
		}
};

int main()
{
	dist d1(10,5);
	dist d2;
	dist d3;
	d3=d1.distance(d1); //Calling function distance to obtain object of type class distance
	d1.get();
	d2.get();
	d3.get();
}
