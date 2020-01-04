#include<iostream>
#include<vector>

using namespace std;

typedef struct candyBar {
    char candyName[20];
    double candyWeight;
    int candyCalorie;
}candyBar;

void printCandy(vector<candyBar> T);

int main(){
    int size = 0;
    cout << "candyBar 숫자를 넣으세요: ";
    cin >> size;
    vector<candyBar> arrCandy(size);

    for( int i = 0; i < size; i++){
        cout << i+1 << " 번째 candyBar를 입력하세요:" <<endl;
        cout << "이름은:";
        cin >> arrCandy[i].candyName;
        cout << "중량은:";
        cin >> arrCandy[i].candyWeight;
        cout << "칼로리는:";
        cin >> arrCandy[i].candyCalorie;
    }

    printCandy(arrCandy);    
    return 0;

}

void printCandy(vector<candyBar> T){
    for (int i =0; i < T.size(); i++){
        cout << i+1 <<"번째 캔디바 :" << endl;
        cout << "이름은 :" << T[i].candyName;
        cout << "\n중량은:" << T[i].candyWeight;
        cout << "\n칼로리는:"<< T[i].candyCalorie;
        cout << "\n================================\n";
    }
1

}
    