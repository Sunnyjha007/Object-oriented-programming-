#include<iostream>
using namespace std;
class Vehicle{
	private:
	int maxSpeed;
	protected:
	int numTyres;
	public:
	string color;
	// Vehicle(){
	// 	cout<<"vehicle constructor call"<<endl;
	// }
	~Vehicle(){
		cout<<"vehicle destructor calls"<<endl;
	}
	void print(){
		cout<<"Vehicle print function"<<endl;
	}
	Vehicle(int z){
		cout<<"vehicle paramerteised constructor calls"<<z<<endl;
		maxSpeed = z;
	}
};
class Car: virtual public Vehicle{
	public:
	int numGears;
	// void print(){
	// 	cout<<"numTyres"<<numTyres<<endl;
	// 	cout<<"color"<<color<<endl;
	// 	cout<<"numGeard"<<numGears<<endl;
	// 	//private	//cout<<"maxSpeed"<<maxspeed;
	// }
	//implicitly calling
	// Car() : Vehicle(){
	// 	cout<<"car constructor calls"<<endl;
	// }
	// Car(int x) : Vehicle(x){
	// 	cout<<"car constructor calls"<<endl;
	// }
	Car(): Vehicle(10){
		cout<<"car constructor calls"<<endl;
	}
	~Car(){
		cout<<"car destructor calls"<<endl;
	}
};
class Truck: virtual public Vehicle{
	public:
	Truck(): Vehicle(20){
		cout<<"Truck constructor calls"<<endl;
	}
};
class Bus: public Car,public Truck{
	public:
	Bus(): Vehicle(100){
		cout<<"Bus constructor calls"<<endl;
	}
	void print(){
		cout<<"Bus print function"<<endl;
	}
};
// class HondaCity: public Car{
// 	public:
// 	// HondaCity(){
// 	// 	cout<<"hondacity constructor calls"<<endl;
// 	// } giving error
// 	HondaCity() : Car(5){
// 		cout<<"hondacity constructor calls"<<endl;
// 	}
// 	~HondaCity(){
// 		cout<<"hondacity destructor calls"<<endl;
// 	}
// };
int main(){
	// Vehicle v;
	// v.color = "Blue";
	// rest 2 property not acessible outside the class
	//protected accessible within class or in child class
	// Car c(10);
	// c.color = "Black";
	// c.numGears = 4;
	//HondaCity h;
	Bus b; 
	//b.print();
	// error: non-static member 'print' found in multiple base-class subobjects of type 'Vehicle':
    	// class Bus -> class Car -> class Vehicle
    	// class Bus -> class Truck -> class Vehicle
	// on way to avoid //b.Car ::print(); 
	//another way to add keyword "virtual"
	return 0;
}