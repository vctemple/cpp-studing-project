/*  Programa com o objetivo de mostrar o funcionamento de STRUCTS
    usando matrizes para armazenamento de dados
    e para sua manipulação laços do tipo FOR;
    ao final é feita uma reorganização alfabética por comparação distributiva */

// STRUCTS PT1 - MATRIZ CARDINAL

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

using namespace std;

int main (void)
{
    struct CAD_ALUNO                    // Definição do tipo de dado derivado
    {
        char NOME[41];                  // Cadeia com 40 caracteres +1 \o
        float NOTA[4];                  // Matriz com 4 espaços para armazenamento
        float MEDIA;
    };

    int I, J;                           // Indices para controlar os laços
    float SOMA_NT, SOMA_MD, MEDIA_G;    // Variáveis de processamento
    char ENTRA_NOTA [6];                 // Variável para entrada de valor que posteriormente será convertido
    CAD_ALUNO ALUNO[3], X;              // Variáveis to tipo STRUCT que vão armazenar os registros

    cout << setprecision(2);            // determina 2 casas decimais apos a virgula
    cout << setiosflags(ios::fixed);     // mantém as casas decimais visíveis

    // ENTRADA DE DADOS

    cout << "CADASTRO DE ALUNOS" << endl << endl;
    for (I=0; I<=2; I++) // por serem 3 posições apenas, considera-se de 0 a 2 (cardinal)
    {
        cout << "Entre o" << setw(2) << I+1 << "o. aluno: ";
        cin.getline(ALUNO[I].NOME, sizeof(ALUNO[I].NOME)); // Faz a entrada da linha inteira com a opção de espaço
        cout << "Entre as notas deste aluno" << endl << endl;

        for (J=0; J<=3; J++) // Laço para entrada de nota dentro do laço de nome do aluno
        {
            cout << setw(2) << J+1 << "a. nota: ";
            cin.getline(ENTRA_NOTA, sizeof(ENTRA_NOTA));
            ALUNO[I].NOTA[J] = atof(ENTRA_NOTA);            // É feita a atribuição convertida para float

        }
        cout << endl;
    }

    // PROCESSAMENTO DE DADOS

    SOMA_MD = 0;

    for (I=0; I<=2; I++)
    {
        SOMA_NT = 0;
        for (J=0; J<=3; J++)
        {
            SOMA_NT = SOMA_NT + ALUNO[I].NOTA[J];
        }

        ALUNO[I].MEDIA = SOMA_NT/4;
        SOMA_MD = SOMA_MD + ALUNO[I].MEDIA;
    }

    MEDIA_G = SOMA_MD/3;

    // ORDENAÇÃO ALFABÉTICA DOS ALUNOS

    for (I=0; I<=1; I++)                // Os laços tem uma repetição menor pois aplicam propriedade distributiva
    {
        for (J=I+1; J<=2; J++)
        {
            if (strcmp(ALUNO[I].NOME, ALUNO[J].NOME) > 0)   // Função strcmp faz a comparação de duas variáveis
            {                                               // strcmp (A, B)  > 0 -> A>B
                X = ALUNO[I];                               // strcmp (A, B)  < 0 -> A<B
                ALUNO[I] = ALUNO[J];                        // strcmp (A, B) == 0 -> A==B
                ALUNO[J] = X;                               // Portanto quando > 0 realiza a troca
            }

        }
    }

    // APRESENTAÇÃO DOS RESULTADOS

    cout << endl;
    cout << setiosflags(ios::left);
    cout << "RELATORIO GERAL" << endl << endl;
    cout << setw(41) << "Alunos";
    cout << resetiosflags(ios::left);
    cout << setiosflags (ios::right);
    cout << setw(7) << "Nota1";
    cout << setw(7) << "Nota2";
    cout << setw(7) << "Nota3";
    cout << setw(7) << "Nota4";
    cout << setw(7) << "Media" << endl << endl;

    for (I=0; I<=2; I++)
    {
        cout << resetiosflags (ios::right);
        cout << setiosflags (ios:: left);
        cout << setw(41) << ALUNO[I].NOME;
        cout << resetiosflags (ios::left);
        cout << setiosflags (ios:: right);

        for (J=0; J<=3; J++)
        {
            cout << setw(7) << ALUNO[I].NOTA[J];

        }

        cout << setw(7) << ALUNO[I].MEDIA;
        cout << endl;
    }

    cout << endl << setw(70) << "Media geral: " << setw(6) << MEDIA_G << endl;

    return 0;

}
