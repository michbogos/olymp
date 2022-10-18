/*
Largest prime factor 
Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/
#include<stdio.h>

int main(){
    long num = 600851475143;
    int res = 0;
    int div = 2;
    while(num > 1){
        while(num%div!=0){
            div += 1;
        }
        num /= div;
        if(div > res){
            res = div;
        }
    }
    printf("%d", res);
    return 0;
}