#include "std_lib_facilities.h"
int main()
{
    double smallest, largest;
    double i1,i2,i3;
    while(cin >> i1 >>i2){
        if(i1<=i2){
            smallest = i1;
            largest = i2;

        }
        else if(i1>=i2){
            smallest = i2;
            largest = i1;
        }
       
        while(cin >> i3){
        if(i3>=largest){
            largest = i3;
            cout << largest << " la so to nhat tung nhin" << '\n';
        }
        if(i3<=smallest){
            smallest = i3;
            cout << smallest << " la so be nhat tung nhin" << '\n';
        }
        
        
        }
    }
    keep_window_open();
}