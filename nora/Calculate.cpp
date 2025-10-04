#include "Calculate.h"
#include <iostream>
#include <string>

int sum(int a, int b){
return a+b;
}

int sub(int a, int b){
return a-b;}

int mult (int a, int b){
return a*b;}

int divv (int a, int b){
return a/b;}

int result (std::string a){
    std::string oper = "";
    std::string num1 = "";
    std::string num2 = "";
    int haveoper = 0;

    for (int i = 0; i != sizeof(a)-1; i++){
        char c = a[i];
        if (c == '+' || c == '-' || c == '*' || c == '/'){
        oper = c;
        haveoper = 1;
        }

        else if (haveoper == 0){
            num1 += c;}
        else if (haveoper == 1){
            num2 += c;}
    }
    int inum1 = stoi(num1);
    int inum2 = stoi(num2);

    if (oper == "+"){
        return sum(inum1, inum2);
    }
    if (oper == "-"){
        return sub(inum1, inum2);
    }
    if (oper == "*"){
        return mult(inum1, inum2);
    }
    if (oper == "/"){
        return divv(inum1, inum2);
    }

}

// 45+973
