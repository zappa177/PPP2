#include "std_lib_facilities.h"
int main()
{
    double i1,i2,i3;
    double smallest,largest;
    while(cin >> i1){
        smallest = i1;
        cout << smallest << " la so nho nhat tung nhin1" << '\n';
        while(cin>>i2){
            if(i2<=i1){
                smallest = i2;
                largest = i1;
                cout << smallest << " la so nho nhat tung nhin2" << '\n';
                while(cin>>i3){
                    if(i3<=smallest){
                        smallest = i3;
                        cout << smallest<<  " la so nho nhat3" << '\n';

                    }
                    if(i3>=largest){
                        largest = i3;
                        cout << largest << " la so lon nhat4" << '\n';
                    }
                }
            }
            if(i2>=i1){
                largest = i2;
                smallest = i1;
                cout << largest << " la so lon nhat tung nhin5" << '\n';
                while(cin>>i3){
                    if(i3>=largest){
                        largest = i3;
                        cout << largest << " la so lon nhat6" << '\n';
                    }
                    if(i3<=smallest){
                        smallest = i3;
                        cout << smallest << " la so nho nhat7" << '\n';
                    }
                }
            }
        }
        
        }
    


}