#include "VOLUME.H"

void vol_pira(float aresta, float altura) {
    float faceq = pow(aresta, 2);
    float volume = (faceq*altura)/3;
    std::cout << "O volume da piramide eh: " << volume << std::endl;
 }

void vol_cubo(float aresta) {
    float volume = pow(aresta, 3);
	std::cout << "O volume do cubo eh: " << volume << std::endl;
}

void vol_para(float a1, float a2, float a3) {
    float volume = a1*a2*a3;
    std::cout << "O Valor do volume do paralelepipedo eh: " << volume << std::endl;
}

void vol_esfera(float raio) {
    float volume = 4/3 * (3.1415*(pow(raio, 3)));
	std::cout << "O volume da esfera eh: " << volume << std::endl;
}
