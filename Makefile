OBJ_DIR = build/obj
OBJECTS = textmaze.o maze.o mazegen.o mazesolve.o helpers.o 
INCLUDES = -I./header

debug: $(OBJECTS)  
	cd $(OBJ_DIR) && gcc -o ../mazegen $(OBJECTS) 

maze.o: header/maze.h
	gcc -c $(INCLUDES) -x c -o $(OBJ_DIR)/maze.o header/maze.h

%.o: source/%.c
	gcc -c $(INCLUDES) -o $(OBJ_DIR)/$@ $<

%.o: %.c
	gcc -c $(INCLUDES) -o $(OBJ_DIR)/$@ $<
