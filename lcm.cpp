#include <iostream>

using namespace std;

int gcd(int number1,int number2){
    if(number2==0)return number1;
    return gcd(number2,number1%number2);
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter number 1:";
        int number;
        cin>>number;
        cout<<"Enter number 2:";
        int number2;
        cin>>number2;
        cout<<"Result: "<<number*number2/gcd(number,number2)<<endl;
        testCases--;
    }
}