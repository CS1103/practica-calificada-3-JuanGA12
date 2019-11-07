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
    vector<string> nombre_oferta1;
    string nombre_oferta;

    ifstream archivo("bid_example.txt");
    if(archivo.is_open()){
        while(getline(archivo,nombre_oferta)){
            nombre_oferta1.push_back(nombre_oferta);
            cout<<nombre_oferta<<endl;
        }
    }
    archivo.close();

    MBP();
    T_P50();
    IP11();
    S_TV_50();

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
    return 0;
}