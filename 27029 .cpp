#include <iostream>
using namespace std;

int main() {

    long long number;
    cin >> number;

    if(number / 10000000000000 == 34 || number / 10000000000000 == 37){
        cout << "American Express\n";
    } else if(number / 100000000000000 == 51 || number / 100000000000000 == 55){
        cout << "MasterCard\n";
    } else if(number / 1000000000000 == 4 || number / 1000000000000000 == 4){
        cout << "Visa\n";
    } else{
        cout << "無效卡號";
    }
    if(number / 10000000000000 == 34 || number / 10000000000000 == 37 || number / 100000000000000 == 51 || number / 100000000000000 == 55 || number / 1000000000000 == 4 || number / 1000000000000000 == 4){
        int result = 0;

        for (int i = 1; i <= 16; i++){
            int input = number % 10;

            if (i % 2 == 0){
                if (2 * input >= 10){
                    int variable1 = 0;
                    int variable2 = 2 * input;
                    for (int j = 1; j <= 2; j++){
                        variable1 += variable2 % 10;
                        variable2 /= 10;
                    }
                    result += variable1;
                } else {
                    result += 2 * input;
                }
            } else{
                result += input;
            }
        number /= 10;
        }
            if (result % 10 == 0){
            cout << "正確";
            } else {
            cout << "錯誤";
            }
    }
}
