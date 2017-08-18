#include <iostream>

#include "AREA.H"
#include "PERIMETRO.H"
#include "VOLUME.H"
#include "CALCULA.H"


	int main() {

        int tipo;
        do {
            std::cout << "------------------------------------" << std::endl;
            std::cout << "Calculadora Geométrica" << std::endl;
            std::cout << "1 -> Triângulo Equilátero" << std::endl;
            std::cout << "2 -> Retângulo" << std::endl;
            std::cout << "3 -> Quadrado" << std::endl;
            std::cout << "4 -> Círculo" << std::endl;
            std::cout << "5 -> Pirâmide com base quadrangular" << std::endl;
            std::cout << "6 -> Cubo" << std::endl;
            std::cout << "7 -> Paralelepípedo" << std::endl;
            std::cout << "8 -> Esfera" << std::endl;
            std::cout << "0 -> Sair" << std::endl;
            std::cout << "Digite sua opção: " << std::endl;
            std::cin >> tipo;
            if (tipo < 0 || tipo > 8) {
			std::cout << "Opção inválida!" << std::endl;
		}

		float medida;
		float medida1;
		float medida2;
		float medida3;

		switch (tipo) {
			case 1:
				system("clear");
				medida = ask_lado();
				area_tri(medida);
				perim_tri(medida);
				break;
			case 2:
				system("clear");
				medida1 = ask_base();
				medida2 = ask_altura();
				area_retan(medida1, medida2);
				perim_retan(medida1, medida2);
				break;
			case 3:
				system("clear");
				medida = ask_lado();
				area_quad(medida);
				perim_qua(medida);
				break;
			case 4:
				system("clear");
				medida = ask_raio();
				area_circ(medida);
				perim_circ(medida);
				break;
			case 5:
				system("clear");
                medida1 = ask_ares_pira();
                medida2 = ask_alt_pira();
                area_pira(medida1, medida2);
                vol_pira(medida1, medida2);
				break;
			case 6:
				system("clear");
				medida = ask_aresta();
				area_cubo(medida);
                vol_cubo(medida);
				break;
			case 7:
				system("clear");
				medida1 = ask_a1();
				medida2 = ask_a2();
				medida3 = ask_a3();
				area_para(medida1, medida2, medida3);
				vol_para(medida1, medida2, medida3);
				break;
			case 8:
				system("clear");
				medida = ask_raio();
				area_esfera(medida);
                vol_esfera(medida);
				break;
			case 0:
				std::cout << "Valeu!" << std::endl;
				return 0;
			}
	} while (tipo > 0 && tipo < 9);

	return 0;
}
