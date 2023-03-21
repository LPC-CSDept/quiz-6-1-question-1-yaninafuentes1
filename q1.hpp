#include <iostream>
#include <iomanip>

using namespace std;

void swapTwoValues(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapTwoValues(float f1, float f2) {
    float temp = f1;
    f1 = f2;
    f2 = temp;
}

void getinput(int& n1, int& n2) {
    cout << "Enter first integer: ";
    cin >> n1;
    cout << "Enter second integer: ";
    cin >> n2;
}

void getinput(float& f1, float& f2) {
    cout << "Enter first float: ";
    cin >> f1;
    cout << "Enter second float: ";
    cin >> f2;
}

int main() {
    int n1, n2;
    float f1, f2;
    
    cout << "Enter two integers: " << endl;
    getinput(n1, n2);
    swapTwoValues(n1, n2);
    cout << "Swapped integers: " << n1 << " " << n2 << endl;
    
    cout << "Enter two floats: " << endl;
    getinput(f1, f2);
    swapTwoValues(f1, f2);
    cout << fixed << setprecision(2);
    cout << "Swapped floats: " << f1 << " " << f2 << endl;
    
    return 0;
}
