#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Circle
{
	private:
		float radius;
		
	public: 
	void setter(float r)
	{
		radius = r;
	}
	float getter()
	{
		return radius;
	}
	
	Circle operator+(Circle obj)
	{
		obj.radius += radius;
		return obj;
	}
};
	

int main()
{
	Circle c1,c2,c3;
		c1.setter(10);
		c2.setter(20);
		c3= c1+c2;
		cout << " c3 object radius value is: " << c3.getter();
	
	getch();
	return 0;
	
	
	
}
