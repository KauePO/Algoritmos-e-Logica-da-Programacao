#include <iostream>
using namespace std;

int main() {
	float ganho, ir, inss, sindicato, salbruto, salliquido;
	int horas;

	cout << "Quanto voce ganha por hora?\n";
	cin >> ganho;
	cout << "Quantas horas trabalhadas no mes?\n";
	cin >> horas;
	
	salbruto = ganho*horas;
	ir = salbruto/100*11;
	inss = salbruto/100*8;
	sindicato = salbruto/100*5;
	salliquido = salbruto-ir-inss-sindicato;
	
	cout << "+ Salario Bruto: R$" << salbruto << endl;
	cout << "- IR (11%): R$" << ir << endl;
	cout << "- INSS (8%): R$" << inss << endl;
	cout << "- Sindicato (5%): R$" << sindicato << endl;
	cout << "= Salario Liquido: R$" << salliquido << endl;
	
	return 0;
}
