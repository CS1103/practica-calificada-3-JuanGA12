//
// Created by Juan Galvez on 2019-11-07.
//

#ifndef PC3_FUNCIONES_H
#define PC3_FUNCIONES_H

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;
template <typename map>
auto prom(map mapa1){
    //accumulate
    float count = 0;
    int size = 0;
    for(auto&i:mapa1){
        count +=i.second;
        size++;
    }
    float prom = count/size;

    cout<<prom<<endl;
}
template <typename map>
auto max(map mapa1){
    auto x = std::max_element(begin(mapa1), end(mapa1),[](const pair<string, float>& p1, const pair<string, float>& p2){
        return p1.second < p2.second; });
    cout<<x->second<<endl;

}
template <typename map>
auto min(map mapa1){
    auto x = std::min_element(begin(mapa1), end(mapa1),[](const pair<string, float>& p1, const pair<string, float>& p2){
        return p1.second < p2.second; });
    cout<<x->second<<endl;

}


#endif //PC3_FUNCIONES_H
