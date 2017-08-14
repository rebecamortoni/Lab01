#include <iostream>
#include <cmath>
#define PI = 3,1415;
//enum tipo {
//	Triangulo Equilatero = 1,
//	Retangulo,
///	Quadrado,
//	Circulo,
//	Piramide com base quadrangular,
//	Cubo,
//	Paralelepipedo,
//	Esfera,
//	Sair = 0
//}

int main() {
	
	int tipo;
	do {
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
		std::cout << "Digite sua opção: " << std::endl;
		std::cin >> tipo >> endl; 
		
		switch (tipo) {
			case 1:
				system("cls");
				triangulo();
				system("cls");
				break;
			case 2:
				system("cls");
				retangulo();
				system("cls");
				break;
			case 3:
				system("cls");
				quadrado();
				system("cls");
				break;
			case 4:
				system("cls");
				circulo();
				system("cls");
				break;
			case 5:
				system("cls");
				piramide();
				system("cls");
				break;
			case 6:
				system("cls");
				cubo();
				system("cls");
				break;
			case 7:
				system("cls");
				paralelepipedo();
				system("cls");
				break;
			case 8:
				system("cls");
				esfera();
				system("cls");
				break;
			case 0:
				std::cout << "Valeu!" << std::endl;
				return 0;
				
	} while (tipo < 0 && tipo < 9)
}
	
void retangulo() {
	float base, altura;
	std::cout << "Informe a medida da base do retangulo: " << std::endl;
	std::cin >> base >> std::endl;
	std::cout << "Informe a medida da altura do retangulo: " << std::endl;
	std::cin >> altura >> std::endl;
	float area = base*altura;
	std::cout << "A area do retângulo eh: " << area << std::endl;
	float perimetro = (base + altura)*2;
	std::cout << "O perimeto do retangulo eh: " << perimetro << std::endl;
	system("pause");
}

void circulo() {
	float raio;
	std::cout << "Informe a medida do raio do circulo: " << std::endl;
	std::cin >> raio >> std::endl;
	float area = PI*(pow(raio,2));
	std::cout << "A area do circulo eh:" << area << std::endl;
	float perimetro = 2*PI*raio;
	std::cout << "O perimetro do circulo eh: " << perimetro << std::endl;
	system("pause");
	
void cubo() {
	float aresta;
	std::cout << "Informe a medida da aresta do cubo: " << std::endl;
	std::cin >> aresta >> std::endl;
	float area = 6*aresta;
	std::cout << "A area do cubo eh: " << area << std::endl;
	float volume = pow(aresta, 3);
	std::cout << "O volume do cubo eh: " << volume << std::endl;
	system("pause");
	
void esfera() {
	float raio;
	std::cout << "Informe a medida do raio da esfera: " << std::endl;
	std::cin >> raio >> std::endl;
	float area = 4*PI*raio;
	std::cout << "A area da esfera eh: " << area << std::endl;
	float volume = 4/3 * (PI*(pow(raio, 3)));
	std::cout << "O volume da esfera eh: " << volume << std::endl;
	system("pause");
}
	
	
	
	
