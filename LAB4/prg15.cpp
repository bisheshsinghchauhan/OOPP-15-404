#include <iostream>
#include <vector>
using namespace std;
class Item {
public:
    string name;
    int quantity;
    double price;
};
void displayCart(const vector<Item>& cart) {
    for (auto i : cart)
        cout << i.name << " " << i.quantity << " " << i.price << endl;
}
double calculateTotal(const vector<Item>& cart) {
    double total = 0;
    for (auto i : cart)
        total += i.quantity *i.price;
    return total;
}
void applyDiscount(vector<Item>& cart) {
    for (auto& i : cart)
        if (i.price > 1000)
            i.price = i.price* 0.9;
}
Item findMostExpensiveItem(const vector<Item>& cart) {
    Item max = cart[0];
    for (auto i : cart)
        if (i.price > max.price)
            max = i;
    return max;
}
int main() {
    vector<Item> cart = {
        {"Laptop", 1, 50000},
        {"Mouse", 2, 1200},
        {"Keyboard", 1, 800}
    };
    cout << "Cart:"<<endl;
    displayCart(cart);
    cout << "Total = " << calculateTotal(cart) << endl;
    auto max = findMostExpensiveItem(cart);
    cout << "Most Expensive = " << max.name << endl;
    applyDiscount(cart);
    cout << "After Discount:"<<endl;
    displayCart(cart);
    cout << "New Total = " << calculateTotal(cart) << endl;
    return 0;
}