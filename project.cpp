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

int sum(int *arr, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += arr[i];
    return s;
}
int tafrigh(int *arr, int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result -= arr[i];
    return result;
}
int mul(int *arr, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
        result *= arr[i];
    return result;
}

int main() {

    return 0;
}