all: link

CC = g++
CCFLG = -std=c++11
DBGFLG = -g

SRC += textquery.m.cpp

OBJ += textquery.m.o

TSK = textquery.tsk

compile:
	$(CC) $(CCFLG) -c $(SRC)

link: compile
	$(CC) $(CCFLG) -o $(TSK) $(OBJ)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ) $(TSK)

debug: clean
	$(CC) $(CCFLG) -g $(SRC) -o $(TSK)

run:
	./$(TSK)