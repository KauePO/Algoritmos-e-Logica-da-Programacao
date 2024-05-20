#include <iostream>
using namespace std;

//FUNÇÕES
int tinta1(int a) {
    int latas, rendimento=54;

	if (a%rendimento != 0){
		latas= (a/rendimento)+1;
	}    else {
		latas= a/rendimento;
	}
	return latas;
}

int tinta2(int a) {
    int preco=80, latas, rendimento=54;

	if (a%rendimento != 0){
		latas= (a/rendimento)+1;
	}    else {
		latas= a/rendimento;
	}	
	return preco*latas;
}




int main() {
	float area;
	
	
	cout << "Informe o tamanho em metros quadrados da area a ser pintada: \n";
	cin >> area;
	
	cout << "A quantidade de latas a serem compradas e: " << tinta1(area) << endl;
	cout << "No valor de: R$" << tinta2(area);
	
	
	return 0;
}
