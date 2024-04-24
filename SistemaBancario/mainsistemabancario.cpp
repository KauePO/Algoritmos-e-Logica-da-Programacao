#include <iostream>
using namespace std;

int main() {
	float saldo1=1000, saldo2=2000, deposito, trans;
	int escolha=0, sair=4, conta, contas=5;
	
	while (sair >= 2 && escolha==0){

	cout << "Qual conta deseja acessar?\n";
	cin >> conta;
	sair=4;
	while (sair != 2 && escolha==0){
	for (sair; sair==4; sair=sair){



	cout << "Sistema Bancário" << endl << "1-DEPÓSITO" << endl << "2-SAQUE" << endl << "3-Consulta" << endl <<"4-Transferência entre contas" << endl << "5-SAIR" << endl;
	cin >> escolha;



	if (escolha== 1){// DEPOSITO
			if (conta == 1){
				cout << "Insira o valor do deposito\n";
				cin >> deposito;
				saldo1 = saldo1+deposito;

			}else {
				cout << "Insira o valor do deposito\n";
				cin >> deposito;
				saldo2 = saldo2+deposito;
				escolha=0;
			}
	}
	if (escolha== 2){
		// SAQUE
			if (conta == 1){
				cout << "Insira o valor do saque\n";
				cin >> deposito;
				saldo1 = saldo1-deposito;
				escolha=0;
			}else {
				cout << "Insira o valor do saque\n";
				cin >> deposito;
				saldo2 = saldo2-deposito;
				escolha=0;
			}
	}
	if (escolha==3){
		//CONSULTA
			if (conta == 1){
			   cout << "Saldo da Conta: " << saldo1 << endl << endl;
			   escolha=0;
			} else {
				cout << "Salda da Conta: "<< saldo2 << endl << endl;
				escolha=0;
			}
			break;
	}
	if (escolha==4){//TRANSFERENCIA
		cout << "Para qual conta deseja transferir?\n";
			 cin >> escolha;
			if (escolha == 2){
			   cout << "Insira o valor a ser transferido\n";
			   cin >> trans;
			   if (trans > saldo1){
			   	cout << "Saldo Insuficiente" << endl << endl;
			   }else {
			   	saldo2 = saldo2+trans;
			   	saldo1 = saldo1-trans;
			   	escolha=0;
			   }}

			   if (escolha == 1){
			   cout << "Insira o valor a ser transferido\n";
			   cin >> trans;
			   if (trans > saldo2){
			   	cout << "Saldo Insuficiente" << endl << endl;
			   }else {
			   	saldo2 = saldo1+trans;
			   	saldo1 = saldo2-trans;
			   }
			}
	}
	if (escolha==5){
		// SAIR
		cout << "1-SAIR DA CONTA" << endl << "2-SAIR DO PROGRAMA" << endl << "3-CANCELAR";
		cin >> sair;
		if (sair==1){
			sair=2;
			escolha=0;
		}
		if (sair==3){
			sair=4;
			escolha=0;
		}

		
	
	}

	}}}
	return 0;
}
