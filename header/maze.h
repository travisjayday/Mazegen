
//
//	file: header/maze.h
// 

#ifndef __MAZE_H_
#define __MAZE_H_

// abstraction to hold maze data; this represents a maze
typedef struct {
	int rows; 			// default vertical size of maze in characters
	int cols;			// default horizontal size of maze in characters
	int delay; 			// delay between iterations of generating algorithm
	int solv_delay;		// delay between iterations of solving algorithm
	char solving;		// set to 1 if no args were provided 
	const char* wallc;	// character for wall, ex: "█\0";// "█"; //" "; 
	const char* pathc;	// character for path, ex: "░\0";
	const char* solvc;	// character for solving path, ex: "░";
	char fileout; 		// true if writing to file. If writing to file, skip formatting (clearing) output
	const char*** array;// structure for holding maze
	char verbose;		// if true, runs program v iterations and gets average time per run
	int endx;			// end position (for solving)			
	int endy;			
	int startx;			// start position (generated randomly, needed for solving) 
	int starty;  
} Maze;

Maze mz; 				// definition of args


#endif
