#include<iostream>
using namespace std;
class Bus{
	public:
	void print();
};
void test();
class Truck{
	private:
	int x;
	protected:
	int y;
	public:
	int z;
	friend void Bus ::print(); // member function
	friend void test();//global function
	// friend class Bus; // make whole class as a friend
};
void Bus::print(){
	Truck t;
	t.x = 100;
	t.y = 200;
	cout<<t.x<<" "<<t.y<<endl;
}
void test(){
	Truck t;
	t.x = 500;
	t.y = 650;
	cout<<t.x<<" "<<t.y<<endl;
}
int main(){
	Bus b;
	b.print();
	test();
}
