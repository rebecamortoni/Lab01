#include <iostream>
#include <cmath>
#include <stdlib.h>
#define PI 3.1415

void triangulo();
void retangulo();
void quadrado();
void circulo();
void piramide();
void cubo();
void para();
void esfera();

int main() {
	
	int tipo;
	do {
		std::cout << "------------------------------------" << std::endl;
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
		std::cin >> tipo;
		if (tipo < 0 || tipo > 8) {
			std::cout << "Digite um numero entre 0 e 8!" << std::endl;
		}
		
		switch (tipo) {
			case 1:
				system("clear");
				triangulo();
				break;
			case 2:
				system("clear");
				retangulo();
				break;
			case 3:
				system("clear");
				quadrado();
				break;
			case 4:
				system("clear");
				circulo();
				break;
			case 5:
				system("clear");
				piramide();
				break;
			case 6:
				system("clear");
				cubo();
				break;
			case 7:
				system("clear");
				para();
				break;
			case 8:
				system("clear");
				esfera();
				break;
			case 0:
				std::cout << "Valeu!" << std::endl;
				return 0;
			}	
	}while (tipo > 0 && tipo < 9);

	return 0;
}

void triangulo(){
    float lado;
    float area;
    std::cout << "Informe o lado do triangulo equilatero: " << std::endl;
    std::cin >> lado;
    std::cout << "O perimetro do triangulo eh: " << 3*lado << std::endl;
    area = pow(lado, 2);
    std::cout << "A area do triangulo eh:" << (area*sqrt(3))/4 << std::endl;
}
	
void retangulo() {
	float base, altura;
	std::cout << "Informe a medida da base do retangulo: " << std::endl;
	std::cin >> base;
	std::cout << "Informe a medida da altura do retangulo: " << std::endl;
	std::cin >> altura;
	float area = base*altura;
	std::cout << "A area do retângulo eh: " << area << std::endl;
	float perimetro = (base + altura)*2;
	std::cout << "O perimeto do retangulo eh: " << perimetro << std::endl;
}	

void quadrado(){
    float lado;
    std::cout << "Informe o lado do quadrado: " << std::endl;
    std::cin >> lado;
    std::cout << "O perimetro do quadrado eh: "<< 4*lado << std::endl;
    std::cout << "A area do quadrado eh: "<< pow(lado, 2) << std::endl;
}

void circulo() {
	float raio;
	std::cout << "Informe a medida do raio do circulo: " << std::endl;
	std::cin >> raio;
	float area = PI *(raio * raio);
	std::cout << "A area do circulo eh:" << area << std::endl;
	float perimetro = 2*PI*raio;
	std::cout << "O perimetro do circulo eh: " << perimetro << std::endl;
}	

void piramide(){
    float aresta, altura, arestat; //aresta = aresta do quadrado, altura = altura da piramide, arestat = aresta do triangulo;
    float faceq, facet;
    std::cout << "Informe a aresta da base quadrangular: "<< std::endl;
    std::cin >> aresta;
    std::cout << "Informe a altura da piramide: " << std::endl;
    std::cin >> altura;

    faceq = pow(aresta, 2);
    arestat = sqrt((pow(altura, 2)+ 2*pow(aresta,2)));
    facet = (arestat*sqrt(3))/4;
    float area = facet + faceq;
    float volume = (faceq*altura)/3; 
    std::cout << "A area das faces da piramide eh: " << area << std::endl;
    std::cout << "O volume da piramide eh: " << volume << std::endl;
}

	
void cubo() {
	float aresta;
	std::cout << "Informe a medida da aresta do cubo: " << std::endl;
	std::cin >> aresta;
	float area = 6*aresta;
	std::cout << "A area do cubo eh: " << area << std::endl;
	float volume = pow(aresta, 3);
	std::cout << "O volume do cubo eh: " << volume << std::endl;
}

void para(){
    int a1, a2, a3;
    std::cout << "Informe o valor da aresta que indica altura: " << std::endl;
    std::cin >> a1;
    std::cout << "Informe o valor da aresta que indica largura: " << std::endl;
    std::cin >> a2;
    std::cout << "Informe o valor da aresta que indica profundidade: " << std::endl;
    std::cin >> a3;
    float area = (2*(a1*a2))+(2*(a1*a3)) + (2*(a2*a3));
    std::cout << "O valor da area do paralelepipedo eh: " << area << std::endl;
    float volume = a1*a2*a3;
    std::cout << "O Valor do volume do paralelepipedo eh: " << volume << std::endl;
}

	
void esfera() {
	float raio;
	std::cout << "Informe a medida do raio da esfera: " << std::endl;
	std::cin >> raio;
	float area = 4*PI*raio;
	std::cout << "A area da esfera eh: " << area << std::endl;
	float volume = 4/3 * (PI*(pow(raio, 3)));
	std::cout << "O volume da esfera eh: " << volume << std::endl;
}
	



	
	
