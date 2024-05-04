#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    float x1, x2;
    
    cout << "The program calculates the roots of a quadratic equation ax2 + bx + c = 0." << endl;
    cout << "Provide a: ";
    cin >> a;
    cout << "Provide b: ";
    cin >> b;
    cout << "Provide c: ";
    cin >> c;
    
    float delta = b * b - 4 * a * c;
    
    if (delta == 0) {
        x1 = -b / (2*a);
        cout << "The equation has one double root: " << fixed << setprecision(2) << x1 << endl;
    } else if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "The roots of the equation are: " << fixed << setprecision(2) << x1 << " i " << x2 << endl;
    } else {
        cout << "The equation has no real roots." << endl;
    }
    
    return 0;
}
