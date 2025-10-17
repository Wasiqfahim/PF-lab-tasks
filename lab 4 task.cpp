#include<iostream>
using namespace std;
int main()
{
	int choice;
    float radius,area,length,width,base,height;
	
	bool runItAgain = true;
		while(runItAgain)
	{
	cout<<"1. area of a circle"<<endl;
	cout<<"2. area nof rectangle"<<endl;
	cout<<"3. area of a triangle"<<endl;
	cout<<"4. Quit"<<endl;
    cout<<"select a number from menu";
    cin>>choice;
    switch(choice)
    {
    	case 1:
    		cout<<"enter radius";
    		cin>>radius;
    		area=3.14*(radius*radius);
    		cout<<"the ares of circle is"<<area<<endl;
    		break;	
    	case 2:
    		cout<<"enter length and width"<<endl;
    		cin>>length>>width;
    		area=length*width;
    		cout<<"the area of rectangle is"<<area<<endl;
    		break;
    	case 3:
    		cout<<"enter base and height";
    		cin>>base>>height;
    		area=0.5*(base*height);
    		cout<<"the area of triangle is"<<area<<endl;
    		break;
    	case 4:
    	     cout<<"quitting the menu"<<endl;
             runItAgain=false;
    		break;
    	default:
    		cout<<"quit"<<endl;
    		break;
    			
    }
    		
	}
  

}
