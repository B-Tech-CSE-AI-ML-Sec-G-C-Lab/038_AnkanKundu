/*
Assignmnet dated 18/08/2026
1.Write a C++ program to add two numbers
*/
#include<iostream>
int add(int a,int b){
    return a+b;
}

int main(){
    int num1,num2,result;
    std::cout << "Enter Number 1 :";
    std::cin >> num1;
    std::cout << "Enter Number 2 :";
    std::cin >> num2;
    result=add(num1,num2);
    std::cout << "Sum of " << num1 <<" and " << num2 << " is " << result <<std::endl;
    return 0;
}