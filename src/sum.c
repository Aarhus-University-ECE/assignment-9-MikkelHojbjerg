#include "sum.h"
#include <stdio.h>


int sum(int a[], int n){

	int res;

	if(n == 0){
		//Hvis længden på arrayet er 0, vil summen altid være nul
		return 0;
	}else{
		//For hver gang sum bliver kald går n ned med 1, indtil den rammer nul og koden ved arrayet er tomt
		res = a[n-1] + sum(a, n-1);
		return res;
	}

}
