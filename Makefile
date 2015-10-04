CC = g++
CFLAGS = -std=c++0x -Wall 
OBJECTS = main.o Cell.o CellOwnedStates.o 

FSM: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o FSM

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm FSM *.o  

#target: dependencies
#	system command
