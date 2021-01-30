program: main.cpp Sensor.o
	g++ -o $@ main.cpp Sensor.o

Sensor.o: sensor.cpp
	g++ -o $@ -c Sensor.cpp

clean:
	rm -rf *.o
	rm -rf program

cleandata:
	rm -rf *.dat