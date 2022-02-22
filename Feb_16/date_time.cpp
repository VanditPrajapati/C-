#include<iostream>
#include<ctime>
using namespace std;

class Time
{
	public:
		int hour;
		int min;
		int sec;
		
		time_t now=time(0); //For getting the current time
		tm *ltm=localtime(&now);
		
		//Initializing the variables of class time
		void setTime()
		{
			hour=ltm->tm_hour;
			min=ltm->tm_min;
			sec=ltm->tm_sec;
		}
		
		//Obtaining the values of variables
		Time getTime()
		{
			Time t;
			t.hour=hour;
			t.min=min;
			t.sec=sec;
			return t;
		}
		
		//Providing the parameters of time as argument to the function and then subtracting the time from the current time
		Time sleepTime(int h, int m, int s)
		{
			Time t1;
			t1.hour=hour-h;
			t1.min=min-m;
			t1.sec=sec-s;
			//For defining the seconds in range of 60
			if(t1.sec<0)
			{
				t1.sec=t1.sec+60;
				t1.min--;
			}
			//For defining minute in range of 60secs
			if(t1.min<0)
			{
				t1.min=t1.min+60;
				t1.hour--;
			}
			if(t1.hour<0)
			{
				t1.hour=t1.hour+24;
			}
			return t1;
		}
};

//Date class for defining the date and finding age 
class date
{
	public:
		int day, month, year;
		time_t now=time(0);
		tm *ltm=localtime(&now);
		
		//Setting the current date
		date setDay()
		{
			date d;
			year=ltm->tm_year+1900;
			month=ltm->tm_mon+1;
			day=ltm->tm_mday;
			d.day=day;
			d.month=month;
			d.year=year;
			return d;
		}
		
		//Initializing the variables 
		date getDay()
		{
			date d1;
			d1.year=year;
			d1.month=month;
			d1.year=year;
		}
		
		//Inputing the date of birth
		date setDOB(int y, int m, int d)
		{
			date d2;
			d2.year=y;
			d2.month=m;
			d2.day=d;
			return d2;
		}
		
		//Finding the age of person by subtracting current date from dat of birth
		date findAge(date d3)
		{
			date d4;
			d4.year=year-d3.year;
			d4.month=month-d3.month;
			d4.day=day-d3.day;
			if(d4.day<0)
			{
				d4.day=d4.day+30;
				d4.month--;
			}
			if(d4.month<0)
			{
				d4.month=d4.month+12;
				d4.year--;
			}
			return d4;
		}
};

int main()
{
	int hour, min, sec, day, month, year;
	Time t,t1;
	date d,d1,d2,d3;
	t.setTime();
	t1=t.getTime();
	cout<<"\nCurrent Time: "<<t1.hour<<":"<<t1.min<<":"<<t1.sec<<"\n"<<endl;
	cout<<"Enter details of time at which you had gone to sleep: "<<endl;
	cout<<"Hour: ";
	cin>>hour;
	cout<<"Minute: ";
	cin>>min;
	cout<<"Second: ";
	cin>>sec;
	t1=t.sleepTime(hour,min,sec);
	cout<<"\nSleep Time is: "<<t1.hour<<":"<<t1.min<<":"<<t1.sec<<"\n"<<endl;
	
	d=d.setDay();
	d1=d.getDay();
	cout<<"Current Day is: "<<d1.day<<"/"<<d1.month<<"/"<<d1.year<<"\n"<<endl;
	cout<<"Enter Birth Date details: "<<endl;
	cout<<"Day: ";
	cin>>day;	
	cout<<"Month: ";
	cin>>month;
	cout<<"Year: ";
	cin>>year;
	d2=d.setDOB(year,month,day);
	d3=d.findAge(d2);
	cout<<"Age is: "<<d3.year<<" Years "<<d3.month<<" Months "<<d3.day<<" Days "<<"\n"<<endl;
}
