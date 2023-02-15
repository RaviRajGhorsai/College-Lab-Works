/*Create a class called Distance with two data members inch and feet. Provide Constructor and different
member function with the following operations.
? To input data for Distance objects.
? To show the data of Distance objects.
? Member function to add two Distance objects passed as object as function arguments leaving the
result in the third Distance object and then display the result.*/


#include<iostream>
using namespace std;

class dis{
	
	int inch,feet;
	
	public:

	dis(){
		feet = 0;
		inch = 0;
	}
	
	void getdata(){
		cout<<"enter feet: "<<endl;
		cin>>feet;
		cout<<"enter inch: "<<endl;
		cin>>inch;
	}
	
	void add(dis obj1, dis obj2){
		feet = obj1.feet+obj2.feet;
		inch = obj1.inch+obj2.inch;
		feet = feet + (inch/12);
		inch = inch%12;
	}
	
	void display(){
		cout<<"the inch is "<<inch<<". and the feet is "<<feet<<endl;
	}
};

int main(){
	dis obj,obj1,obj2;
	obj.getdata();
	obj1.getdata();
	obj2.add(obj,obj1);
	obj2.display();
	
	
	return 0;
}
