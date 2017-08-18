#include "PERIMETRO.H"

void perim_tri(float lado) {
    float perimetro = 3*lado;
    std::cout << "O perimetro do triangulo eh: " << perimetro << std::endl;
}

void perim_retan(float base, float altura) {
    float perimetro = (base + altura)*2;
	std::cout << "O perimeto do retangulo eh: " << perimetro << std::endl;
}

void perim_qua(float lado) {
    float perimetro = 4*lado;
    std::cout << "O perimetro do quadrado eh: " << perimetro << std::endl;
}

void perim_circ(float raio) {
    float perimetro = 2*3.1415*raio;
	std::cout << "O perimetro do circulo eh: " << perimetro << std::endl;
}

