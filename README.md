
# DSA - Mathematics

This repository includes major questions in DSA realated to mathematics :


## Let's get started
We will go around the questions one by one with the increasing order of difficulty:

#### QUESTION 1: 
We are given a number and we are suppose to find the number of digits in the given number

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
