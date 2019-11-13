#include <iostream>

using namespace std;

class Animal{
protected:
    string especie;
    int edad;
public:
    Animal();
    Animal(string especie_,int edad_){
        this -> especie= especie_;
        this -> edad=edad_;
    }
    void getDatos(){
        cout << "Ingrese la especie: ";
        cin >> especie;
        if(especie=="persona" || especie=="objeto"){cout <<"No es un animal";}

        cout << "Ingrese la edad : ";
        cin >> edad;
    }
    void imprimeDatos(){
        cout << "su especie es " <<especie <<" su edad es "<<edad;
    }

};

class Perro: public Animal
{
private:
    string raza;
public:
    Perro(string _especie,int _edad,string _raza):
        Animal(_especie, _edad), raza(_raza){}
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
public:
    Gato(string _especie,int _edad,string _raza):
        Animal(_especie, _edad), raza(_raza){}
    void ingreseRaza(){
        cout << "Ingrese la raza: ";
        cin >>raza;
        }
    void imprimeRaza()
    {
        cout << "La raza es "<< raza;
    }

};

int main()
{
    Animal desc("desconocido", 0);
    desc.getDatos();
    desc.imprimeDatos();

    Perro p("perro", 12,"buldog" );
    p.ingreseRaza();
    p.imprimeRaza();

    Gato g("gato", 12, "");
    g.ingreseRaza();
    g.imprimeRaza();


    return 0;
}
