#include<iostream>
using namespace std;

class Student{
	
	int rollNumber;
	
	public:
		string name;
	void setrollNo(int n){
		rollNumber=n;
	}
	int getrollNo(){
		return rollNumber;
	}
};
int main(){
	
	Student s1;
	s1.setrollNo(617);
	
	cout<<"The rollno. of the student is: "<<s1.getrollNo()<<endl;
}

