#include <iostream>  
#include <stdio.h>  
#include <cstdio>  
#include <iomanip> 

// setfill(), setw() 
// http://www.cplusplus.com/reference/iomanip/setfill/

using namespace std;

class Time  
{  

  int h,m,s;

  public:

  Time()  
  {  
  	 h=0, m=0; s=0;  
  }  

  void getTime();  

  void show()
  {
   	cout<< h<< ":"<< m<< ":"<< s;  
  }  

  void pfshow()
  {
	printf( "%02d:%02d:%02d", h, m, s );
  }


  void setTime(int newh, int newm, int news);

  Time operator+(Time);   	// overload '+' operator
  
  // TOOD: overload '-' operator TASK 1
  Time operator-(Time);
  
  // TODO: overload '<<' operator TASK 2 (hint:friend)
  friend ostream &operator<<(ostream &output, const Time &t);

}; // end class  


void  Time::setTime(int newh, int newm, int news)
{
   	h  = newh;
   	m  = newm;
   	s  = news;
}


// Provided Example of '+' Overload
Time Time::operator+(Time t1)	
{  
 	Time t;  
 	int a,b;  

 	a = s + t1.s;  
 	t.s = a % 60;  
 	b = (a/60) + m + t1.m;  
 	t.m = b % 60;  
 	t.h = (b/60) + h + t1.h;  
 	t.h = t.h % 12;  

 	return t;  
} 

// TODO: Add '-' Overload
Time Time::operator-(Time t2)	
{  
 	Time t;  
 	int a,b;
	int subM = 0;
	int subH = 0;

	if (t2.s > s)
	  {
	    a = (60 + s) - t2.s;
	    t.s = a;
	    subM ++;
	  }
	else
	  {
	    a = s - t2.s;
	    t.s = a;
	  }
	
	if (t2.m > m)
	  {
	    b = (60 + m) - t2.m;
	    t.m = b - subM;;
	    subH ++;
	  }
	else
	  {
	    b = m - t2.m;
	    t.m = b - subM;
	  }

	if (t2.h > h)
	  {
	    t.h = (t2.h - h - subH) % 12;
	  }
	else
	  {
	    t.h = (h - t2.h - subH) % 12;
	  }

 	return t;
} 


// TODO: Add '<<' Overload w/ setfill()/setw() formatting
ostream &operator<<(ostream &output, const Time &t)
{
  output << setfill('0') << setw(2) << t.h << ":";
  output << setfill('0') << setw(2) << t.m << ":";
  output << setfill('0') << setw(2) << t.s << endl;
  return output;
}


void Time::getTime()  
{  
  	cout<<"\n Enter the hour(0-11) -----> ";  
  	cin>>h;  
  	cout<<"\n Enter the minute(0-59) ---> ";  
  	cin>>m;  
  	cout<<"\n Enter the second(0-59) ---> ";  
  	cin>>s;  
} 


int main(int argc, char * argv[] )  
{  
 	Time t1,t2,t3, task1, task2;  
 	Time t;

 	int interactive = 0;

 	if( argc > 1 )
		interactive = 1;

 	t.setTime(12,30,59);
	t1.setTime(12,45,00);
 	t2.setTime(13,15,01);

 	if( interactive )
 	{
 		cout<<"\n Enter the first time ========== ";  
 		t1.getTime();  
 		cout<<"\n Enter the second time ========= ";  
 		t2.getTime();  
 	}

 	t3=t1+t2; //adding of two time object using '+' operator

 	cout<<"\n First time ----> ";  
 	t1.show();
 	cout<<"\n Second time ---> ";  
 	t2.show();
 	cout<<"\n Sum of times --> ";  
 	t3.show();
 	printf("\n");
 	printf("\n");
 	printf(" Pretty print --> ");
 	t3.pfshow(); // how << should look

 	// ** TODO: uncomment this when done task1
     	task1= t1-t2; 			
 	cout<<"\n Diff of times -> ";  
 	task1.pfshow(); // how << should look
 	printf("\n");

 	// ** TODO: uncomment this when done task2
 	cout << "\n Diff of times*-> ";
	task2 = task1;
	cout << task2;

 	printf("\n");

 	return 0;
}
