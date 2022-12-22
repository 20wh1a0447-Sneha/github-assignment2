#include <iostream>

using namespace std;

int main() {
    int wavelength;
    cin>>wavelength;
    if(wavelength < 350 && wavelength <= 450){
        cout<<"violet";
    }
    else if(wavelength < 450 && wavelength <=495){
        cout<<"Blue";
    }
    else if(wavelength < 495 && wavelength <=570){
        cout<<"Green";
    }
        else if(wavelength < 570 && wavelength <=590){
            cout<<"Yellow";
        }
    else if(wavelength < 590 && wavelength <=620){
        cout<<"Orange";
    }
        else if(wavelength < 620 && wavelength <=750){
            cout<<"Red";
        }
        else
            cout<<"outside of visible spectrum";
        return 0;
}
