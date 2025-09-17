#include<iostream>
using namespace std;
class Vehicle{
	public:
		
		string make;
		string model;
		void displayInfo(){
			cout<<"The make of the vehicle is: "<<make<<endl;
			cout<<"The model of the vehicle is: "<<model<<endl;
		}
};
class Car:public Vehicle{
	public:
		string engineType;
			void displayInfo(){
				Vehicle ::	displayInfo();
				cout<<"The engine type of this car is: "<<engineType<<endl;
			}
};


int main(){
	
	Car c1;
	c1.make="Ferrari";
	c1.model="sf25";
	c1.engineType="v8";
	c1.displayInfo();
	
	return 0;
}

