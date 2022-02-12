#include <iostream>

using namespace std;

bool isPalindrome(int number){
    int copyNumber=number,reverseNumber=0;
    while(number!=0){
        int digit=number%10;
        reverseNumber=reverseNumber*10+digit;
        number/=10;
    }
    return copyNumber==reverseNumber;
}

int main() {
    cout<<"Enter the number of test cases: ";
    int testCases;
    cin>>testCases;
    while(testCases!=0){
        cout<<"Enter the number:";
        int number;
        cin>>number;
        cout<<"Result: "<<isPalindrome(number)<<endl;
        testCases--;
    }
}