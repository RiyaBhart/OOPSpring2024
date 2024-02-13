/*
NAME : RIYA BHART
ID: 23K-0063
*/

#include <iostream>
using namespace std;

class Smartphone
{
    string Brand;
    string Model;
    int DisplayResolution;
    int RAM;
    int ROM;
    int Storage;

public:
    void setbrand(string brand)
    {
        Brand = brand;
    }
    string getbrand()
    {
        return Brand;
    }
    void setmodel(string model)
    {
        Model = model;
    }
    string getmodel()
    {
        return Model;
    }
    void setDisplayRes(int displayresolution)
    {
        DisplayResolution = displayresolution;
    }
    int getDisplayRes()
    {
        return DisplayResolution;
    }
    void setRAM(int ram)
    {
        RAM = ram;
    }
    int getRAM()
    {
        return RAM;
    }
    void setROM(int rom)
    {
        ROM = rom;
    }
    int getROM()
    {
        return ROM;
    }
    void setStorage(int storage)
    {
        Storage = storage;
    }
    int getStorage()
    {
        return Storage;
    }
    void PhoneCall()
    {
        cout << "Calling" << endl;
    }
    void Message()
    {
        cout << "Sending message" << endl;
    }
    void ConnectToWifi()
    {
        cout << "Connecting to Wifi" << endl;
    }
    void BrowseInternet()
    {
        cout << "Browsing the internet" << endl;
    }
};

void functions(Smartphone s1)
{
    cout << "What do you want to do:" << endl;
    cout << "1. Make a phone call" << endl;
    cout << "2. Send a message" << endl;
    cout << "3. Connect to Wifi" << endl;
    cout << "4. Browse the internet" << endl;

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        s1.PhoneCall();
        break;
    case 2:
        s1.Message();
        break;
    case 3:
        s1.ConnectToWifi();
        break;
    case 4:
        s1.BrowseInternet();
        break;
    default:
        cout << "Invalid choice" << endl;
    }
}

int main()
{
    Smartphone s1;
    string brand, model;
    int displayres, ram, rom, storage;

    cout << "Enter Brand: ";
    cin >> brand;
    s1.setbrand(brand);

    cout << "Enter Model: ";
    cin >> model;
    s1.setmodel(model);

    cout << "Enter Display Resolution: ";
    cin >> displayres;
    s1.setDisplayRes(displayres);

    cout << "Enter RAM: ";
    cin >> ram;
    s1.setRAM(ram);

    cout << "Enter ROM: ";
    cin >> rom;
    s1.setROM(rom);

    cout << "Enter Storage: ";
    cin >> storage;
    s1.setStorage(storage);

    cout << "Brand: " << s1.getbrand() << endl;
    cout << "Model: " << s1.getmodel() << endl;
    cout << "Display Resolution: " << s1.getDisplayRes() << endl;
    cout << "RAM: " << s1.getRAM() << endl;
    cout << "ROM: " << s1.getROM() << endl;
    cout << "Storage: " << s1.getStorage() << endl;

    functions(s1);

    return 0;
}
