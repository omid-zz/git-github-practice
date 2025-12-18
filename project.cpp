#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void degreeone(double b, double c) {
    double answer = -c / b;
    cout << answer << " ";
}

void degreetwo(double a, double b, double c) {
    double answer1, answer2;
    double delta = b * b - 4 * a * c;
    if(delta < 0) {
        cout << "No answer." << "\n";
    }
    else if(delta == 0) {
        answer1 = -b / (2  * a);
        cout << answer1;
    }
    else if(delta > 0) {
        answer1 = (-b + sqrt(delta)) / (2 * a);
        answer2 = (-b - sqrt(delta)) / (2 * a);
        cout << answer1 << " " << answer2 << "\n";
    }
}

int main() {

    return 0;
}