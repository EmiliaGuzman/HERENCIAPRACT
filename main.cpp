#include <iostream>

using namespace std;

class Animal{
protected:
    string especie;
    string clasificacion;
public:
    Animal();
    Animal(string especie_,string clasificacion_){
        this -> especie= especie_;
        this -> clasificacion=clasificacion_;
    }
    void getDatos(){
        cout << "Ingrese la especie: ";
        cin >> especie;
        if(especie=="persona" || especie=="objeto"){cout <<"No es un animal";}

        cout << "Ingrese la clasificacion (mamiforo, hervivoro, ..) : ";
        cin >> clasificacion;
    }
    void imprimeDatos(){
        cout << "su especie es " <<especie <<" su clasificacion es "<<clasificacion;
    }

};

class Perro: public Animal
{
private:
    string raza;
public:
    Perro(string _especie,string _clasificacion,string _raza):
        Animal(_especie, _clasificacion), raza(_raza){}
    void ingreseRaza(){
        cout << "Ingrese la raza: ";
        cin >>raza;
        }
    void imprimeRaza()
    {
        cout << "La raza es "<< raza;
    }
};

class Gato: public Animal
{
private:
    string raza;
    int nacimiento;
public:
    Perro(string _especie,string _clasificacion,string _raza, int _nacimiento):
        Animal(_especie, _clasificacion), raza(_raza), nacimiento(_nacimiento){}
    void ingreseRaza(){
        cout << "Ingrese la raza: ";
        cin >>raza;
        }
    void ingreseNacimiento(){
        cout << "Ingrese el nacimiento: ";
        cin >>nacimiento;
    }
    string imprimeRaza()
    {
        return raza;
    }

};

int main()
{
    Animal desc();
    desc.getDatos();
    desc.imprimeDatos();

    Perro p();
    p.ingreseRaza();
    p.imprimeRaza();



    return 0;
}
