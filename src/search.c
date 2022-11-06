#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{

	//Hvis n > 0 og a[n-1] == x, er tallet fundet
	if(n > 0 && a[n-1] == x){
		return true;
	}else if(n > 0 && a[n-1] != x){
		//Hvis n > 0 og a[n-1] != x, er tallet ikke fundet endnu og n går en gang ned
		search(a, n-1, x);
	}else if(n == 0){
		//Hvis n == 0, findes der ikke noget array og der kan ikke blive søgt efter et tal
		return false;
	}


}
