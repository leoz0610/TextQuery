#include<iostream>

using namespace std;

int main() {
    int a(1), b(2);
    auto c(a + b);

    cout << "hello " << c << endl;
    
    return 0;
}
