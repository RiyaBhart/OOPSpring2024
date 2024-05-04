#include <iostream>
using namespace std;
class Convert{
    protected:
    double val1,val2;
    public:
    Convert(double val1){
        this->val1=val1;
    }
    virtual double compute()=0;
};
class l_to_g:public Convert{
    public:
    l_to_g(double val1):Convert(val1){}
    double compute(){
        val2 = val1*0.264172;
        cout<<"Gallons : "<<val2<<endl;
    }
};
class f_to_c:public Convert{
    public:
    f_to_c(double val1):Convert(val1){}
    double compute(){
        val2 = (5*(val1-32))/9;
        cout<<"Celsius : "<<val2<<endl;
    }
};
int main(){
    Convert *c;
    l_to_g lg(4);
    c=&lg;
    c->compute();
    f_to_c fc(70);
    c=&fc;
    c->compute();
}
