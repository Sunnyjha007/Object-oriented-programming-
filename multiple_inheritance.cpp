#include<iostream>
using namespace std;
class Teacher{
	public:
	string name;
	int age;
	void print(){
		cout<<"Teacher print function"<<endl;
	}
};
class Student{
	public:
	void print(){
		cout<<"student print funciton"<<endl;
	}
};
class Ta : public Teacher,public Student{
	public:
	void print(){
		cout<<"TA print function"<<endl;
	}
};
int main(){
	Ta t;
	t.print();
	//t.Teacher ::print();   //to resolve error of repeating function in different classes
	//t.print();
}