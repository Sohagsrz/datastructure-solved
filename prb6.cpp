#include <iostream>
using namespace std;

int main( ){
    //user datas

    int newInput= 4521;
    int indexW= 9;
    cout << "Enter the Index Number Where you want to insert: ";
    cin >> indexW;
    cout << "Enter the value you want to insert: ";
    cin >> newInput;


    int numbers[10]= {1,2,3,4,5,6,7,8,9, NULL};
    int nSize= sizeof(numbers)/ sizeof(numbers[0]);
    int tmp;

    //shift the left data to an array
    for(int i= indexW; i < nSize; i++){
        tmp = numbers[i];
        numbers[i] = newInput;
        newInput = tmp;
    }

    for(int i=0; i < nSize; i++){
         cout << numbers[i] << " ";
    }

    return 0;
}
