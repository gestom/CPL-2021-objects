bin: CVector CCylinder main 
	g++ CVector.o CCylinder.o main.o -o main

CVector: CVector.cpp
	g++ -c CVector.cpp -o CVector.o

CCylinder: CCylinder.cpp
	g++ -c CCylinder.cpp -o CCylinder.o

main: main.cpp CVector CCylinder
	g++ -c main.cpp -o main.o

clean:
	rm main *.o
