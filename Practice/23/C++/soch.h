#ifndef soch
#define soch

int soch(int n, int k) {
	int ret = (factorial(n)/(factorial(k)*factorial(n-k)));
	return ret;
}
#endif
