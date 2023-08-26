#include <iostream>

using namespace std;

int main()
{
    int num;
    try{
    cout << "Digite um numero de 1 a 6" << endl;
    cin >> num;
    if (num<1 || num>6){
        throw exception();
    }else{
    cout << "O valor lido foi " << num << endl;
    }
    }
    catch(exception& e1){
    cout << "O valor lido " << num << " e invalido" << endl;
    }

    return 0;
}
