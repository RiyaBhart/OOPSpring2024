#include <iostream>
using namespace std;
class Logo
{
private:
    string shape;

public:
    Logo(string shape)
    {
        this->shape = shape;
    }
    friend void changename(Logo &l, string shape);
    void display()
    {
        cout << "Logo Shape: " << shape << endl;
    }
};
class Platform
{
    string platform;

public:
    Platform(string platform)
    {
        this->platform = platform;
    }
};
class Server
{
    int serverid;

public:
    Server(int serverid)
    {
        this->serverid = serverid;
    }
};
void changename(Logo &l, string s)
{
    l.shape = s;
}
int main()
{
    Logo logo("circle");
    Platform plat("twitter");
    Server s(134);
    cout << endl;
    logo.display(); // before change
    changename(logo, "Square");
    cout << endl;
    cout << "Modified logo :" << endl;
    logo.display(); // after change
    return 0;
}
