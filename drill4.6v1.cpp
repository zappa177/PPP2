#include "std_lib_facilities.h"
int main()
{
    long long i1,i2;
    long long smallest=0,largest=0;
    while(cin>>i1){
        smallest = i1;
        cout << i1 << ' ';
        while(cin>> i2){
            cout << i2 << '\n';

        if(i1<=i2){
            
            if(i2>=largest){
                largest = i2;
            }
            
            
        }
        if(i2<=i1){
            if(i2<=smallest){
                smallest = i2;
            }
            


        }
        cout << smallest << " la so be nhat tung nhin" <<'\n';
        cout << largest << " la so to nhat tung nhin" << '\n';
        }
    }

    return 0;
}