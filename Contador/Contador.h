#ifndef CONTADOR_H
#define CONTADOR_H
#include "header.h"
//#include "Contador.cpp"

class Contador
{
    public:
        Contador();
        ~Contador();
        void incrementa();
        void decrementa();
        void getCount();
        void setCount(int n);
        void getName();
        void setName(string _name);
        
    
    protected:
        
    private: 
        int nCount;
        string name; 
        
    
};

Contador::Contador(){
    nCount = 0;
    name = "Sem nome";
    //ctor
}

Contador::~Contador(){
     
    //ctor
}

void Contador::incrementa(){
    nCount++;
}

void Contador::decrementa(){
    nCount--;
}

void Contador::getCount(){
    cout << nCount <<endl; 
}

void Contador::setCount(int n){
    nCount = n; 
}

void Contador::getName(){
    cout << name <<endl; 
}

void Contador::setName(string _name){
    name = _name; 
}

#endif // CONTADOR_Hs