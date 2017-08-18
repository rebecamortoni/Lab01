#include "PRIMALIDADE.H"

int verificarPrimo(int n, int i){
	
	if(n<2 || !(n%i)) return -1;
	if(n==2 || i*i>=n) return 1;
	return verificarPrimo(n,++i);

}

int primo(int n){
	
	if(n == 1) return 1;
	if(n > 2 && verificarPrimo(n,2) == 1) return n;
	else return primo(n-1);
	
}