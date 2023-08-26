#include <iostream>

using namespace std;

class AnimalEstimacao{
protected:
    string nome;
    string raca;
public:
    virtual void caminha(){
        cout << "O animal esta caminhando" << endl;
    }
    void setNome(string nome){
    this->nome = nome;
    }
    void setRaca(string raca){
    this->raca = raca;
    }
    string getNome(string nome){
        return nome;
    }
    string getRaca(string raca){
        return raca;
    }
    AnimalEstimacao(string nome, string raca){
        this-> nome = nome;
        this-> raca = raca;
    }
};

class Cachorro: public AnimalEstimacao{
public:
    Cachorro(string nome, string raca)
    :AnimalEstimacao(nome, raca){
    this->nome = nome;
    this->raca = raca;
    }
    void late (){
        cout << "O cachorro " << nome << " " << raca << " diz auau" << endl;
    }
    void caminha(){
        cout << "O cachorro "<< nome << " " << raca <<" esta caminhando" << endl;
    }
};

class Gato: public AnimalEstimacao{
public:
    void mia (){
        cout << "miau" << endl;
    }
    void caminha(){
        cout << "O gato esta caminhando" << endl;
    }
};

int main()
{
    string dogname, dograca;
    cout << "Digite o nome do cachorro" << endl;
    cin >> dogname;
    cout << "Digite a raca do cachorro" << endl;
    cin >> dograca;

    Cachorro dog1 = Cachorro(dogname, dograca);
    dog1.late();
    dog1.caminha();

    return 0;
}
