#include <iostream>
using namespace std;

int main() {
	string comodo;
	float largura, comprimento, area, total;
	char repete='S', totalr='c';

	while (repete == 's' || repete == 'S'){

	cout << "Insira o nome do comodo\n";
	cin >> comodo;
	cout << "Insira a largura do comodo (metros)\n";
	cin >> largura;
	cout << "Insira o comprimento do comodo (metros)\n";
	cin >> comprimento;

	area=largura*comprimento;

	cout << "A area do(a) " << comodo << " e " << area << "m2" <<endl;
	total= total+area;
	cout << "A area total da casa atualmente e " << total <<"m2" <<endl;
	repete = 't';

	if (repete == 't'){
	cout << "Deseja calcular mais um comodo? (S/N)\n";
	cin >> repete;
	if (repete=='s'|| repete == 'S'){
		totalr='d';
	}
	else {
		repete=='x';
		cout << "A area residencial total e " << total << "m2";
	}
	}

 }
 return 0;
}
