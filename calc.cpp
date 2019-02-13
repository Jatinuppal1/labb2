#include<iostream>
using namespace std;
class Calculator
{
   public:
	   Calculator()
	   {
		   cout<<"Enter nos.\n";
		   cin>>a>>b;
	   }
	   float a,b;
	   float add();
	   float sub();
	   float mult();
	   float div();
};
float Calculator::add()
{
	cout<<"\nAddition of nos. is "<<a+b<<endl;
}
float Calculator::sub()
{
	cout<<"\nSubtraction of nos. is "<<a-b<<endl;
}
float Calculator::mult()
{
	cout<<"\nMUltiplication of nos. is "<<a*b<<endl;
}
float Calculator::div()
{
	cout<<"\nDivision of nos. is "<<a/b<<endl;
}
int main()
{
	Calculator c1;
	return 0;
}
