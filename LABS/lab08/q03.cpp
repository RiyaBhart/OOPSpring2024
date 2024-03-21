#include <iostream>
using namespace std;
class Position{
    public:
    int x,y,z;
    Position(int x,int y,int z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
};
class Health{
    public:
    int health;
    Health(int health){
        this->health=health;
    }
};
class Character: public Position, public Health{
    public:
    string name;
    Character(string name,int x,int y,int z,int health):Position(x,y,z),Health(health){
        this->name=name;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Position x : "<<x<<endl;
        cout<<"Position y : "<<y<<endl;
        cout<<"Position z : "<<z<<endl;
        cout<<"Health : "<<health<<endl;
        // cout<<"Name : "<<name<<endl;
    }
};
int main(){
    Character c("ABC",2,3,4,10);
    c.display();
    return 0;
}
