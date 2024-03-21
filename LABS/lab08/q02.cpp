#include <iostream>
using namespace std;
class Character{
    public:
    int health;
    int damage;
    Character(int health,int damage){
        this->health=health;
        this->damage=damage;
    }
    void display(){
        cout<<"Health Status: "<<health<<endl;
        cout<<"Damage Status: "<<damage<<endl;
    }

};
class Enemy:public Character{
    public:
    Enemy(int health,int damage):Character(health,damage){}
    void display(){
        cout<<"Health Status: "<<health<<endl;
        cout<<"Damage Status: "<<damage<<endl;
    }

};
class Player:public Character{
    public:
    Player(int health,int damage):Character(health,damage){}
    void display(){
        cout<<"Health Status: "<<health<<endl;
        cout<<"Damage Status: "<<damage<<endl;
    }

};
class Wizard:public Player{
    public:
    int magicpower;
    string spells;
    Wizard(int magicpower,string spells,int health,int damage): Player(health,damage){
        this->magicpower=magicpower;
        this->spells=spells;
    }
    void display(){
        cout<<"Health Status: "<<health<<endl;
        cout<<"Damage Status: "<<damage<<endl;
        cout<<"Magic Powers: "<<magicpower<<endl;
        cout<<"Spells: "<<spells<<endl;
    }

};
int main(){
    Wizard w1(4,"abc",10,5);
    w1.display();
    return 0;

}
