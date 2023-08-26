#include <iostream>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
    double altura;
public:
    Pessoa () {}
    Pessoa(string pNome, int pIdade, double pAltura):
        //por sessao de inicializacao
        nome(pNome), idade(pIdade), altura(pAltura) {}

    string getNome() {return nome;}
    void setNome(string nome) {this->nome=nome;}

    int getIdade() {return idade;}
    void setIdade(int idade) {this->idade=idade;}

    double getAltura () {return altura;}
    void setAltura (double altura) {this->altura=altura;}
    //ou void setAltura (a) {altura=a;} ou
    //void setAltura (parametro) {variavel=parametro;}

    void Imprimir(){
        cout << "== Pessoa:" << endl;
        cout << "Nome:" << nome << endl;
        cout << "Idade:" << idade << endl;
        cout << "Altura:" << altura << endl;
    }

};
int main()
{
    Pessoa p("Joao Victor", 24, 1.82);
    string nome;
    cin >> nome;
    p.setNome(nome);
    int idade;
    cin >> idade;
    p.setIdade(idade);
    double altura;
    cin >> altura;
    p.setAltura(altura);
    p.Imprimir();

    return 0;
}
