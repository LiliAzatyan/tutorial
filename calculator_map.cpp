#include <iostream>
#include <map>
int sub(int num1, int num2);
int divi(int num1, int num2);
int mul(int num1, int num2);
int add(int num1, int num2);

int main()
{
    std::map<char,int(*)(int,int)>M;
    int num1 = 0;
    int num2 = 0;
    char op;
    std::cout << "Please enter the first number: ";
    std::cin >> num1;
    std::cout << "Please enter the aritmethic operator: ";
    std::cin >> op;
    std::cout << "Please enter the second number: ";
    std::cin >> num2;
    M['-'] = &sub;
    M['/'] = &divi;
    M['*'] = &mul;
    M['+'] = &add;
    std::cout << "Result = " << M[op](num1,num2) << std::endl;

}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int divi(int num1, int num2)
{
     return num1 / num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
int add(int num1, int num2)
{
    return num1 + num2;
}