#include "AREA.H"

void area_tri(float lado) {
    float area = ((pow(lado, 2))*sqrt(3))/4;
    std::cout << "A area do triangulo eh:" << area << std::endl;
}

void area_retan(float base, float altura) {
    float area = base*altura;
	std::cout << "A area do retângulo eh: " << area << std::endl;
}

void area_quad(float lado) {
    float area = pow(lado, 2);
    std::cout << "A area do quadrado eh: "<< area << std::endl;
}

void area_circ(float raio) {
    float area = 3.1415 *(raio * raio);
	std::cout << "A area do circulo eh:" << area << std::endl;
}

void area_pira(float aresta, float altura) {
    float faceq, facet, arestat; //aresta = aresta do quadrado, altura = altura da piramide, arestat = aresta do triangulo;
    faceq = pow(aresta, 2);
    arestat = sqrt((pow(altura, 2)+ 2*pow(aresta,2)));
    facet = (arestat*sqrt(3))/4;
    float area = facet + faceq;
    std::cout << "A area das faces da piramide eh: " << area << std::endl;
}

void area_cubo(float aresta) {
    float area = 6*aresta;
	std::cout << "A area do cubo eh: " << area << std::endl;
}

void area_para(float a1, float a2, float a3) {
    float area = (2*(a1*a2))+(2*(a1*a3)) + (2*(a2*a3));
    std::cout << "O valor da area do paralelepipedo eh: " << area << std::endl;
}

void area_esfera(float raio) {
    float area = 4*3.1415*raio;
	std::cout << "A area da esfera eh: " << area << std::endl;
}
