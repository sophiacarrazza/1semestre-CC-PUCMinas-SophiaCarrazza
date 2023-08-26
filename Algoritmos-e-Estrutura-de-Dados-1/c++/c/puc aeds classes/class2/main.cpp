#include <iostream>

using namespace std;

class Relogio
{
private:
    int hora, minuto, segundo;
public:
    Relogio () {}
    Relogio(int rHora, int rMinuto, int rSegundo):
        hora(rHora), minuto(rMinuto), segundo(rSegundo) {}

void setHora (int hora, int minuto, int segundo)
    {
        this->hora=hora;
        this->minuto=minuto;
        this->segundo=segundo;
    }

string getHora()
    {
        char horaStr[9];
        sprintf(horaStr, "%02d:%02d:%02d", hora, minuto, segundo);
        return string(horaStr);

    }



};
int main()
{
    Relogio hr;

    hr.setHora(13, 15, 40);
    cout << hr.getHora() << endl;

    return 0;
}
