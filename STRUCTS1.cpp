/*  Programa com o objetivo de mostrar o funcionamento de STRUCTS
    usando matrizes para armazenamento de dados
    e para sua manipula��o la�os do tipo FOR;
    ao final � feita uma reorganiza��o alfab�tica por compara��o distributiva */

// STRUCTS PT1 - MATRIZ CARDINAL

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

using namespace std;

int main (void)
{
    struct CAD_ALUNO                    // Defini��o do tipo de dado derivado
    {
        char NOME[41];                  // Cadeia com 40 caracteres +1 \o
        float NOTA[4];                  // Matriz com 4 espa�os para armazenamento
        float MEDIA;
    };

    int I, J;                           // Indices para controlar os la�os
    float SOMA_NT, SOMA_MD, MEDIA_G;    // Vari�veis de processamento
    char ENTRA_NOTA [6];                 // Vari�vel para entrada de valor que posteriormente ser� convertido
    CAD_ALUNO ALUNO[3], X;              // Vari�veis to tipo STRUCT que v�o armazenar os registros

    cout << setprecision(2);            // determina 2 casas decimais apos a virgula
    cout << setiosflags(ios::fixed);     // mant�m as casas decimais vis�veis

    // ENTRADA DE DADOS

    cout << "CADASTRO DE ALUNOS" << endl << endl;
    for (I=0; I<=2; I++) // por serem 3 posi��es apenas, considera-se de 0 a 2 (cardinal)
    {
        cout << "Entre o" << setw(2) << I+1 << "o. aluno: ";
        cin.getline(ALUNO[I].NOME, sizeof(ALUNO[I].NOME)); // Faz a entrada da linha inteira com a op��o de espa�o
        cout << "Entre as notas deste aluno" << endl << endl;

        for (J=0; J<=3; J++) // La�o para entrada de nota dentro do la�o de nome do aluno
        {
            cout << setw(2) << J+1 << "a. nota: ";
            cin.getline(ENTRA_NOTA, sizeof(ENTRA_NOTA));
            ALUNO[I].NOTA[J] = atof(ENTRA_NOTA);            // � feita a atribui��o convertida para float

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

    // ORDENA��O ALFAB�TICA DOS ALUNOS

    for (I=0; I<=1; I++)                // Os la�os tem uma repeti��o menor pois aplicam propriedade distributiva
    {
        for (J=I+1; J<=2; J++)
        {
            if (strcmp(ALUNO[I].NOME, ALUNO[J].NOME) > 0)   // Fun��o strcmp faz a compara��o de duas vari�veis
            {                                               // strcmp (A, B)  > 0 -> A>B
                X = ALUNO[I];                               // strcmp (A, B)  < 0 -> A<B
                ALUNO[I] = ALUNO[J];                        // strcmp (A, B) == 0 -> A==B
                ALUNO[J] = X;                               // Portanto quando > 0 realiza a troca
            }

        }
    }

    // APRESENTA��O DOS RESULTADOS

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
