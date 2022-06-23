#include <iostream>

using namespace std;

class chanchitos{
    private:
        bool estado_animo;
    public:
        chanchitos(bool estado_animo){
           this -> estado_animo = estado_animo;
        }

        bool getEstadoAnimo(){
            return estado_animo;
        }
};
