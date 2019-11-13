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
    string ladrar;
public:
    Perro(string _especie,int _edad,string _ladrar):
        Animal(_especie, _edad), ladrar(_ladrar){}
    string salidaLadrido(){
        return "wof wof";
        }
};

class Gato: public Animal
{
private:
    string maullar;
public:
    Gato(string _especie,int _edad,string _maullar):
        Animal(_especie, _edad), maullar(_maullar){}
    string salidaMaullido(){
        return "miau miau";
        }

};

int main()
{
    ///Animal desc("desconocido", 0);
    ///desc.getDatos();
    ///desc.imprimeDatos();

    Perro p( );
    p.getDatos();
    p.imprimeDatos();
    p.salidaLadrido();

    Gato g();
    g.getDatos();
    g.imprimeDatos();
    g.salidaMaullido();


    return 0;
}
