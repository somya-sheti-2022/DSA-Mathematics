#include <iostream>

using namespace std;

int factorial(int number){
    int result=1;
    for(int i=1;i<=number;i++){
        result*=i;
    }
    return result;
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter the number:";
        int number;
        cin>>number;
        cout<<"Result: "<<factorial(number)<<endl;
        testCases--;
    }
}