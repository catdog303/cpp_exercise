#include<iostream>
using namespace std;

struct Pizza {
    string pizzaCompany;
    double pizzaDiameter;
    double pizzaWeight;
};

int main() {
    Pizza pizza;
    
    cout <<"피자회사 이름은:";
    getline(cin,pizza.pizzaCompany);
    cout <<"지름은:";
    cin >> pizza.pizzaDiameter;
    cout <<"중량은:";
    cin >> pizza.pizzaWeight;

    cout << "\n===============================\n";
    cout << "피자 회사 이름은 " << pizza.pizzaCompany << "이고, 지름은 " << pizza.pizzaDiameter
            << ", 중량은 " << pizza.pizzaWeight << "입니다.\n";

    return 0;
}