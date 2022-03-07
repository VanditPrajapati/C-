//Creating Student Class

#include<iostream>
using namespace std;

class student
{
	public:
		int roll_no;
		char name[20];
		
		void disp_student()
		{
			cout<<"Roll No.: "<<roll_no<<endl;
			cout<<"Name: "<<name<<endl;
		}
		
};

class test
{
	public:
		int marks[5];
		
		void setmarks()
		{
			cout<<"Enter the marks of 5 subjects: "<<endl;
			for(int i=0;i<5;i++)
			{
				cin>>marks[i];
			}
		}
};

class result: public student, public test
{
	public:
		int totalmarks=0, percentage;
		
		void calc_totalmarks()
		{
			for(int i=0;i<5;i++)
			{
				totalmarks+=marks[i];
			}
		}
		
		void calc_percentage()
		{
			percentage=(totalmarks*100)/500;
		}
		
		void disp_result()
		{
			cout<<"Total Marks: "<<totalmarks<<endl;
			cout<<"Percentage: "<<percentage<<"%"<<endl;
		}
};

int main()
{
	class result r;
	cout<<"Enter the roll no: ";
	cin>>r.roll_no;
	cout<<"Enter the name: ";
	cin>>r.name;
	
	r.setmarks();
	
	cout<<"\nDetails of Student: "<<endl;
	r.disp_student();
	r.calc_totalmarks();
	r.calc_percentage();
	r.disp_result();
}
