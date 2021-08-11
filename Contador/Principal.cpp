#include "header.h"

int main(){
    Contador a;
    int state = 10; 
    string name;

    while (state != 0){
        cout << "-----------------------" << endl;
        cout << "1 - Criar novo contador" << endl;
        cout << "2 - dar nome" << endl;
        cout << "3 - Aumentar" << endl;
        cout << "4 - Diminuir" << endl;
        cout << "0 - Sair" << endl;

        cin >> state; 

        switch (state)
        {
        case 1:
            //a = new(Contador); 
            break;
        case 2:
            cout << "-----------------------" << endl;
            cout << "Digite o nome ";
            cin >> name; 
            a.setName(name);
            a.getName();
            break;
        case 3:
            cout << "-----------------------\nContagem : ";
            a.incrementa();
            a.getCount();

            break;
        case 4:
            cout << "-----------------------\nContagem : ";
            a.decrementa();
            a.getCount();

            break;
        
        default:
            break;
        }
    }


    return 0;
}

