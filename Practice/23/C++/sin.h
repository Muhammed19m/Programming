#ifndef gg
#define gg


float sin(double x, int k){
	double res = 0;
	for (int n = 0; n<k;n++)
		res += pow(-1, n)*pow(x, 2*n+1)/factorial(2*n+1);	
	return res;
}
#endif
