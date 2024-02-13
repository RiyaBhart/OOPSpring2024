/*
NAME : RIYA BHART
ID: 23K-0063
*/

#include <iostream>
using namespace std;

class Stationary
{
    string items[100];
    int prices[100];

public:
    void addItems()
    {
        int n;
        cout << "Enter number of items to be added: " << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            if (items[i] == "")
            {
                cout << "Enter item: ";
                cin.ignore();
                getline(cin, items[i]);
                cout << "Enter the price: ";
                cin >> prices[i];
            }
        }
    }
    void showList()
    {
        for (int i = 0; i < 100; i++)
        {
            if (items[i] != "")
            {
                cout << "Item : " << items[i] << " Price :  " << prices[i] << endl;
            }
        }
    }
    void modifyprices()
    {
        string item;
        cout << "Enter item to change price: " << endl;
        getline(cin, item);
        for (int i = 0; i < 100; i++)
        {
            if (items[i] == item)
            {
                cout << "Enter new price: " << endl;
                cin >> prices[i];
                return;
            }
        }
        cout << "No such item found. " << endl;
    }
    void displayitemwprices()
    {
        for (int i = 0; i < 100; i++)
        {
            if (items[i] != "")
            {
                cout << "Item:  " << items[i] << " Price: " << prices[i] << endl;
            }
        }
    }
    void generateReceipt(string items[], int prices[], int quantities[], int count)
    {
        float total = 0;
        cout << "Receipt: " << endl;
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < 100; j++)
            {
                if (items[i] == items[j])
                {
                    total += prices[j] * quantities[i];
                    cout << items[i] << " - " << quantities[i] << " - " << prices[j] << endl;
                    break;
                }
            }
        }
        cout << "Total: " << total << endl;
        cout << "Thank you for shopping with us!" << endl;
    }
};

int main()
{
    Stationary s1;
    int choice;
    do
    {
        cout << "Select your function" << endl
             << "1. Add Items " << endl
             << "2. Show list of all items " << endl
             << "3. Modify prices " << endl
             << "4. Display items along with prices " << endl
             << "5. Exit Program. " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            s1.addItems();
            break;
        case 2:
            s1.showList();
            break;
        case 3:
            s1.modifyprices();
            break;
        case 4:
            s1.displayitemwprices();
            break;
        case 5:
            cout << "Exiting program" << endl;
            return 0;
        default:
            cout << "Incorrect choice." << endl;
        }
    } while (choice != 5);

    return 0;
}
