#ODB.
objects  = test.o

headers  = Tracker.h
headers += Coll.h

options = 
options = -std=c++20

CC = g++

EXE = test

$(EXE):	$(objects) $(headers)
	$(CC) $(options)  -o $(EXE) $(objects)

%.o : %.cpp $(headers)
	$(CC) $(options)  -c -o $@ $<

clean :
	rm -f $(EXE) $(objects)
