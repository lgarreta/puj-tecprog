CC=g++
CFLAGS=-pthread

DEPS = colap.h proceso.h unidadp.h
OBJ = maincolap.cpp colap.cpp proceso.cpp unidadp.cpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

colap.exe: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ 

clean:
	rm -f *.o *~ core  

