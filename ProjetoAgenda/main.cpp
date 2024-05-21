#include <iostream>
using namespace std;

int main() {
	string nomes[20], telefone[20]; //tipo nome[tamanho]
	int op;
	int i=0;
	
	
	while(op !=3){
	cout << "*** Agenda Telefonica *** \n";
	cout << "1- Cadastrar contatos \n";
	cout << "2- Listar contatos \n";
	cout << "3- Sair \n";
	cout << "Escolha a opcao: ";
	cin >> op;
	

	switch(op){
		case 1:
			if (i!=20){
	 		 cout << "Informe um nome " << i << "\n";
			 cin >> nomes[i];
			 cout << "Informe o telefone" << i << "\n";
			 cin >> telefone[i];
			 i++;
			 }else{cout << "Sua lista esta cheia\n";
			 }
			 break;
			 
		case 2:
			 cout << "Exibindo os dados cadastrados: \n";
 	  		 for(int o=0; o <=i-1; o++){
			 cout << endl <<
			 "Nome: "<< nomes[o]<< endl<<
			 "telefone: "<< telefone[o] << endl <<endl;
			 }
			 break;
			 
		default:
			cout << "Insira um valor valido\n";
			break;
	}
    }
	return 0;
}
