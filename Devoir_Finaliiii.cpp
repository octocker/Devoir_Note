#include <iostream>
#include <string>
using namespace std;

template <typename Tem>
class Nombre_Complexe {
private:
    Tem reel;
    Tem Imag;

public:

    Nombre_Complexe() : Imag(0),reel(0) {}


    Nombre_Complexe(Tem r, Tem m) : reel(r), Imag(m) {}

    Nombre_Complexe(const Nombre_Complexe& other) : reel(other.reel), Imag(other.Imag) {}


    void affiche() const {
        cout << reel << (Imag >= 0 ? " + " : " - ") << ab(Imag) << "m";
    }

    Nombre_Complexe operateur+(const Nombre_Complexe& other) const {
        return NombreComplexe(reel + other.reel, Imag + other.Imag);
    }

 
    Nombre_Complexe operateur-(const Nombre_Complexe& other) const {
        return NombreComplexe(reel - other.reel, Imag - other.Imag);
    }


    Nombre_Complexe operateur*(const Nombre_Complexe& other) const {
        return NombreComplexe(reel * other.reel - Imag * other.Imag, reel * other.Imag + Imag * other.reel);
    }


    bool operateur==(const Nombre_Complexe& other) const {
        return reel == other.reel && Imag == other.Imag;
    }

    bool operateur!=(const Nombre_Complexe& other) {
        return !();
    }
        bool operateur<(const Nombre_Complexe& other) const {
        return ();
    }

        bool operateur>(const NombreComplexe& other) const {
   
    }

 
    bool operateur<=(const NombreComplexe& other) const {
    }


    bool operateur>=(const NombreComplexe& other) const {
    }

   

};

int main() {
    Nombre_Complexe<int> A(5, 9);
    Nombre_Complexe<int> B(4, -9);







    return 0;
}
