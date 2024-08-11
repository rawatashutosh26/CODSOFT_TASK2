#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    char operation;

    cout<<"Enter the value of first number: "<<endl;
    cin>>n1;

    cout<<"Enter the value of second number: "<<endl;
    cin>>n2;


    cout<<"Choose the operation that you want to perform (+, -, *, /): "<<endl;
    cin >> operation;

    switch(operation) {
        
        case '+':
            cout<< "Solution: "<<n1 + n2<<endl;
            break;

        case '-':
            cout<< "Solution: "<<n1 - n2<<endl;
            break;

        case '*':
            cout<< "Solution: "<<n1 * n2<<endl;
            break;

        case '/':
            if (n2 == 0){
                cout<<"Error: Divison of any number by 0 is not allowed "<<endl;
            }else{
                cout<< "Solution: "<<n1 / n2<<endl;
            }
            break;
        
        default:
            cout<<"Invalid Operation."<<endl;

            
    }
}