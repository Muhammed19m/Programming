#ifndef SOCH_H
#define SOCH_H
#include "factorial.h" 
double soch(int k, int n){
	double ret = (factorial(n)/(factorial(k)*factorial(n-k)));
	return ret;
}
#endif
