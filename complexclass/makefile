CC = g++
CFLAGS = -Wall -Werror -g

#final target
runComputer: runComputer.o computer.o 
	$(CC) $(CFLAGS) -o runComputer runComputer.o computer.o 

#object files
runComputer.o: runComputer.cpp computer.hpp
	$(CC) $(CFLAGS) -c runComputer.cpp
	$(CC) $(CFLAGS) -c computer.hpp

computer.o: computer.cpp computer.hpp
	$(CC) $(CFLAGS) -c computer.cpp
	$(CC) $(CFLAGS) -c computer.hpp
