CC = g++
CFLAGS = -Wall -Werror -g

#Final target
runshapes: runshapes.o shapes.o
	$CC $CFLAGS -o runshapes runshapes.o shapes.o

#Object files
runshapes.o: runshapes.cpp shapes.hpp
	$CC $CFLAGS -c runshapes.cpp
	$CC $CFLAGS -c shapes.hpp

shapes.o: shapes.hpp
	$CC $CFLAGS -c shapes.hpp
