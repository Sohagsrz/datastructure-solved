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

    // some drafts
    int tempSize = (nSize-indexW)-1;
    int temp[tempSize];
    int x=0;

    //shift the left data to an array
    for(int i= indexW; i < nSize; i++){
        temp[x++]= numbers[i];
    }

    //new input
    numbers[indexW]= newInput;

    //merge the data fter that indexW index from temp
    x=0;
    for(int i= indexW+1 ; i < nSize ; i++){
        numbers[i] =temp[x++];
    }
    //delete for free memory
    delete temp;

    for(int i=0; i < nSize; i++){
         cout << numbers[i] << " ";
    }


    return 0;
}
