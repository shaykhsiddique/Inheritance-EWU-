#include<bits/stdc++.h>
using namespace std;

class Vehicles{
protected:
    int reg_num;
    string color;
public:
    Vehicles(int r, string c):reg_num(r), color(c){ };
    Vehicles():reg_num(0), color("Blank"){ };
    void ve_read(){ cin>>reg_num>>color;}
    void ve_display(){ cout<<"Registration Number: "<<reg_num<<endl<<"Color: "<<color<<endl;}
};
