#include <iostream>
using namespace std;


double bmi(double weight, double height) {
    float bmi = weight/(height*height);
    return bmi;
}
void print_bmi(double bmi){
    if (bmi < 18.5) cout << "Underweight";
    else if (bmi >= 18.5 && bmi <= 25.0) cout << "Normal weight";
    else if (bmi >= 25.0 && bmi < 30.0) cout << "Overweight";
    else cout << "Obesity";
}

int main()
{
    double w, h;
    cin >> w >> h;

    print_bmi(bmi(w, h/100.0));
}