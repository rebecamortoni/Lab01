#include <iostream>
#include <cstdlib>

#include "PRIMALIDADE.H"
#include "FATORIAL.H"


int main (int argc, char* argv[]) {
	
	int n, fat;

	n = atoi(argv[1]);

	system("cls");
	

	if(n < 2) {
		std::cout << "Opção inválida!! Informe um número maior que 1!"<< std::endl;
	}
	else {
		
		fat = fatorial(n);
		std::cout << "O maior número primo anterior ao fatorial de " << n << "(" << fat << ") é: " << primo(fat-1) << std::endl;
	}
}