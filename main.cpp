#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
using std::cout;

int ordem = 0;

typedef struct celulalista {
    int informacao;
    struct celulalista *proximo;
}celula; 

void initlista(celula *pRecebido);
void insertlista(celula *pRecebido);
void buscalistasimples(celula *pRecebido);
void removeelementolistasimples(celula *pRecebido);
int levalor(int *valorrecebido); 

 void insertlista(celula *pRecebido) {
//Declaracoes
    celula *temporario;
    int valor;
//Instrucoes
    cout<<"\n\tInforme um valor a ser inserido : ";
    cin>>valor;
    temporario = (celula * )malloc(sizeof(celula));
    temporario->informacao = valor;
    temporario->proximo = (pRecebido)->proximo;
    (pRecebido)->proximo = temporario;
} 


int person() {
        int idade, cpf, sexo, preferencial;
	cout << "\n---------------------------------\n";
        cout << "CADASTRO NA FILA DE ATENDIMENTO\n";
	cout << "---------------------------------\n";
        cout << "Insira seus dados abaixo:\n";
        cout << "Idade \n";
        cout << "> ";
        cin >> idade;
        cout << "CPF \n";
        cout << "> ";
        cin >> cpf;
        cout << "Sexo (1-Feminino, 2-Masculino)\n";
	cout << "> ";
        cin >> sexo;

        if(sexo == 1) {
                cout << "Está gravida? \n 1-Sim\n 2-Não\n";
		cout << "> ";
                cin >> preferencial;

                if(preferencial == 1) {
                        // fila_encadeada->
                }
                else {
                        // adc na lista comum
                }
        }
        return 1;
}

int main(void)
{

while(ordem != 7)
{
	 int choice;
	 cout << "\n---------------------\n";
	 cout << "ATENDIMENTO BANCÁRIO\n";
	 cout << "---------------------\n\n";

	 cout << "1 - Cadastrar pessoa na fila\n";
	 cout << "2 - Proxima pessoa na fila\n";
	 cout << "3 - Listar pessoas na fila\n";
	 cout << "7 - Finalizar sessão\n\n";
	 cout << "> ";
	 cin >> choice;

	 if(choice == 1){
		ordem = person();	
	 } else if (choice == 2) {

	 } else if (choice == 3) {
		
	 } else {
		ordem = 7;
	 }
 } // while
} // fim main

