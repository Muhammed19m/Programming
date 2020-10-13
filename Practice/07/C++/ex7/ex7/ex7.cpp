#include<iostream>
#include<cmath>
using namespace std;



int main() {
	setlocale(LC_ALL, "Rus");
	cout <<"Выберите способ: 1 - через длинны сторон, 2 - через кординаты вершин A, B, C: ";
	int sp; float S;
	S = 0;
	cin >> sp;
	if (sp == 1) {
		float a, b, c;
		cin >> a >> b >> c;
		if (a>0 && b>0 && c>0 && c<(a+b)&&a<(b+c)&&b<(c+a)) {
			float p;
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));

		}
	else if (sp == 2) {
			float Ax, Ay, Bx, By, Cx, Cy;
			cin >> Ax >> Ay;
			cin >> Bx >> By;
			cin >> Cx >> Cy;
			a = sqrt(pow((Bx - Ax), 2) + pow((By-Ay), 2));
			b = sqrt(pow((Cx - Ax), 2) + pow(Cy-Ay, 2));
			c = sqrt(pow((Bx - Cx), 2) + pow(By-Ay, 2));
			if (a > 0 && b > 0 && c > 0 && c < (a + b) && a < (b + c) && b < (c + a)) {
				float p;
				p = (a + b + c) / 2;
				S = sqrt(p * (p - a) * (p - b) * (p - c));
			}
		}
		if (S > 0) { cout << "S = " << S; }
		else{ cout << "Не коректные данные"; }

	}













}