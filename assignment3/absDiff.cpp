/*
Assignment dated 18/08/2026
5. Write in C++ to find the absolute difference between n & 51. If n is greater than 51, return triple the difference.
*/

#include<iostream>
int absDiff(int n){
    if(n>51){
        return 3*(n-51);
    }
    return (51-n);
}

int main(){
    int n;
    std::cout << "Enter Number :";
    std::cin >> n;
    std::cout << "Absolute difference = " << absDiff(n);
    std::cout << std::endl;
    return 0;
}