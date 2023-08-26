#include <iostream>

using namespace std;

class Forma {
protected:
    string Nome;
    double Perimetro;
    double Area;
public:
    Forma(string nome, double perimetro, double area){
    Nome = nome;
    Perimetro = perimetro;
    Area = area;
    }
    void Imprimir(){
        cout << "Nome:" << Nome << endl;
       cout << "Perimetro:" << Perimetro << endl;
       cout << "Area:" << Area << endl;
    }
    static void mostrarForma(){
        return Area;
    }

};

class Retangulo: public Forma{
private:
    double Base;
    double Altura;

public:
    Retangulo(double base, double altura):Forma(){
        Base = base;
        Altura = altura;
    }
    double Area(){
        double Area = Base*Altura;
        return Area;
    }
    double Perimetro(){
        double Perimetro = (Base*2) + (Altura*2);
        return Perimetro;
    }

};

int main()
{
    string nome;
    double perimetro, area;
    cout << "Digite o nome da forma" << endl;
    cin >> nome;
    cout << "Digite o perimetro da forma" << endl;
    cin >> perimetro;
    cout << "Digite a area da forma" << endl;
    cin >> area;

    Forma forma1 = Forma(nome, perimetro,area);
    forma1.Imprimir();
    return 0;
}
