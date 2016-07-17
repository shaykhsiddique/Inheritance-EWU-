#include<bits/stdc++.h>
using namespace std;

class Passenger: public Vehicles{
protected:
    int seat_cap;
    string pass_type;
public:
    Passenger(int r, string c, int s, string t):Vehicles(r, c),seat_cap(s), pass_type(t){ };
    Passenger():seat_cap(0), pass_type("None"){ Vehicles::reg_num=0; Vehicles::color="Blank";};
    void pass_read(){ ve_read(); cin>>seat_cap>>pass_type;}
    void pass_display(){ ve_display(); cout<<"Seating Capacity: "<<seat_cap<<endl<<"Type: "<<pass_type<<endl;}
    int get_seat(){ return seat_cap;}
    Passenger operator+(Passenger p){
        Passenger temp;
        temp.seat_cap=seat_cap+p.seat_cap;
        return temp;
    }
    Passenger operator-(Passenger p){
        Passenger temp;
        temp.seat_cap=seat_cap-p.seat_cap;
        return temp;
    }
};
