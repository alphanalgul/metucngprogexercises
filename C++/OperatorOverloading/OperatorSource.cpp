#include"OperatorHeader.h"

X::X(int n) { this->Xval = n; }
void X::operator!()
{
	cout << "Xvalue: " << this->Xval << endl;
}

void X::operator++()
{
	
	this->Xval++;
}

void X::operator++(int)
{
	cout << "Im post increment X" << endl;
	this->Xval++;
}

X X::operator+(X x)
{
	X temp(0);
	temp.Xval = this->Xval + x.Xval;
	return temp;
}

void X::operator=(X x)
{
	this->Xval = x.Xval;
}

void X::operator()(int a, int b, int c)
{
	this->Xval = a + b + c;
}

void X::operator()(double pi)
{
	this->Xval = pi;
}


Y::Y(int n) { this->Yval = n; }

void Y::operator=(Y y)
{
	this->Yval = y.Yval;
}
