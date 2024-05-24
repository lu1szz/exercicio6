#include <iostream>
#include <vector>


using namespace std;

int main() {

	//DECLARA VETOR DO TIPO INTEIRO COM VALORES
	/*vector<int> numeros (10);

    cout << "Insira os elementos do vetor de 10 posicoes:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Numeros do vetor: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << endl;
    }*/

    //vector<int> numeros(7);
    //int soma = 0;

    //cout << "Insira os vetores de 7 posicoes:" << endl;
    //for (int i = 0; i < 7; i++) {
    //    cout << "Elemento " << i + 1 << ": ";
    //    cin >> numeros[i];
    //    soma += numeros[i];
    //}

    //cout << "A soma dos elementos do vetor é: " << soma << endl;

   /* int total_alunos = 3 + 2 + 12;
    int soma_idades = (3 * 18) + (2 * 17) + (12 * 16);
    float media = soma_idades / static_cast<float>(total_alunos);

    cout << "A média das idades e: " << media << endl;*/

   /* int depositos[] = { 5, 9, 7, 10, 15, 23, 20, 30 };
    int total = 0;

    for (int i = 0; i < sizeof(depositos) / sizeof(depositos[0]); i++) {
        total += depositos[i];
    }

    cout << "O total do homem no banco e: " << total << endl;*/

    /*vector<int> numeros(10);
    int opcao;
    int resultado = 0;

    cout << "Digite 10 numeros para o vetor:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    cout << "Escolha a operação:" << endl;
    cout << "1. Soma" << endl;
    cout << "2. Subtracao" << endl;
    cout << "3. Multiplicacao" << endl;
    cin >> opcao;

    switch (opcao) {
    case 1:
        for (int i = 0; i < 10; i++) {
            resultado += numeros[i];
        }
        cout << "Soma dos elementos: " << resultado << endl;
        break;
    case 2:
        resultado = numeros[0];
        for (int i = 1; i < 10; i++) {
            resultado -= numeros[i];
        }
        cout << "Subtração dos elementos: " << resultado << endl;
        break;
    case 3:
        resultado = 1;
        for (int i = 0; i < 10; i++) {
            resultado *= numeros[i];
        }
        cout << "Multiplicação dos elementos: " << resultado << endl;
        break;
    default:
        cout << "Opção inválida!" << endl;
    }*/

    return 0;
}