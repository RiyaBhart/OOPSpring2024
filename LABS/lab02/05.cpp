/*Your assignment is to construct a basic product management system for an online store.
1. Develop a function that enables the addition of a new product to the system. The
function should accept parameters such as product name, price, quantity, and
any other relevant details.
2. Implement a function that takes a product ID as input and displays detailed
information about the product, including its name, price, quantity in stock,
and any other relevant details.
3. Design a function that allows the update of product information. It should accept
a product ID and the new details (e.g., updated price, quantity, etc.) and modify
the existing product’s information accordingly.*/
/*
Name : RIYA BHART 
Roll ID: 23k-0063
Labtask 5
*/
#include <iostream>
using namespace std;
struct Product
{
    int id;
    string name;
    int price;
    int quantity;
};

void NewProduct(Product products[], int &nproducts, int maxproduct)
{
    if (maxproduct > nproducts)
    {
        cout << "Enter product name: " << endl;
        cin >> products[nproducts].name;
        cout << "Enter product id: " << endl;
        cin >> products[nproducts].id;
        cout << "Enter product price: " << endl;
        cin >> products[nproducts].price;
        cout << "Enter product quantity: " << endl;
        cin >> products[nproducts].quantity;
    }
    else
    {
        cout << "Maximum product limit reached."<<endl;
    }
}
void ProductDetail(Product products[], int nproducts, int productId)
{
    bool flag = false;
    for (int i = 0; i < nproducts; i++)
    {
        if (productId == products[i].id)
        {
            cout << "product name: " << endl;
            cout << products[i].name;
            cout << "product id: " << endl;
            cout << products[i].id;
            cout << "product price: " << endl;
            cout << products[i].price;
            cout << "product quantity: " << endl;
            cout << products[i].quantity;
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "Product not found." << endl;
    }
}
void Update(Product products[], int nproducts, int productId)
{
    int np, nq;
    string newname;
    bool found = false;
    for (int i = 0; i < nproducts; i++)
    {
        if (productId == products[i].id)
        {
            cout << "Enter the updated name: ";
            cin >> newname;
            cout << "Enter the updated price: ";
            cin >> np;
            cout << "Enter the updated quantity: ";
            cin >> nq;
            products[i].name = newname;
            products[i].price = np;
            products[i].quantity = nq;
            found = true;
        }
    }
    if (!found)
    {
        cout << "Product with given ID not found.";
    }
}

int main()
{
    int n;
    int maxproduct;
    int nproducts = 0;
    cout << "Enter the maximum product you want: ";
    cin >> maxproduct;
    Product products[maxproduct];
    do
    {
        cout << "Choose your operation " << endl;
        cout << "1. Add a product" << endl;
        cout << "2. Display Details of a product" << endl;
        cout << "3. Update details of a product" << endl;
        cout << "4. EXIT." << endl;
        cin >> n;
        int n1, nid;
        switch (n)
        {
        case 1:
            NewProduct(products, nproducts, maxproduct);
            nproducts++;
            break;
        case 2:
            cout << "Search by Product Id; Enter Product ID";
            cin >> n1;
            ProductDetail(products, nproducts, n1);
            break;
        case 3:
            cout << "Enter the product id: ";
            cin >> nid;
            Update(products, nproducts, nid);
            break;
        case 4:
            return 0;
        default:
            cout << "Choose a correct number" << endl;
            return 0;
        }
    } while (n != 4);

    return 0;
}
