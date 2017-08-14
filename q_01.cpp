#include <iostream>

enum tipo {
	Triangulo Equilatero = 1;
	Retangulo;
	Quadrado;
	Circulo;
	Piramide com base quadrangular;
	Cubo;
	Paralelepipedo;
	Esfera;
	Sair = 0;
}

int main() {

	std::cout << "Calculadora Geométrica" << std::endl;
	std::cout << "1 -> Triangulo Equilatero" << std::endl;
	std::cout << "2 -> Retangulo" << std::endl;
	std::cout << "3 -> Quadrado" << std::endl;
	std::cout << "4 -> Circulo" << std::endl;
	std::cout << "5 -> Piramide com base quadrangular" << std::endl;
	std::cout << "6 -> Cubo" << std::endl;
	std::cout << "7 -> Paralelepipedo" << std::endl;
	std::cout << "8 -> Esfera" << std::endl;
	std::cout << "0 -> Sair" << std::endl;
	std::cout << "Digite sua opção:" << std::endl;
	std::cin >> enum tipo >> endl;
}
