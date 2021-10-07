#include<iostream>
using namespace std;
/*char short int long float double long double wide char*/

void char_d()
{
	char c = 67;
	cout<<c<<"	"<<sizeof(char)<<"\t\t";
	cout<<sizeof(c)<<endl;
}

void bool_d()
{
	bool a = true;
	cout<<a<<"	"<<sizeof(bool)<<"\t\t";
	cout<<sizeof(a)<<endl;
}

void short_d()
{
	short a = 34;
	cout<<a<<"	"<<sizeof(short)<<"\t\t";
	cout<<sizeof(a)<<endl;
}

void int_d()
{
	int b = 90;
	cout<<b<<"	"<<sizeof(int)<<"\t\t";
	cout<<sizeof(b)<<endl;
}

void long_d()
{
	long int a = 89;
	cout<<a<<"	"<<sizeof(long int)<<"\t\t";
	cout<<sizeof(a)<<endl;
}

void float_d()
{
	float f = 32.78;
	cout<<f<<"	"<<sizeof(float)<<"\t\t";
	cout<<sizeof(f)<<endl;
}

void double_d()
{
	double c = 78.43;
	cout<<c<<"	"<<sizeof(double)<<"\t\t";
	cout<<sizeof(c)<<endl;
}

void long_double_d()
{
	long double a = 8.34;
	cout<<a<<"	"<<sizeof(long double)<<"\t\t";
	cout<<sizeof(a)<<endl;
}

void wide_char()
{
	wchar_t g = L'ロ';
	cout<<g<<"	"<<sizeof(wchar_t)<<"\t\t";
	cout<<sizeof(g)<<endl;
	wcout<<g<<endl;
}


int main()
{
	cout<<"Data	Size(in bytes)\tSize (var)"<<endl;
	char_d();
	bool_d();
	short_d();
	int_d();
	long_d();
	float_d();
	double_d();
	long_double_d();
	wide_char();
return 0;
}

