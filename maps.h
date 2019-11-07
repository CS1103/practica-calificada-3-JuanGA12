//
// Created by Juan Galvez on 2019-11-07.
//

#ifndef PC3_MAPS_H
#define PC3_MAPS_H

#include <iostream>
#include <map>

using namespace std;

    map<string, float> MACBOOK_PRO;
    map<string, float> THINKPAD_P50;
    map<string, float> IPHONE_11;
    map<string, float> SAMSUNG_TV_50;

    void MBP(){
        MACBOOK_PRO.insert(pair<string,float>("alias9",10));
        MACBOOK_PRO.insert(pair<string,float>("alias2",11));
        MACBOOK_PRO.insert(pair<string,float>("alias3",20));
        MACBOOK_PRO.insert(pair<string,float>("alias8",10));
        MACBOOK_PRO.insert(pair<string,float>("alias2",9));
        MACBOOK_PRO.insert(pair<string,float>("alias1",10));
    }

    void T_P50(){
        THINKPAD_P50.insert(pair<string,float>("alias4",50));
        THINKPAD_P50.insert(pair<string,float>("alias5",20));
        THINKPAD_P50.insert(pair<string,float>("alias7",10));
        THINKPAD_P50.insert(pair<string,float>("alias1",20));
        THINKPAD_P50.insert(pair<string,float>("alias6",10));
    }

    void IP11(){
        IPHONE_11.insert(pair<string,float>("alias10",20));
        IPHONE_11.insert(pair<string,float>("alias11",50));
        IPHONE_11.insert(pair<string,float>("alias2",20));
        IPHONE_11.insert(pair<string,float>("alias12",40));
        IPHONE_11.insert(pair<string,float>("alias13",20));
    }
    void S_TV_50(){
        SAMSUNG_TV_50.insert(pair<string,float>("alias14",11));
        SAMSUNG_TV_50.insert(pair<string,float>("alias15",10));
        SAMSUNG_TV_50.insert(pair<string,float>("alias1a",11));
        SAMSUNG_TV_50.insert(pair<string,float>("alias1b",10));
    }

#endif //PC3_MAPS_H
