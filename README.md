# mazegen
An ASCII/Unicode maze generator and solver

# examples

▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▓ ▓       ▓███▓         ▓      ███▓     ▓
▓ ▓ ▓▓▓ ▓ ▓▓▓█▓ ▓▓▓▓▓▓▓ ▓ ▓▓▓▓▓█▓█▓▓▓ ▓▓▓
▓   ▓   ▓ ▓ ▓█▓ ▓   ▓   ▓   ▓███▓███▓   ▓
▓ ▓▓▓ ▓▓▓ ▓ ▓█▓ ▓ ▓ ▓ ▓ ▓ ▓▓▓█▓▓▓▓▓█▓▓▓ ▓
▓   ▓   ▓   ▓█▓   ▓ ▓ ▓ ▓ ▓███▓ ▓███▓   ▓
▓▓▓ ▓▓▓ ▓ ▓▓▓█▓ ▓▓▓▓▓ ▓▓▓ ▓█▓▓▓ ▓█▓▓▓ ▓ ▓
▓     ▓ ▓ ▓███▓ ▓███▓     ▓███▓ ▓█▓   ▓ ▓
▓ ▓▓▓▓▓ ▓ ▓█▓▓▓▓▓█▓█▓▓▓▓▓▓▓▓▓█▓ ▓█▓▓▓ ▓▓▓
▓ ▓     ▓ ▓███▓███▓███████████▓ ▓███▓   ▓
▓ ▓ ▓▓▓▓▓ ▓▓▓█▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ ▓▓▓█▓ ▓ ▓
▓ ▓   ▓     ▓███▓         ▓█████████▓ ▓ ▓
▓ ▓▓▓ ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ ▓ ▓█▓▓▓▓▓▓▓▓▓▓▓ ▓
▓   ▓                 ▓ ▓ ▓█▓█████████▓ ▓
▓▓▓ ▓▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓ ▓ ▓▓▓█▓█▓▓▓▓▓▓▓█▓ ▓
▓     ▓       ▓         ▓███▓█▓     ▓███▓
▓ ▓▓▓▓▓ ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ ▓█▓▓▓█▓ ▓ ▓ ▓▓▓█▓
▓   ▓   ▓         ▓   ▓ ▓█▓███▓ ▓ ▓ ▓███▓
▓▓▓ ▓ ▓▓▓ ▓▓▓▓▓▓▓ ▓ ▓ ▓▓▓█▓█▓▓▓ ▓ ▓▓▓█▓▓▓
▓   ▓           ▓   ▓    ███▓   ▓    ███▓
▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓

# usage

`Mazegen 1.0 by Travis Ziegler
Program to generate and solve ASCII/Unicode mazes

Usage:  mazegen [-d width height] [-r delay] [-s delay] [-p char] [-w char] [-s char] [-v iter] [-o]

Options: 
  -d <width> <height>	specify the maze dimensions
  -r			use the default realtime generation delay
  -r <delay>  		specify generation delay in milliseconds per iteration
  -s			instantly solve the maze after generation
  -s <delay>		specify solve draw delay in milliseconds per iteration
  -p <char>   		specify the path characer
  -w <char>   		specify the wall (background) character
  -f <char>		specify the solved path character after maze finished generation
  -o 			file output mode; output is formatted for file. Use &> operator
  -v <iter>		verbose mode; program is run <iter> times to calculate avg elapsed time

Example: 
  mazegen -d 40 20 -r -s 50 -w █ -p . 
`