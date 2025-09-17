#include<iostream>
using namespace std;

class Concrete{
	
	string message;
	public:
		Concrete(string msg){
			message=msg;
		}
		void displayMessage(){
			cout<<"The stored message was: "<<message<<endl;
		}
		
};

int main(){
	Concrete c1("Hello World");
	c1.displayMessage();
}

