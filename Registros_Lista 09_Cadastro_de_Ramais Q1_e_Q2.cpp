/*
                    LISTA 09 - DESAFIO CADASTRO DE RAMAIS
CPE - Turma 02
ALUNO: Mateus Torres de Souza
MATRICULA: 130015032

*/

#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <unistd.h>

#define N 1500

using namespace std;

struct ramal
{
    int nramal;   // NÚMERO DO RAMAL
    int cat;      // CATEGORIA
    string setor; // SETOR
    int edificio; // EDIFÍCIO
    int sala;     // NÚMERO DA SALA
    string nome1; // NOME DO RESPONÁVEL PELO RAMAL
    string nome2; // NOME DO RESPONSÁVEL PELO ATESTE DA CONTA TELEFÔNICA
};

string minusculo(string);
void critica_ramal(ramal[], int *, int); // A passagem será por REFERÊNCIA.
void critica_categoria(int *);
void critica_setor(string *);
void critica_edificio(int *);
void critica_sala(int *);

void pesquisa_ramal(ramal[], int);
void pesquisa_setor(ramal[], int);
void pesquisa_edificio(ramal[], int);
void pesquisa_responsavel1(ramal[], int);
void pesquisa_responsavel2(ramal[], int);

int main()
{

    ramal cadramal[N]; // cadramal é um vetor do tipo ramal.
    int n;

    cout << "==================================" << endl;
    cout << "VAMOS INICIAR O CADASTRO DE RAMAIS" << endl;
    cout << "==================================" << endl;
    sleep(3);
    system("cls");

    cout << "Insira a quantidade de cadastros que serao inseridos: ";
    cin >> n;

    cout << endl;
    cout << "VAMOS COMECAR O CADASTRO" << endl;
    sleep(2);
    system("cls");

    for (int i = 0; i < n; i++) // Laço de Cadastro
    {
        cout << "REGISTRO DOS DADOS DO CADASTRO " << i + 1 << ":" << endl;
        cout << endl;

        cout << "Digite o numero do Ramal: ";

        cin >> cadramal[i].nramal;
        critica_ramal(cadramal, &cadramal[i].nramal, i);
        cout << endl;

        cout << "Digite o numero da Categoria: ";

        cin >> cadramal[i].cat;
        critica_categoria(&cadramal[i].cat);
        cout << endl;

        cout << "Digite o Setor: ";

        cin >> cadramal[i].setor;
        critica_setor(&cadramal[i].setor);
        cout << endl;

        cout << "Digite o Codigo do Edificio: ";
        cin >> cadramal[i].edificio;
        critica_edificio(&cadramal[i].edificio);
        cout << endl;

        cout << "Digite o numero do Sala: ";
        cin >> cadramal[i].sala;
        critica_sala(&cadramal[i].sala);
        cout << endl;

        cout << "Digite o nome do Responsavel pelo Ramal: ";
        cin >> cadramal[i].nome1;
        cadramal[i].nome1 = minusculo(cadramal[i].nome1); // Os nomes serão armazenados no vetor com letras minúsculas.
        cout << endl;

        cout << "Digite o nome do Responsavel pelo ateste: ";
        cin >> cadramal[i].nome2;
        cadramal[i].nome2 = minusculo(cadramal[i].nome2); // Os nomes serão armazenados no vetor com letras minúsculas.
        cout << endl;

        sleep(1);
        system("cls");
    }

    cout << endl;
    cout << "Lista de Ramais Cadastrados: " << endl;
    cout << "=============================" << endl;
    cout << endl;

    for (int i = 0; i < n; i++) // LAÇO DE IMPRESSÃO DOS CADASTROS
    {
        cout << "Dados do cadastro " << i + 1 << ":" << endl;
        cout << endl;

        cout << "Ramal: ";
        cout << cadramal[i].nramal << endl;

        cout << "Categoria: ";
        cout << cadramal[i].cat << endl;

        cout << "Setor: ";
        cout << cadramal[i].setor << endl;

        cout << "Edificio: ";
        cout << cadramal[i].edificio << endl;

        cout << "Sala: ";
        cout << cadramal[i].sala << endl;

        cout << "Responsavel pelo Ramal: ";
        cout << cadramal[i].nome1 << endl;

        cout << "Responsavel pelo ateste: ";
        cout << cadramal[i].nome2 << endl;

        cout << endl;
    }
    cout << "\n\tAguarde alguns segundos para iniciarmos a Pesquisa de Ramais";
    sleep(20);
    system("cls");
    do
    {
        cout << endl;
        cout << "___________________PESQUISA DE RAMAIS_______________________" << endl;
        cout << "SELECIONE A FORMA DE PESQUISA QUE DESEJA UTILIZAR:\n";
        cout << "PRESSIONE 0 para: numero do ramal.\n";
        cout << "PRESSIONE 1 para: setor.\n";
        cout << "PRESSIONE 2 para: edificio.\n";
        cout << "PRESSIONE 3 para: responsavel pelo ramal.\n";
        cout << "PRESSIONE 4 para: responsavel pelo ateste.\n";
        cout << endl;
        int c;
        cout << endl;
        do
        {
            cin >> c;
            switch (c)
            {
            case 0:
                pesquisa_ramal(cadramal, n);
                break;
            case 1:
                pesquisa_setor(cadramal, n);
                break;
            case 2:
                pesquisa_edificio(cadramal, n);
                break;
            case 3:
                pesquisa_responsavel1(cadramal, n);
                break;
            case 4:
                pesquisa_responsavel2(cadramal, n);
                break;
            default:
                cout << "Esse codigo de pesquisa nao se encontra em nossa lista.\n ";
                cout << "Digite um valor valido: ";
            }
        } while (c < 0 || c > 4);
    } while (true);
    return 0;
}

