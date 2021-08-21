#include<iostream>
using namespace std;
class Phone{
private:  //class is private by default


    //attributes                  //attributes inside class are accessible here only
	string p_name;
	string p_size;    
public:

	//constructors-used for object initialization,same name as that of class,no return type.
	Phone(string name,string size){
		p_name = name;
		p_size = size;
	}





    //functions            //these functions are accessible outside public
	void makecall(){        //can be called from main function
		cout<<"Making call using "<<p_name<<endl;
	}

	void receiveCall(){
		cout<<"receiving call using "<<p_name<<endl;
	}
};


int main(){
	      //object
	Phone iPhone("iphone-x","1000x500");

	iPhone.makecall();     //these are methods(.),using the dot operator we access them.
	iPhone.receiveCall();
	Phone gpixel("googlePixle","2000x700");
	cout<<endl;
	gpixel.makecall();
	gpixel.receiveCall();



return 0;
}