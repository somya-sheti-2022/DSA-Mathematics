#include <iostream>

using namespace std;

void primeFactors(int number){
    cout<<"Result: ";
    for(int i=2;i*i<=number;i++){
        while(number%i==0){
            cout<<i<<", ";
            number=number/i;
        }
    }
    if(number>=2)cout<<number;
    cout<<endl;
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter the number:";
        int number;
        cin>>number;
        primeFactors(number);
        testCases--;
    }
}