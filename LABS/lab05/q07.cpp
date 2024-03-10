#include <iostream>
#include <string>

using namespace std;

class MenuItem
{
private:
    string itemName;
    double itemPrice;

public:
    MenuItem() : itemName(""), itemPrice(0.0) {}
    MenuItem(const string &name, double price) : itemName(name), itemPrice(price) {}

    string getName() const
    {
        return itemName;
    }

    double getPrice() const
    {
        return itemPrice;
    }
};

class Menu
{
private:
    static const int MAX_ITEMS = 10;
    MenuItem items[MAX_ITEMS];
    int itemCount;

public:
    Menu() : itemCount(0) {}

    void addItem(const MenuItem &item)
    {
        if (itemCount < MAX_ITEMS)
        {
            items[itemCount++] = item;
        }
        else
        {
            cout << "Menu is full. No more items can be added!" << endl;
        }
    }

    void removeItem(const string &itemName)
    {
        for (int i = 0; i < itemCount; ++i)
        {
            if (items[i].getName() == itemName)
            {
                for (int j = i; j < itemCount - 1; ++j)
                {
                    items[j] = items[j + 1];
                }
                itemCount--;
                break;
            }
        }
    }

    void display() const
    {
        cout << "Menu:\n";
        for (int i = 0; i < itemCount; ++i)
        {
            cout << items[i].getName() << " - Rs." << items[i].getPrice() << endl;
        }
    }
};

class Payment
{
private:
    double amount;

public:
    Payment(double amount) : amount(amount) {}

    double getAmount() const
    {
        return amount;
    }
};

class Order
{
private:
    static const int MAX_ITEMS = 10;
    MenuItem items[MAX_ITEMS];
    int itemCount;
    Payment payment;

public:
    Order(const MenuItem *items, int itemCount, const Payment &payment) : itemCount(itemCount), payment(payment)
    {
        for (int i = 0; i < itemCount; ++i)
        {
            this->items[i] = items[i];
        }
    }

    void display() const
    {
        cout << "Ordered Items:\n";
        for (int i = 0; i < itemCount; ++i)
        {
            cout << items[i].getName() << " - Rs." << items[i].getPrice() << endl;
        }
        cout << "Total Amount: Rs." << payment.getAmount() << endl;
    }
};

class Restaurant
{
private:
    Menu menu;

public:
    void addItemToMenu(const MenuItem &item)
    {
        menu.addItem(item);
    }

    void removeItemFromMenu(const string &itemName)
    {
        menu.removeItem(itemName);
    }

    void displayMenu() const
    {
        menu.display();
    }

    void placeOrder(const MenuItem *items, int itemCount, const Payment &payment)
    {
        Order order(items, itemCount, payment);
        order.display();
    }
};

int main()
{
    cout << "\nProgrammer : Riya Bhart\n Roll ID : 23k-0063\n"
         << endl;
    Restaurant restaurant;

    MenuItem item1("Handi", 2000);
    MenuItem item2("Burger", 500);

    restaurant.addItemToMenu(item1);
    restaurant.addItemToMenu(item2);
    restaurant.displayMenu();

    const MenuItem orderedItems[] = {item1, item2};
    Payment payment(880);
    restaurant.placeOrder(orderedItems, 2, payment);

    return 0;
}
