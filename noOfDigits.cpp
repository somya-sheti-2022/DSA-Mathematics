#include <iostream>

using namespace std;

int noOfDigits(int number){
    int countOfDigits=0;
    while(number!=0){
        countOfDigits++;
        number/=10;
    }
    return countOfDigits;
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter the number:";
        int number;
        cin>>number;
        cout<<"Result: "+noOfDigits(number)<<endl;
        testCases--;
    }
}