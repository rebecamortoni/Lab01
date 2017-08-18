comp = g++
flags = -Wall -std=c++11 -pedantic -I./include/

all: init bin/questao1 bin/questao2 bin/questao3

init:	build/ bin/

build/:
	mkdir build

bin/:
	mkdir bin

bin/questao1:	build/calcula.o build/area.o build/volume.o build/perimetro.o build/q_01.o
	$(comp) $(flags) -o $@ build/calcula.o build/area.o build/volume.o build/perimetro.o build/q_01.o

build/calcula.o: src/calcula.cpp include/calcula.h
	$(comp) -c $(flags) -o $@ $<

build/area.o: src/area.cpp include/area.h
	$(comp) -c $(flags) -o $@ $<

build/volume.o: src/volume.cpp include/volume.h
	$(comp) -c $(flags) -o $@ $<

build/perimetro.o: src/perimetro.cpp include/perimetro.h
	$(comp) -c $(flags) -o $@ $<

build/q_01.o: src/q_01.cpp
	$(comp) -c $(flags) -o $@ $<





bin/questao2: build/fatorial.o build/primalidade.o build/q_02.o
	$(comp) $(flags) -o $@ build/fatorial.o build/primalidade.o build/q_02.o

build/fatorial.o: src/fatorial.cpp include/fatorial.h
	$(comp) -c $(flags) -o $@ $<	

build/primalidade.o: src/primalidade.cpp include/primalidade.h
	$(comp) -c $(flags) -o $@ $<

build/q_02.o: src/q_02.cpp
	$(comp) -c $(flags) -o $@ $<




	
bin/questao3: build/q_03.o
	$(comp) $(flags) -o $@ $<

build/q_03.o: src/q_03.cpp
	$(comp) -c $(flags) -o $@ $<

clean:
	rm -rf bin/*
	rm -rf build/*