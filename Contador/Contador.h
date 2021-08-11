#ifndef CONTADOR_H
#define CONTADOR_H
#include "header.h"
//#include "Contador.cpp"

class Contador
{
    public:
        void getCount(){
            cout << nCount <<endl; 
        }
        void setCount(int n){
            nCount = n; 
        }
        void incrementa(){
            nCount++;
        }
        void decrementa(){
            nCount--;
        }
    
    private: 
        int nCount = 2;
    
};

#endif // CONTADOR_Hs