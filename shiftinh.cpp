#include <iostream>
using namespace std;
int main( ){
    int numbers[]= {1,2,4,5,7,89,90,0};
    int sizeN = sizeof(numbers)/ sizeof(numbers[0]);

    int k=4;

    int temp[k];
    for(int i=0;i < k ;i++){
        temp[i]= numbers[i];
    }
    int x=k; //4
    //sizeN = 8
    for(int i=0;  x < sizeN ; i++){
        numbers[i]= numbers[x++];
    }
    x= 0;
    // n-k => 8-4 => 4
    for(int i= sizeN - k; i < sizeN ; i++){
        numbers[i] = temp[x++];
    }

    for(int i=0; i < sizeN ; i++){
        cout << numbers[i] << " ";
    }


    return 0;

}
