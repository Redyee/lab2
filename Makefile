lab2: main6.o LabBmi.o
	g++ -o lab2 main6.o LabBmi.o
LabBmi.o: LabBmi.cpp LabBmi.h
	g++ -c LabBmi.cpp
main6.o: main6.cpp LabBmi.h
	g++ -c main6.cpp
clean:
	rm LabBmi *.o

