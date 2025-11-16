#ODB.
objects  = test.o
objects  += electronconfigs.o
objects  += Element_c.o

headers  = Tracker.h
headers += electronconfigs.h
headers += Element_c.h
headers += Coll.h

options = 
options = -std=c++20

CC = g++

EXE = test

$(EXE):	$(objects) $(headers)
	$(CC) $(options)  -o $(EXE) $(objects)
	./$(EXE) 0 1 2 3 4 5 6 > out2.txt

%.o : %.cpp $(headers)
	$(CC) $(options)  -c -o $@ $<

clean :
	rm -f $(EXE) $(objects)
