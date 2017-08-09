OBJS = src/main.cpp src/InputHandler.cpp src/Graphics.cpp src/Game.cpp src/Sprite.cpp src/Player.cpp

CC = g++

COMPILER_FLAGS = -w

LINKER_FLAGS = -lSDL2

OBJ_NAME = geimu

all : $(OBJS) 
	$(CC) $(OBJS) $(COMPILER) $(LINKER_FLAGS) -o $(OBJ_NAME)
