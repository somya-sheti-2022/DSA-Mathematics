#include <iostream>

using namespace std;

bool isPrime(int number){
    for(int i=2;i*i<=number;i++)
        if(number%i==0)return false;
    return true;
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter the number:";
        int number;
        cin>>number;
        cout<<"isPrime: "<<((isPrime(number))?"true":"false")<<endl;
        testCases--;
    }
}