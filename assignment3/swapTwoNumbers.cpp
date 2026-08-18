/*
Assignment dated 18/08/2026
3. Write in C++ to swap 2 numbers without using third variable.
*/

#include<iostream>

void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

int main(){
    int num1,num2;
    std::cout << "Enter num1 :";
    std::cin >> num1;
    std::cout << "Enter num2 :";
    std::cin >> num2;
    swap(num1,num2);
    std::cout << "After swapping :" << std::endl;
    std::cout << "num1= " << num1 <<"  num2= " << num2;
    std::cout << std::endl;
    return 0;
}