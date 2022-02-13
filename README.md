
# DSA - Mathematics

This repository includes major questions in DSA realated to mathematics :


## Let's get started
We will go around the questions one by one with the increasing order of difficulty:

### QUESTION 1: 
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

### QUESTION 2: 
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

### QUESTION 3: 
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

### QUESTION 4: 
We are given two numbers and we are suppose to find **greatest common divisor of 2 numbers.** 

### GCD 
Greatest common divisor is the largest number that divides both the given number\
**Example: 12, 16 Ouput will be 4.**

#### EXAMPLE TEST CASES

| Input | Output     |
| :-------- | :------- |
| 11,7 | 1 |
| 12,24  | 12 |
| 12,18  | 6 |

#### Main logic
```cpp      
int gcd(int number1,int number2){
    if(number2==0)return number1;
    return gcd(number2,number1%number2);
}
```

**Time Complexity: *O(log(max(n1,n2))***\
(n1: number1, n2:number2)

[Complete Code Link](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/gcd.cpp)


### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/Question4.PNG)

### QUESTION 5: 
We are given two numbers and we are suppose to find **least common divisor of 2 numbers.** 

### LCM
Least common divisor is the smallest number that is multiple of both the given number\
**Example: 12, 16 Ouput will be 48.**

#### EXAMPLE TEST CASES

| Input | Output     |
| :-------- | :------- |
| 11,7 | 77 |
| 12,24  | 24 |
| 12,18  | 36 |

#### Main logic
```cpp      
int lcm(int number1,int number2){
    return number*number2/gcd(number,number2)
}
```

**Time Complexity: *O(log(max(n1,n2))***\
(n1: number1, n2:number2)

[Complete Code Link](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/lcm.cpp)


### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/Question5.PNG)

### QUESTION 6: 
We are given a numbers and we are suppose to tell **if the number is prime or not?** 

### Prime Number
Number divisible only by 1 and itself\
**Example: 7**

#### EXAMPLE TEST CASES

| Input | Output     |
| :-------- | :------- |
| 7 | true |
| 12  | false |
| 13  | true |

The idea we use is factors occurs in pairs and one of them is always less than **sqrt(n)**

#### Main logic
```cpp      
bool isPrime(int number){
    for(int i=2;i*i<=number;i++)
        if(number%i==0)return false;
    return true;
}
```

Since the loop is running till **Square root of the given Number**\
**Time Complexity: *O(sqrt(n))***\
(n: given number)

[Complete Code Link](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/isPrime.cpp)


### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/Question6.PNG)

### QUESTION 7: 
We are given a numbers and we are suppose to find **prime factors of given number** 

#### EXAMPLE TEST CASES

| Input | Output     |
| :-------- | :------- |
| 315 | 3,3,5,7 |
| 13  | 13 |
| 12  | 2,2,3 |

#### Main logic
```cpp      
void primeFactors(int number){
    for(int i=2;i*i<=number;i++){
        while(number%i==0){
            cout<<i<<", ";
            number=number/i;
        }
    }
    if(number>=2)cout<<number;
    cout<<endl;
    return;
}
```

**Time Complexity: * O(n^(1/2) log n)***\
(n: given number)

[Complete Code Link](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/primeFactors.cpp)


### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/DSA-Mathematics/blob/main/Question7.PNG)
