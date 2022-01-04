/*  Programa com o objetivo de mostrar o funcionamento de STRUCTS
    usando matrizes para armazenamento de dados
    e para sua manipula��o la�os do tipo FOR;
    ao final � feita uma reorganiza��o alfab�tica por compara��o distributiva */

// STRUCTS PT2 - MATRIZ ORDINAL

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
    for (I=1; I<=3; I++) // por serem 3 posi��es, considera-se de 1 a 3 (cardinal) e posteriormente corrige a matriz no �ndice
    {
        cout << "Entre o" << setw(2) << I << "o. aluno: ";
        cin.getline(ALUNO[I-1].NOME, sizeof(ALUNO[I-1].NOME)); // Faz a entrada da linha inteira com a op��o de espa�o
        cout << "Entre as notas deste aluno" << endl << endl;

        for (J=1; J<=4; J++) // La�o para entrada de nota dentro do la�o de nome do aluno
        {
            cout << setw(2) << J << "a. nota: ";
            cin.getline(ENTRA_NOTA, sizeof(ENTRA_NOTA));
            ALUNO[I-1].NOTA[J-1] = atof(ENTRA_NOTA);            // � feita a atribui��o convertida para float

        }
        cout << endl;
    }

    // PROCESSAMENTO DE DADOS

    SOMA_MD = 0;

    for (I=1; I<=3; I++)
    {
        SOMA_NT = 0;
        for (J=1; J<=4; J++)
        {
            SOMA_NT = SOMA_NT + ALUNO[I-1].NOTA[J-1];
        }

        ALUNO[I-1].MEDIA = SOMA_NT/4;
        SOMA_MD = SOMA_MD + ALUNO[I-1].MEDIA;
    }

    MEDIA_G = SOMA_MD/3;

    // ORDENA��O ALFAB�TICA DOS ALUNOS

    for (I=1; I<=2; I++)                // Os la�os tem uma repeti��o menor pois aplicam propriedade distributiva
    {
        for (J=I+1; J<=3; J++)
        {
            if (strcmp(ALUNO[I-1].NOME, ALUNO[J-1].NOME) > 0)   // Fun��o strcmp faz a compara��o de duas vari�veis
            {                                                   // strcmp (A, B)  > 0 -> A>B
                X = ALUNO[I-1];                                 // strcmp (A, B)  < 0 -> A<B
                ALUNO[I-1] = ALUNO[J-1];                        // strcmp (A, B) == 0 -> A==B
                ALUNO[J-1] = X;                                 // Portanto quando > 0 realiza a troca
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

    for (I=1; I<=3; I++)
    {
        cout << resetiosflags (ios::right);
        cout << setiosflags (ios:: left);
        cout << setw(41) << ALUNO[I-1].NOME;
        cout << resetiosflags (ios::left);
        cout << setiosflags (ios:: right);

        for (J=1; J<=4; J++)
        {
            cout << setw(7) << ALUNO[I-1].NOTA[J-1];

        }

        cout << setw(7) << ALUNO[I-1].MEDIA;
        cout << endl;
    }

    cout << endl << setw(70) << "Media geral: " << setw(6) << MEDIA_G << endl;

    return 0;

}
