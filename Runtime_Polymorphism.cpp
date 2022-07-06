#include<iostream>
using namespace std;
class Vehicle{
	public:
	Vehicle(){
		cout<<"vehicle constructor call"<<endl;
	}
	//added virtual keyword to take decision at run time
	virtual void print(){
		cout<<"Vehicle print function"<<endl;
	}
};
class Car: public Vehicle{
	public:
	Car(){
		cout<<"car constructor call"<<endl;
	}
	 void print(){
		cout<<"car print function call"<<endl;
	}
};
int main(){
	Vehicle v;
	Car c;
	// v.print();
	// c.print();
	Vehicle *v1 = new Vehicle;
	Vehicle *v2;
	//v2 = &v;
	v2 = &c;
	v1->print();
	v2->print(); // compile time decision print vehicle but actually points to Car
}
