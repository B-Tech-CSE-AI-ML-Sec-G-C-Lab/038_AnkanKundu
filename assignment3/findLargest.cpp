/*
Assignment dated 18/08/2026
4.Write in C++ to Find the largest number among 3 numbers.
*/

#include<iostream>
int largestAmongThree(int num1,int num2,int num3){
    if(num1>=num2 && num1>=num3){
        return num1;
    }
    else if(num2>=num1 && num2>=num3){
        return num2;
    }
    return num3;
}

int main(){
    int num1,num2,num3;
    std::cout << "Enter 3 numbers :";
    std::cin >> num1 >> num2 >> num3 ;
    std::cout << "Largest number is " << largestAmongThree(num1,num2,num3);
    std::cout << std::endl;
    return 0;
}