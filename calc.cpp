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
	int a;
	cout<<"_____Calculator_____"<<endl;
	cout<<"1. Addition\n2. Subtaction\n3. Multiplication\n4. Division\n";
	do
	{
		cout<<"Enter your choice\n";
		cin>>a;
		Calculator c1;
		switch(a)
		{
			case 1: c1.add();
				break;
			case 2: c1.sub();
				break;
			case 3: c1.mult();
				break;
			case 4: c1.div();
				break;
			default:
				cout<<"\nTry again";
				a=5;
		}
		cout<<"\nFor exit press 0\n";
		cin>>a;
	}while(a=!0)
	return 0;
}
