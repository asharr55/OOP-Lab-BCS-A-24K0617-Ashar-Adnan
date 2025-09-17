#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		int rollNumber;
	
};
int main(){
	Student s1;
	s1.name="Ashar";
	s1.rollNumber=0617;
	
	cout<<"The name of the student is: "<<s1.name<<endl<<endl;
	cout<<"The roll no. of the student is: "<<s1.rollNumber<<endl<<endl;
}

