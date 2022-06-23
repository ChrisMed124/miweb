#include <iostream>
#include <cstring>
#include "archivo2.hpp"

using namespace std;

int main(){

    chanchitos* chancho = new chanchitos(true);

    if(chancho -> getEstadoAnimo() == true){
        cout<<"Chanchito feliz"<<endl;
    }
    else
    {
        cout<<"Chanchito triste"<<endl;
    }

    EXIT_SUCCESS;
}