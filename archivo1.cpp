#include <iostream>
#include <cstring>
#include "archivo2.hpp"

using namespace std;

int main(){

    chanchitos* chancho = new chanchitos(true);

    if(chancho -> getEstadoAnimo() == true){
        cout<<"Chanchito feliz";
    }
    else
    {
        cout<<"Chanchito triste";
    }

    EXIT_SUCCESS;
}