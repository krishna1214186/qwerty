#include <iostream>
#include <string>
using namespace std;
class laptop
{
public:
	laptop()
	{
		cout<<"base class1 is called"<<endl;

	}

};
class kuchbhi:public laptop
{
public:
	kuchbhi()
	{
		cout<<"derived class1 is called"<<endl;
	}
};
class gaminglaptop: public kuchbhi
{
public:
	gaminglaptop()
	{
		cout<<"derived class2 is called"<<endl;
	}
}; 
int main()
{
	gaminglaptop p1;
}