#include<bits/stdc++.h>
using namespace std;

class Cargo:public Vehicles{
    int load_cap;
    string car_type;
public:
    Cargo(int r, string c, int s, string t):Vehicles(r, c), load_cap(s), car_type(t){ };
    Cargo( ):load_cap(0), car_type("None"){ Vehicles::reg_num=0; Vehicles::color="Blank";};
    void car_read(){ ve_read(); cin>>load_cap>>car_type;}
    void car_display(){ ve_display(); cout<<"Seating Capacity: "<<load_cap<<endl<<"Type: "<<car_type<<endl;}
    int get_load(){ return load_cap;}

   Cargo operator+(Cargo p){
        Cargo temp;
        temp.load_cap=load_cap+p.load_cap;
        return temp;
    }

    Cargo operator-(Cargo p){
        Cargo temp;
        temp.load_cap=load_cap-p.load_cap;
        return temp;
    }
};