string minusculo(string nome)
{
    int tam;
    string str;
    tam = nome.size();
    str = nome;
    for (int j = 0; j < tam; j++)
    {
        str[j] = tolower(nome[j]);
    }
    return str;
}

void critica_setor(string *setor)
{
    bool i;
    do
    {
        *setor = minusculo(*setor); // A string (o nome da pessoa) foi convertida para letras minusculas.

        if (*setor == "setel")
        {
            i = 1;
        }
        else if (*setor == "diben")
        {
            i = 1;
        }
        else if (*setor == "patrimonio")
        {
            i = 1;
        }
        else if (*setor == "protocolo")
        {
            i = 1;
        }
        else
        {
            i = 0;
        }
        if (i == 0)
        {
            cout << "Este setor nao se encontra em nossos dados." << endl;
            cout << "Digite novamente o nome do setor: ";
            cin >> *setor;
        }
    } while (!i);
    return;
}

/*
void critica_ramal2(int *r)
{
    if (*r < 1000 || *r > 2999)
    {
        do
        {
            cout << "Este numero de ramal esta fora do range do Ministerio do Meio Ambiente. Digite novamente o numero do ramal: ";
            cin >> *r;
        } while (*r < 1000 || *r > 2999);
    }
    return;
}
*/

void critica_ramal(ramal v[], int *r, int b)
{
    bool c;
    do
    {
        c = 0;
        if (*r < 1000 || *r > 2999)
        {
            do
            {
                cout << "Este numero de ramal nao pertence ao Ministerio do Meio Ambiente." << endl;
                cout << "Digite novamente o numero do ramal: ";
                cin >> *r;
            } while (*r < 1000 || *r > 2999);
        }

        for (int j = 0; j < b; j++)
        {
            if (v[j].nramal == *r) // OPA! ESTE NÚMERO DE RAMAL JÁ ESTÁ CADASTRADO!
            {
                cout << "Este numero de ramal ja foi cadastrado." << endl;
                cout << "Insira novamente o numero do ramal: ";
                cin >> *r;
                c = 1;
                break;
            }
        }
    } while (c);
    return;
}

void critica_categoria(int *c)
{
    if (*c < 0 || *c > 6)
    {
        do
        {
            cout << "Esta categoria nao esta presente no nosso Sistema de telefonia." << endl;
            cout << "Digite novamente a categoria: ";
            cin >> *c;
        } while (*c < 0 || *c > 6);
        return;
    }
}

void critica_edificio(int *e)
{
    switch (*e)
    {
    case 500:
        break;
    case 505:
        break;
    default:
        do
        {
            cout << "Este codigo nao se refere a nenhum de nosos edificios." << endl;
            cout << "Digite novamente o codigo do edificio: ";
            cin >> *e;

        } while ((*e != 500) && (*e != 505));
        break;
    }
    return;
}

void critica_sala(int *x)
{
    string str;
    str = to_string(*x);
    if (str.size() != 3)
    {
        do
        {
            cout << "O numero da sala e composto por 3 digitos." << endl;
            cout << "Digite novamente o numero da sala: ";
            cin >> *x;
            str = to_string(*x);
        } while (str.size() != 3);
    }
    return;
}

void pesquisa_ramal(ramal v[], int n)
{
    cout << "LISTA DE RAMAIS:\n";
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << v[j].nramal << endl;
    }
    int pesquisa;
    cout << endl;
    cout << "Digite o numero que deseja pesquisar: ";
    cin >> pesquisa;

    cout << endl;
    for (int j = 0; j < n; j++)
    {
        if (v[j].nramal == pesquisa)
        {

            cout << "Ramal: ";
            cout << v[j].nramal << endl;

            cout << "Categoria: ";
            cout << v[j].cat << endl;

            cout << "Setor: ";
            cout << v[j].setor << endl;

            cout << "Edificio: ";
            cout << v[j].edificio << endl;

            cout << "Sala: ";
            cout << v[j].sala << endl;

            cout << "Responsavel pelo ramal: ";
            cout << v[j].nome1 << endl;

            cout << "Responsavel pelo ateste de conta: ";
            cout << v[j].nome2 << endl;

            cout << endl;
        }
    }
    return;
}

