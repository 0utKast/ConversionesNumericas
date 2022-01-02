

/*#include <iostream>

int main()
{
	short s = 7; // convertir int a short
	long l = 5; // convertir int a long
	char ch = s; // convertir short a char
	float f = 6.0; //conviert double a float
	long double ld = 3.0; //conviert double a long double
	int in = 4.5; // convierte double a int
	double d = 3.0f; // convierte int a double
	bool b1 = 2; // convierte int to bool
	bool b2 = 2.0; // convierte double to bool
	int i1 = 5.5; // el ".5" se elimina, pérdida de datos
	int i2 = 6.0; // se convierte a "6", sin pérdida de datos

	int i = -62;
	unsigned int j = (unsigned int)i;
	std::cout << j;


}*/


/*void convertir(int i)
{
}

int main()
{
	double d{ 8.0 };

	convertir(d); // mal: generará una advertencia del compilador sobre conversión restrictiva
	convertir(static_cast<int>(d));  // bien: le decimos explícitamente al compilador que
								    //esperamos esa conversión restrictiva, no genera advertencia warning generated

	return 0;
}*/


/*#include <iostream>

int main()
{
	int i{ 43000 };
	char c = i; // chars tienen un rango de -128 a 127

	std::cout << static_cast<int>(c);

	

	return 0;
}*/


/*int main()
{

	int i{ 2 };
	short s = i; // convierte de int a short
	std::cout << s << '\n';

	double d{ 0.1234 };
	float f = d; 
	std::cout << f << '\n'; //convierte de double a float

	return 0;
}*/

/*#include <iostream>
#include<iomanip>
int main()
{
	float f = 0.123456789; // valor double 0.123456789 tiene 9 dígitos 
						   //significativos, pero float sólo admite 7
	std::cout << std::setprecision(9) << f << '\n'; 
}*/

/*#include <iostream>
int main()
{
	int i{ 10 };
	float f = i;
	std::cout << f;
}*/



#include <iostream>
int main()
{
	int i = 3.5;
	std::cout << i << '\n';
}




