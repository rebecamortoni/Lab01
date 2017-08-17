#include "CALCULA.H"

float ask_lado() {
    float lado;
    std::cout << "Informe a medida do lado: " << std::endl;
    std::cin >> lado;
    return lado;
}

float ask_base(){
    float base;
    std::cout << "Informe a medida da base: " << std::endl;
	std::cin >> base;
	return base;
}

float ask_altura(){
    float altura;
    std::cout << "Informe a medida da altura: " << std::endl;
	std::cin >> altura;
	return altura;
}

float ask_raio () {
    float raio;
    std::cout << "Informe a medida do raio do circulo: " << std::endl;
	std::cin >> raio;
	return raio;
}

float ask_ares_pira (){
    float aresta;
    std::cout << "Informe a aresta da base quadrangular: "<< std::endl;
    std::cin >> aresta;
}

float ask_alt_pira() {
    float altura;
    std::cout << "Informe a altura da piramide: " << std::endl;
    std::cin >> altura;
    return altura;
}

float ask_aresta () {
    float aresta;
	std::cout << "Informe a medida da aresta do cubo: " << std::endl;
	std::cin >> aresta;
	return aresta;
}

float ask_a1 () {
    int a1tura;
    std::cout << "Informe o valor da aresta que indica altura: " << std::endl;
    std::cin >> a1tura;
    return a1tura;
}

float ask_a2 () {
    int a2;
    std::cout << "Informe o valor da aresta que indica largura: " << std::endl;
    std::cin >> a2;
    return a2;
}

float ask_a3 () {
    int a3;
    std::cout << "Informe o valor da aresta que indica profundidade: " << std::endl;
    std::cin >> a3;
    return a3;
}


