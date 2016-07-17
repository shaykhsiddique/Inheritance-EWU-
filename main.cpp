#include "Vehicles.h"
#include "passenger.h"
#include "Cargo.h"
#include "Family.h"
#include "Office.h"
#define fli() freopen("input.txt","r",stdin)
#define flo() freopen("output.txt","w",stdout)
#define bl putchar('\n')
#define size 2
using namespace std;
int max_pass(int i, int s, Passenger *p){
    int check;
    if(i==(s-1)) return p[i].get_seat();
    check=max_pass(i+1, s, p);
    return max(check, p[i].get_seat());
}

void off_white(int s, Office *p){
    bool check=false;
    for(int i=0; i<size; i++){
        if(p[i].get_name()=="White")
            check=true;
    }
    if(check)
        cout<<"White is found in Cargo"<<endl;
    else
        cout<<"White is not found in Cargo"<<endl;
}

int max_load(int i, int s, Cargo *p){
     int check;
    if(i==(s-1)) return p[i].get_load();
    check=max_load(i+1, s, p);
    return max(check, p[i].get_load());
}

int main(){
    fli();
    Family p1[size];
    Office p3[size];
    Cargo p4[size];
    for(int i=0; i<size; i++){
        p1[i].fam_read();
    }

    for(int i=0; i<size; i++){
        p3[i].off_read();
    }
    for(int i=0; i<size; i++){
        p4[i].car_read();
    }
    cout<<"Family:"<<endl<<endl;
    for(int i=0; i<size; i++){
        p1[i].fam_display();
    }
    cout<<endl<<"Office:"<<endl<<endl;
    for(int i=0; i<size; i++){
        p3[i].off_display();
    }
    cout<<endl<<"Cargo:"<<endl<<endl;
    for(int i=0; i<size; i++){
        p4[i].car_display();
    }
    Passenger p5[size];
    for(int i=0; i<size ; i++)
        p5[i].pass_read();
    bl;
    cout<<"Max Seat is: "<<max_pass(0, size, p5)<<endl;
    bl;
    cout<<"Max load is: "<<max_load(0, size, p4)<<endl;
    bl;
    off_white(size, p3);

    Passenger a1(1510, "Purple", 10, "Mini Bus");
    Passenger a2(1511, "Indigo", 5, "Car");
    Passenger a3=a1+a2;
    bl;
    cout<<"Operator Overloading (+) Passenger: "<<a3.get_seat()<<endl;
    a3=a1-a2;
    cout<<"Operator Overloading (-) Passenger: "<<a3.get_seat()<<endl;

    Cargo B1(1610, "Off-white", 18, "Cargo");
    Cargo B2(1611, "Red", 9, "Truck");
    Cargo B3=B1+B2;
    bl;
    cout<<"Operator Overloading (+) for Cargo: "<<B3.get_load()<<endl;
    B3=B1-B2;
    cout<<"Operator Overloading (-) for Cargo: "<<B3.get_load()<<endl;
    return 0;
}
