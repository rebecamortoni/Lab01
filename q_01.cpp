#include <iostream>
#include "AREA.H"
#include "PERIMETRO.H"
#include "VOLUME.H"


	int main() {

        int tipo;
        do {
            std::cout << "------------------------------------" << std::endl;
            std::cout << "Calculadora Geometrica" << std::endl;
            std::cout << "1 -> Triangulo Equilatero" << std::endl;
            std::cout << "2 -> Retangulo" << std::endl;
            std::cout << "3 -> Quadrado" << std::endl;
            std::cout << "4 -> Circulo" << std::endl;
            std::cout << "5 -> Piramide com base quadrangular" << std::endl;
            std::cout << "6 -> Cubo" << std::endl;
            std::cout << "7 -> Paralelepipedo" << std::endl;
            std::cout << "8 -> Esfera" << std::endl;
            std::cout << "0 -> Sair" << std::endl;
            std::cout << "Digite sua opcao: " << std::endl;
            std::cin >> tipo;
            if (tipo < 0 || tipo > 8) {
			std::cout << "Opcao invalida!" << std::endl;
		}

		switch (tipo) {
			case 1:
				system("clear");
				float medida = ask_lado();
				void area_tri(medida);
				void perim_tri(medida);
				break;
			case 2:
				system("clear");
				float medida = ask_base();
				float medida2 = ask_altura();
				void area_retan(medida, medida2);
				void perim_retan(medida1, medida2);
				break;
			case 3:
				system("clear");
				float medida = ask_lado();
				void area_quad(medida);
				void perim_qua(medida);
				break;
			case 4:
				system("clear");
				float medida = ask_raio();
				void area_circ(medida);
				void perim_circ(medida);
				break;
			case 5:
				system("clear");
                float medida1 = ask_ares_pira();
                float medida2 = ask_alt_pira();
                void area_pira(medida1, medida2);
                void vol_pira(medida1, medida2);
				break;
			case 6:
				system("clear");
				float medida = ask_aresta();
				void area_cubo(medida);
                void vol_cubo(float aresta);
				break;
			case 7:
				system("clear");
				float medida1 = ask_a1();
				float medida2 = ask_a2();
				float medida3 = ask_a3();
				void area_para(medida1, medida2, medida3);
				void vol_para(medida1, medida2, medida3);
				break;
			case 8:
				system("clear");
				float medida = ask_raio();
				void area_esfera(medida);
                void vol_esfera(medida);
				break;
			case 0:
				std::cout << "Valeu!" << std::endl;
				return 0;
			}
	}while (tipo > 0 && tipo < 9);

	return 0;
}
