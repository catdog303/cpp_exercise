#include<iostream>

using namespace std;

struct CandyBar {
    char candyName[20];
    double candyWeight;
    int candyCalorie;
};

int main(){
    
    CandyBar* snack = new CandyBar;
    cin.get(snack->candyName, 20);
    cin >> snack->candyWeight;
    cin >> snack->candyCalorie;
    cout << "candyName = " << snack->candyName << endl;
    cout << "candyWeight = " << snack->candyWeight << endl;
    cout << "candyCalorie = " << snack->candyCalorie << endl;
    delete snack;

    return 0;


}