OBJS = src/main.cpp

CC = g++

COMPILER_FLAGS = -w

LINKER_FLAGS = -lSDL2

OBJ_NAME = geimu

all : $(OBJS) 
	$(CC) $(OBJS) $(COMPILER) $(LINKER_FLAGS) -o $(OBJ_NAME)
