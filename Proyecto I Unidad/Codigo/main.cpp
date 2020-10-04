#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"**************"<<endl;
    cout<<"MENU DE JUEGOS"<<endl;
    cout<<"***************"<<endl;

    int opcion=0;

    cout<<"Seleccione un Juego :"<<endl;
    cout<<"1- StarShip"<<endl;
    cout<<"2- Snake"<<endl;
    cin>>opcion;

    if(opcion==1)
    {
        starShip();
    }
    else
    {
       if(opcion == 2)
       {
           snake();
       }
    }
    

    system("cls");


    

    return 0;
}


