#include<iostream>
#include<array>

using namespace std;

int main(){
    int num;
    int sum =0;
    double averageRun;
    array<double,3> resultArray;
    
    for (num = 0; num < 3; num++){
        cout << num+1 << "번째 기록을 넣으세요: ";
        cin >> resultArray[num];
        sum += resultArray[num];
    }

    averageRun = sum / 3;
    cout << "=====================================\n";
    for (num = 0; num < 3; num++){
        cout << num+1 << "번째 기록은 " << resultArray[num] << " 입니다"<< endl;
    }
    cout << " 평균은 " << averageRun << " 입니다\n";

    return 0;
}
