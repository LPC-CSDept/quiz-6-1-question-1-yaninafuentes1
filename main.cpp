#include "q1.hpp"

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
    
}
