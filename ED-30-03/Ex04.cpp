#include <iostream>
#include <locale.h>
#include <windows.h>
#include <algorithm>
#include <string>
using namespace std;

/*classe � a receita do bolo, objeto o bolo*/

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

/*passagem de par�metro por refer�ncia (passo o endere�o)*/
void mostra_data_ref (data &d)/*esse &d seria o argumento*/
{
		cout << "Hoje � " << d.dia << "/"
                          << d.mes << "/"
                          << d.ano << endl;
        /*d.dia = 99; **para mostrar a diferen�a de valor e e referencia*/                         
}

/*passagem de par�metro por refer�ncia (passo o ponteiro - endere�o expl�cito)*/
void mostra_data_ref (data *d)/*esse *d seria o argumento*/
{
		cout << "Hoje � " << d->dia << "/"
                          << d->mes << "/"
                          << d->ano << endl;                       
}


int main (int argc, char** argv){

	setlocale(LC_ALL, "");
	data hoje;
	data *phoje; /*declarando um ponteiro p*nomedoponteiro*/
	hoje.dia = 30;
	hoje.mes = 3;
	hoje.ano = 2023;
	
	cria_data(&hoje, 30, 3, 2023);
                      
	mostra_data_valor(hoje); 

	return 0;	
}