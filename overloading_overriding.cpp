#include<iostream>
using namespace std;
//overloading
class Add{
	public:
	int x;
	int y;
	Add(int x,int y){
		this->x = x;
		this->y=y;
	}
	int func1(int a,int b){
		int c = a+b;
		return c;
	}
	int func2(int a,int b,int c){
		int d = a+b+c;
		return d;
	}
	int func3(int a,int b,int c,int d){
		int e = a+b+c+d;
		return e;
	}

};
//overriding 
class Vehicle{
	public:
	virtual void print(){
		cout<<"vehicle should move"<<endl;
	}
};
class Bike : public Vehicle{
	public:
	void print(){
		cout<<"Bike should move"<<endl;
	}
};
int main(){
	Add a(100,200);
	cout<<a.func1(5,5)<<endl;
	cout<<a.func2(10,20,30)<<endl;
	cout<<a.func3(10,20,30,40)<<endl;
	//overriding
	Vehicle *v;
	Bike b;
	v = &b;
	v->print(); // vehicle print
	Vehicle *v1 = new Bike();
	v1->print();
}
