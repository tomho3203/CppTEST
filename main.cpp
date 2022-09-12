#include <iostream>
#include <math.h>
void Lambdas()
{
    std::cout << "LPhiE" << std::endl;
}
int main() {

    int num=5;
    int num2=3;
    std::cout << "Hello, World!" << std::endl;
    std::cout <<"RUSH LAMBDAS FALL 22" << std::endl; //comments blah
    std::cout <<num2 << num << std::endl;
    //receives number and prints it
    std::cout <<"Enter a number: " << std::endl;
    int x;
    std::cin >> x;
    std::cout << "You entered: " << sizeof(x) << std::endl;
    if(x < num){
        std::cout <<"x is smaller than 5" << std::endl;
    }

    for(int i =0; i <10; i++){
        std::cout << pow(2,i) << " "   << std::endl;
    }


    Lambdas();
    return 0;
}

