#include<iostream>
using namespace std;

class Calculator{
	int num1;
	int num2;
	public:
		void setNumber(int n1,int n2){
			num1=n1;
			num2=n2;
		}
		int add(){
			return num1+num2;
		}
		};
		int main(){
			
			Calculator c;
			c.setNumber(16,55);
			cout<<"The sum of these numbers is "<<c.add();
		}

