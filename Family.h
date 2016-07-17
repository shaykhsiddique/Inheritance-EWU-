#include<bits/stdc++.h>
using namespace std;

class Family:public Passenger{
    string owner_name;
public:
    Family(int r, string c, int s, string t, string n):owner_name(n){Vehicles::reg_num=r; Vehicles::color=c; Passenger::seat_cap=s; Passenger::pass_type=t;};
    Family():owner_name("None"){Vehicles::reg_num=0; Vehicles::color="Blank"; Passenger::seat_cap=0; Passenger::pass_type="None";};
    void fam_read(){pass_read(); cin>>owner_name;}
    void fam_display(){ pass_display(); cout<<"Owner Name: "<<owner_name<<endl;}
};
