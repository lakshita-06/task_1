#include<iostream>
#include"complex.h"
using namespace std;
complex complex :: operator +(complex c)
{

	complex temp;
	temp.r=r+c.r;
	temp.i=i+c.i;
	return temp;
}
complex complex :: operator -(complex c)
{

   complex temp2;
   temp2.r=r-c.r;
   temp2.i=i-c.i;
   return temp2;

}
complex complex :: operator *(complex c)
{

   complex temp3;
   temp3.r=r*c.r - i*c.i;
   temp3.i=r*c.i + c.r*i;
   return temp3;

}
std::ostream &operator<<(std::ostream &output ,complex &t)
{

	std::cout<<"complex no->\n"<<c.r<<" + "<<c.i<<"i"<<std::endl;
}
int main()
{
	complex c1(1.2,3.4);
	complex c2(5.6,7.8);
	complex add;
	complex diff;
	complex mult;
	add=c1+c2;
	diff=c1-c2;
	mult=c1*c2;
	std::cout<<add;
	std::cout<<diff;
	std::cout<<mult;
	return 0;
}






















