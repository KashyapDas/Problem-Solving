// factorial of a number using Recursion
#include<iostream>
using namespace std;

int factorial(int fact)
{
    if(fact==1) return 1;
    int total = fact * factorial(fact-1);
    return total;
}

int main()
{
    int fact;
    cout<<"Enter the numeber you want to find the factorial : "<<" ";
    cin>>fact;
    if(fact<0) cout<<"Couldn't find the factorial...Enter a valid number"<<endl;
    int final = factorial(fact);
    cout<<"The factorial of a number is "<<final<<endl;
    return 0;
}