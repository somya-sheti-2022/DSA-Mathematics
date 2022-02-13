
# DSA - Mathematics

This repository includes major questions in DSA realated to mathematics :


## Let's get started
We will go around the questions one by one with the increasing order of difficulty:

#### QUESTION 1: 
We are given a number and we are suppose to **find the number of digits in the given number**

#### EXAMPLE TEST CASES

| Input | Output     |
| :-------- | :------- |
| 1234  | 4 |
| 11  | 2 |
| 125  | 3 |

#### Main logic
```cpp      
int noOfDigits(int number){
    int countOfDigits=0;
    while(number!=0){
        countOfDigits++;
        number/=10;
    }
    return countOfDigits;
}
```

As the loop is running till the number of digits in the given input the time Complexity is supposed to be

**Time Complexity: *O(d)***\
(d: no of Digits)

[Complete Code Link](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/noOfDigits.cpp)

### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/Question1.PNG)

#### QUESTION 2: 
We are given a number and we are suppose to say if the **number is palindrome or not** 

### Palindrome number
A number which is same even if you read from left to right or right to left.\
**Example: 121**

#### EXAMPLE TEST CASES

| Input | Output     |
| :-------- | :------- |
| 1234  | false |
| 11  | true |
| 125521  | true |

#### Main logic
```cpp      
bool isPalindrome(int number){
    int copyNumber=number,reverseNumber=0;
    while(number!=0){
        int digit=number%10;
        reverseNumber=reverseNumber*10+digit;
        number/=10;
    }
    return copyNumber==reverseNumber;
}
```

As the loop is running till the number of digits in the given input the time Complexity is supposed to be

**Time Complexity: *O(d)***\
(d: no of Digits)

[Complete Code Link](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/isPalindrome.cpp)


### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/Question2.PNG)

#### QUESTION 3: 
We are given a number and we are suppose to find **factorial for the given number.** 

### Factorial Number
Multiplication from 1 to N (N=number) and storing in a result.\
**Example: 4 Output: 24 (1 * 2 * 3 * 4)**

#### EXAMPLE TEST CASES

| Input | Output     |
| :-------- | :------- |
| 4  | 24 |
| 5  | 120 |
| 14  | 1278945280 |

#### Main logic
```cpp      
int factorial(int number){
    int result=1;
    for(int i=1;i<=number;i++){
        result*=i;
    }
    return result;
}
```

As the loop is running from 1 to number the time Complexity is supposed to be

**Time Complexity: *O(n)***\
(n: number)

[Complete Code Link](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/factorial.cpp)


### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/Question3.PNG)
