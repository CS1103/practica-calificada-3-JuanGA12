#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <algorithm>
#include <vector>
#include "funciones.h"
#include "maps.h"

using namespace std;
int main() {
    vector<string> DATOS;
    string nombre_oferta;

    ifstream archivo("bid_example.txt");
    if(archivo.is_open()){
        while(getline(archivo,nombre_oferta)){
            DATOS.push_back(nombre_oferta);
            cout<<nombre_oferta<<endl;
        }
    }
    archivo.close();
    //NO SE LOGRÓ A LEER EL ARCHIVO COMO SE ESPERABA
    //SOLO SE GUARDÓ TODOS LOS DATOS EN UN VECTOR(DATOS)
    //CUANDO LA IDEA ERA GUARDAR LOS NOMBRES DE LOS PRODCUTOS
    //EN UN LIST O VECTOR
    //Y LOS ALIAS CON SUS VALORES EN MAPS
    //YA QUE NO SE CONSIGUIÓ LA LECTURA DE ARCHIVOS
    //SE PROCEDIÓ A "CREARLOS MANUALMENTE" EN maps.h (NO PEDIDO PERO NECESARIO PARA AL MENOS TENER ALGO)

    MBP();
    T_P50();
    IP11();
    S_TV_50();

    cout <<endl;
    max(MACBOOK_PRO);
    max(THINKPAD_P50);
    max(IPHONE_11);
    max(SAMSUNG_TV_50);
    cout<<endl;
    prom(MACBOOK_PRO);
    prom(THINKPAD_P50);
    prom(IPHONE_11);
    prom(SAMSUNG_TV_50);
    cout<<endl;
    min(MACBOOK_PRO);
    min(THINKPAD_P50);
    min(IPHONE_11);
    min(SAMSUNG_TV_50);

    /*for(auto&i : MACBOOK_PRO){
        auto it = find(begin(THINKPAD_P50), end(THINKPAD_P50), i.first);
        MACBOOK_PRO.erase(it);
    }

    for(auto&i:MACBOOK_PRO){
        cout<<i.second<<" ";
    }*/
    return 0;
}