/*
Assignment dated 18/08/2026
2. Write in C++ to Check if a number is odd or even.
*/

#include<iostream>
int checkEven(int num){
    if(num%2==0){
        return 1;
    }
    return 0;
}

int main(){
    int num;
    std::cout << "Enter Number to check for Odd or Even :";
    std::cin >> num;
    if(checkEven(num)){
        std::cout << num <<" is Even";
    }
    else{
        std::cout << num <<" is Odd";
    }
    std::cout << std::endl;
    return 0;
}