#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int TOTAL_ALUNOS = 5;

    string nome[TOTAL_ALUNOS];
    float nota1[TOTAL_ALUNOS];
    float nota2[TOTAL_ALUNOS];
    float nota3[TOTAL_ALUNOS];
    float media[TOTAL_ALUNOS];
    string situacao[TOTAL_ALUNOS];

    float maiorMedia = -1;
    int posicaoMaior = -1;

    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        getline(cin, nome[i]);

        cout << "Digite a nota 1: ";
        cin >> nota1[i];

        cout << "Digite a nota 2: ";
        cin >> nota2[i];

        cout << "Digite a nota 3: ";
        cin >> nota3[i];

        cin.ignore(); 

        
        media[i] = (nota1[i] + nota2[i] + nota3[i]) / 3;

      
        if (media[i] >= 7) {
            situacao[i] = "Aprovado";
        }
        else {
            situacao[i] = "Reprovado";
        }

        
        if (media[i] > maiorMedia) {
            maiorMedia = media[i];
            posicaoMaior = i;
        }

        cout << endl;
    }

    cout << fixed << setprecision(2);
    cout << "------------------------------------------------------------\n";
    cout << "Nome\t\tNota1\tNota2\tNota3\tMedia\tSituacao\n";
    cout << "------------------------------------------------------------\n";

    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        cout << nome[i] << "\t\t"
            << nota1[i] << "\t"
            << nota2[i] << "\t"
            << nota3[i] << "\t"
            << media[i] << "\t"
            << situacao[i] << endl;
    }

    cout << "------------------------------------------------------------\n";

    if (posicaoMaior != -1) {
        cout << "\nAluno com a maior media: " << nome[posicaoMaior]
            << " - Media: " << media[posicaoMaior] << endl;
    }

    
    cout << "\nPressione Enter para sair...";
    cin.get();

    return 0;
}
