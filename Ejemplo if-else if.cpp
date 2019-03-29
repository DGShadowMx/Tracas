#include <iostream>
using namespace std;

int main ()
{
	char c;
	cout<<"Introduce un caracter: "; cin>>c;
	if (c>='A' && c<='Z')
		cout<<"Introdujo una letra mayuscula"<<endl;
	else if (c>='a' && c<='z')
		cout<<"Introdujo una letra minuscula"<<endl;
	else if (c>='0' && c<='9')
		cout<<"Introdujo una numero"<<endl;
	else
		cout<<"Introdujo un caracter especial"<<endl;
	
	system ("pause");
	return 0;
}
