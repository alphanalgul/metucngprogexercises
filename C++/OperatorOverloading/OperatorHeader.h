#include<iostream>
using namespace std;

class X
{
private:
	int Xval;
public:
	X(int n);
	void operator!();
	void operator++();
	void operator++(int);
	X operator +(X);
	void operator=(X);
	void operator()(int a = 10, int b = 20, int c = 30);
	void operator()(double);

};

class Y
{
private:
	int Yval;
public:
	Y(int n);
	friend void operator!(Y);
	friend void operator++(Y&);
	friend void operator++(Y&,int);
	friend Y operator + (Y, Y);
	void operator =(Y);
};
