#include <iostream>
#include<vector>
using namespace std;

class product {
public:
    string name;
    double price;

    product (string name , double price){
        this->name = name;
        this->price = price;
    }
};

class ShoppingCart {
private:
    vector<product*> products;

public:
    void addProduct (product* p){
        products.push_back(p);
    }
    const vector<product*>&getProducts (){
        return products;
    }

    double calculateTotal (){
        double total = 0;
        for (auto p : products){
            total += p->price;
        }
        return total;
    }

    void printInvoice (){
        cout << "Shopping Card Invoice:\n";
        for(auto p : products){
            cout << p->name << "- $" << p->price << endl;
        }
        cout << "Total : $" << calculateTotal() << endl;
    }

    void saveToDatabase(){
        cout << " saving Shopping cart to database...." << endl;

    }
};



int main(){
    ShoppingCart* cart = new ShoppingCart();
    cart->addProduct(new product("Laptop" , 1500));
    cart->addProduct(new product("Mouse" , 50));

    cart->printInvoice();
    cart->saveToDatabase();
    
    return 0;
}