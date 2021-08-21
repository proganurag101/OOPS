#include<iostream>
using namespace std;

class Point{
	double x;
	double y;

public:
	Point(){

		cout<<"default constructor called!"<<endl;

		x = 0;
		y = 0;

		cout<<"From inside the class(constructor): "<<endl;

		cout<<x<<endl;
		cout<<y<<endl;

		
	}

	Point(double X,double Y){
		
		cout<<"parameterised constructor called!"<<endl;

		x = X;
		y = Y;

		cout<<"From inside the class(constructor): "<<endl;

		cout<<x<<endl;
		cout<<y<<endl;

		
	}

	Point(const Point &rhs){



		cout<<"Copy constructor called!"<<endl;

		cout<<"From inside the class(constructor): "<<endl;

		x = rhs.x;
		y = rhs.y;


		cout<<x<<endl;
		cout<<y<<endl;
	}

	//getters
	double getX(){
		return x;
	}

	double getY(){
		return y;
	}



};
int main(){
	Point p1;  // calls default constructor

	cout<<"called through method"<<endl;

	cout<<p1.getX()<<endl;
	cout<<p1.getY()<<endl;

	Point p2(1.3,3.4);  //calls parameterised constructor

	cout<<"called through method"<<endl;

	cout<<p2.getX()<<endl;
	cout<<p2.getY()<<endl;



	Point p3 = p1;   // calls copy constructor

	cout<<"called through method"<<endl;

	cout<<p3.getX()<<endl;
	cout<<p3.getY()<<endl;




return 0;
}