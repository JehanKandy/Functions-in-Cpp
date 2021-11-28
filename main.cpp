#include <iostream>

using namespace std;

void myfunction1() // define function
{
    cout << "Hi This is the function ---> This is function 1 \n\n\n";
}
void func_total() // define function
{
    int n1, n2;
    n1 = 5;
    n2 = 5;
    cout << "Total is : " << n1 + n2 << "\n\n";
}

int main()
{

    myfunction1(); // call to the function
    func_total(); // call to the function
    return 0;
}
