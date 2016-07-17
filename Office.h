#include<bits/stdc++.h>
using namespace std;

class Office:public Passenger{
    string office_name;
public:
    Office(int r, string c, int s, string t, string n):office_name(n){Vehicles::reg_num=r; Vehicles::color=c; Passenger::seat_cap=s; Passenger::pass_type=t;};
    Office():office_name("None"){Vehicles::reg_num=0; Vehicles::color="Blank"; Passenger::seat_cap=0; Passenger::pass_type="None";};
    void off_read(){pass_read(); cin.ignore(); cin>>office_name;}
    void off_display(){pass_display(); cout<<"Office Name: "<<office_name<<endl;}
    string get_name(){ return Vehicles::color;}
};