void pesquisa_setor(ramal v[], int n)
{
    string s[4];
    s[0] = "setel";
    s[1] = "diben";
    s[2] = "patrimonio";
    s[3] = "protocolo";

    cout << "LISTA DE SETORES:\n";
    cout << endl;
    for (int j = 0; j < 4; j++)
    {
        cout << s[j] << endl;
    }
    string pesquisa;
    cout << "Digite o setor que deseja pesquisar: ";
    cin >> pesquisa;

    pesquisa = minusculo(pesquisa); // As letras inseridas pelo usuário foram convertidas para minúsculo.

    cout << endl;
    for (int j = 0; j < n; j++)
    {
        if (v[j].setor == pesquisa)
        {

            cout << "Ramal: ";
            cout << v[j].nramal << endl;

            cout << "Categoria: ";
            cout << v[j].cat << endl;

            cout << "Setor: ";
            cout << v[j].setor << endl;

            cout << "Edificio: ";
            cout << v[j].edificio << endl;

            cout << "Sala: ";
            cout << v[j].sala << endl;

            cout << "Responsavel pelo ramal: ";
            cout << v[j].nome1 << endl;

            cout << "Responsavel pelo ateste de conta: ";
            cout << v[j].nome2 << endl;

            cout << endl;
        }
    }
    return;
}

void pesquisa_edificio(ramal v[], int n)
{
    int s[2];
    s[0] = 500;
    s[1] = 505;

    cout << "LISTA DE EDIFICIOS:\n";
    cout << endl;

    cout << s[0] << " para: Edificio Sede" << endl;
    cout << s[1] << " para: Edificio localizado na SEPN 505 Asa Norte." << endl;

    int pesquisa;
    cout << "Digite o Edificio que deseja pesquisar: ";
    cin >> pesquisa;

    cout << endl;
    for (int j = 0; j < n; j++)
    {
        if (v[j].edificio == pesquisa)
        {

            cout << "Ramal: ";
            cout << v[j].nramal << endl;

            cout << "Categoria: ";
            cout << v[j].cat << endl;

            cout << "Setor: ";
            cout << v[j].setor << endl;

            cout << "Edificio: ";
            cout << v[j].edificio << endl;

            cout << "Sala: ";
            cout << v[j].sala << endl;

            cout << "Responsavel pelo ramal: ";
            cout << v[j].nome1 << endl;

            cout << "Responsavel pelo ateste de conta: ";
            cout << v[j].nome2 << endl;

            cout << endl;
        }
    }
    return;
}

void pesquisa_responsavel1(ramal v[], int n)
{

    cout << "LISTA DE NOMES DE RESPONSAVEIS PELO RAMAL:\n";
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << v[j].nome1 << endl;
    }

    string pesquisa;
    cout << "Digite o nome do responsavel que deseja pesquisar: ";
    cin >> pesquisa;

    pesquisa = minusculo(pesquisa); // As letras inseridas pelo usuário foram convertidas para minúsculo.

    cout << endl;
    for (int j = 0; j < n; j++)
    {
        if (v[j].nome1 == pesquisa)
        {

            cout << "Ramal: ";
            cout << v[j].nramal << endl;

            cout << "Categoria: ";
            cout << v[j].cat << endl;

            cout << "Setor: ";
            cout << v[j].setor << endl;

            cout << "Edificio: ";
            cout << v[j].edificio << endl;

            cout << "Sala: ";
            cout << v[j].sala << endl;

            cout << "Responsavel pelo ramal: ";
            cout << v[j].nome1 << endl;

            cout << "Responsavel pelo ateste de conta: ";
            cout << v[j].nome2 << endl;

            cout << endl;
        }
    }
    return;
}

void pesquisa_responsavel2(ramal v[], int n)
{

    cout << "LISTA DE NOMES DE RESPONSAVEIS PELO ATESTE:\n";
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << v[j].nome2 << endl;
    }

    string pesquisa;
    cout << "Digite o nome do responsavel que deseja pesquisar: ";
    cin >> pesquisa;

    pesquisa = minusculo(pesquisa); // As letras inseridas pelo usuário foram convertidas para minúsculo.

    cout << endl;
    for (int j = 0; j < n; j++)
    {
        if (v[j].nome2 == pesquisa)
        {

            cout << "Ramal: ";
            cout << v[j].nramal << endl;

            cout << "Categoria: ";
            cout << v[j].cat << endl;

            cout << "Setor: ";
            cout << v[j].setor << endl;

            cout << "Edificio: ";
            cout << v[j].edificio << endl;

            cout << "Sala: ";
            cout << v[j].sala << endl;

            cout << "Responsavel pelo ramal: ";
            cout << v[j].nome1 << endl;

            cout << "Responsavel pelo ateste de conta: ";
            cout << v[j].nome2 << endl;

            cout << endl;
        }
    }
    return;
}
