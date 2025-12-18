#include <iostream>
#include <cmath>
using namespace std;

void Start ()
{
    cout << "Please choose one of the following options:\n1. Simple Calculator\n2. Equation\n3. Advanced Calculator\n4. Exit\n";
}

void Error ()
{
    cout << "Invalid choice, please re-start the program.\n"; 
}

void SecondCaseMenu ()
{
    cout << "What type of equation do you want to solve?\n1. Linear (First Degree)\n2. Quadratic (Second Degree)\n";
}

void ThirdCaseMenu ()
{
    cout << "Please choose one of the following options:\n1. N Choose K\n2. Greatest Common Divisor\n3. Least Common Multiple\n";
}

void degreeone (double b, double c)
{
    double answer = -c / b;
    cout << answer << " ";
}

void degreetwo (double a, double b, double c)
{
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

int Factorial (int n)
{
    if (n == 2 || n == 1 || n == 0) return n;
    return n * Factorial(n - 1);
}

int C (int n, int k)
{
    return Factorial(n) / (Factorial(k) * Factorial(n - k));
}

int GCD (int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    if (a > b) return GCD(a % b, b);
    return GCD(a, b % a);
}

int LCM (int a, int b)
{
    return abs(a * b) / GCD(a, b); 
}

int main()
{
    cout << "Welcome!\n";
    short x;
    Start();
    cin >> x;
    const int MAX = 100000;
    switch (x)
    {
        case 1: //Simple Calc
        int nn;
        cout << "How many numbers?\n";
        cin >> nn;
        int ar[MAX];
        cout << "Enter " << nn << " numbers:\n";
        for (int i = 0; i < nn; i++) cin >> ar[i];
        cout << "Sum: " << sum(ar, nn) << endl << "Mult: " << mul(ar, nn) << endl << "Subtraction: " << tafrigh(ar, nn) << endl;
        break;
        case 2: //Equation
        SecondCaseMenu();
        short degree;
        cin >> degree;
        switch (degree)
        {
            case 1: //Linear (First Degree)
            cout << "ax + b = 0\n";
            float a, b;
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            degreeone(a, b);
            break;
            case 2: //Quadratic (Second Degree)
            cout << "ax^2 + bx + c = 0\n";
            float m, z, c;
            cout << "a = ";
            cin >> m;
            cout << "b = ";
            cin >> z;
            cout << "c = ";
            cin >> c;
            degreetwo(m, z, c);
            break;
            default: //Any other degrees
            Error();
            break;
        }
        break;
        case 3: //Advanced Calc
        short option;
        ThirdCaseMenu();
        cin >> option;
        switch (option)
        {
            case 1: // C (n, k)
            cout << "C(n, k)\n";
            int n, k;
            cout << "n = ";
            cin >> n;
            cout << "k = ";
            cin >> k;
            cout << "C(" << n << ", " << k << ") = " << C(n, k) << endl;
            break;
            case 2: //GCD
            cout << "(a, b)\n";
            int o, p;
            cout << "a = ";
            cin >> o;
            cout << "b = ";
            cin >> p;
            cout << "(" << o << ", " << p << ") = " << GCD(o, p) << endl;
            break;
            case 3: //LCM
            cout << "[a, b]\n";
            int l, h;
            cout << "a = ";
            cin >> l;
            cout << "b = ";
            cin >> h;
            cout << "[" << l << ", " << h << "] = " << LCM(l, h) << endl;
            break;
            default:
            Error();
            break;
        }
        case 4: //Exit
        break;
        default:
        Error();
        break;
    }
    return 0;
}