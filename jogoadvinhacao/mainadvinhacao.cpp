#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int segredo=45;
    char dnv = 'S';

    while (dnv == 'S' || dnv == 's') {
        int resposta = 0, tentativas = 10;
		srand(time(NULL));
    	segredo = rand() % 130;


        while (resposta != segredo && tentativas > 0) {
            cout << "Qual e o numero secreto?\nVoce tem " << tentativas << "/10 chances." << endl;
            cin >> resposta;
            tentativas--;
            if (resposta >segredo){
            	cout << "Tente um numero menor\n";
			}
			else if (resposta <segredo){
			cout << "Tente um numero maior\n";
			}
			else if (resposta==segredo){
				dnv='x';
			}
        }

        if (resposta == segredo) {
            cout << "PARABENS PELO ACERTO" << endl;
        } else {
			cout << "O valor era " << segredo << endl;
			cout << "FALHASTE\nDeseja tentar novamente? (S/N)";
            cin >> dnv;
        }
    }

    cout << "Obrigado por jogar!" << endl;

    return 0;
}
