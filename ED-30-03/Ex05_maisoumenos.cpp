#include <iostream>
#include <locale.h>
#include <windows.h>
#include <algorithm>
#include <string>
using namespace std;

/*  classe � a receita do bolo, objeto o bolo
	m�todos de uma classe n�o interagem com a interface (cout,cin) como no ex void mostra_data_ref (data &d);
*/


struct data /**struct seria como uma classe sem m�todo*/
{
	int dia;
	int mes;
	int ano;
};

void cria_data(data *d, int dia, int mes, int ano)/*o data *d seria aonde ele colocaria as variaveis no "metodo contrutor" (como n�o tem classe n�o � construtor)*/
{
	d->dia/*atributo*/= dia /*variavel local*/;
	d-> mes;
	d-> ano;
}

/*passagem de par�metro por valor (passo qual o dado)*/
void mostra_data_valor(data d)
{
		cout << "Hoje � " << d.dia << "/"
                          << d.mes << "/"
                          << d.ano << endl;                          
}

/*passagem de par�metro por refer�ncia (passo o endere�o)
string gera_data (data *d)/*esse &d seria o argumento
{
		return to_string (d -> dia) + "/" +
			   to_string (d -> mes) + "/" +
			   to_string (d -> ano) + "/" ;                         
}
*/

data dia_seguinte(data d)
{
	data d1;
	int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31,30};
	if(d.ano%4==0)
	{
		diasNoMes[1]++;
	}
	
	d1 = d;
	d1.dia++;
	
	if(d1.dia > diasNoMes[d1.mes-1])
	{
		d1.dia = 1;
		if(++d1.mes > 12)
		{
			d1.mes = 1;
			d1.ano++;
		}
	}
	return d1;
}

int main (int argc, char** argv){

	setlocale(LC_ALL, "");
	data hoje;
	hoje.dia = 30;
	hoje.mes = 3;
	hoje.ano = 2023;
	
	/*cout<<gera_data(&hoje);*/
		
	data amanha;
	amanha = dia_seguinte(hoje);
	cout << "Amanh� ser� "<< gera_data (&amanha)<<endl;
	
	
	return 0;	
}