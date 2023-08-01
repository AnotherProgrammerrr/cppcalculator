#include <iostream>
using namespace std;


float sum(float a, float b){
    return a + b;
}

float sub(float a, float b){
    return a - b;
}

float mul(float a, float b){
    return a * b;
}

float dvi(float a, float b){
    return a / b;
}

int main(){
    float a, b;
    float result;
    char op;

    cin >> a >> op >> b;

    switch(op){
        case '+': 
            result = sum(a, b);
            cout << result;
            break;
        case '-': 
            result = sub(a, b);
            cout << result;
            break;
        case '*': 
            result = mul(a, b);
            cout << result;
            break;
        case '/': 
            result = dvi(a, b);
            cout << result;
            break;       
    }
    return 0;

}
