#include <iostream>
#include <vector>
using namespace std;

int num1,num2,num3;
int * addresses[3+1] = {&num1, &num2, &num3};
    vector<int*> vector2 = {&num1};
int * dodatnie_liczby(int var_num) {
    // int *ptrarray = new int [var_num+1];

    for (int i=0; i< var_num; i++) {
        cout << "Enter positive integers" << endl;
        cin >> num1;
        if (num1 < 0) {
            continue;
        }
        else {
            vector2.at(i) = &num1;
            ptrarray[i] = num1;
        } 
    }       
        return  vector2;
}

int main(){
dodatnie_liczby(3);
}