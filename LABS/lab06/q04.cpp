#include <iostream>
using namespace std;
inline float battingav(int runs,int dismals){
    float battingavg;
    battingavg = runs/dismals;
    return battingavg;

    }
inline double strikerate(int runs,int balls){
    double strikerate = (runs/balls)*100;
    return strikerate;
}
int main(){
    cout<<"batting avg : "<<battingav(10,2)<<endl;
    cout<<"Strike rate : "<<strikerate(14,6)<<endl;

    return 0;
}
