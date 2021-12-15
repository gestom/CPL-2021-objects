bin: CVector main 
	g++ CVector.o main.o -o main

CVector: CVector.cpp
	g++ -c CVector.cpp -o CVector.o

main: main.cpp CVector
	g++ -c main.cpp -o main.o

clean:
	rm main *.o
