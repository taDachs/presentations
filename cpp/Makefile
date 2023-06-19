presentation:
	latexmk -pdf presentation.tex -interaction=nonstopmode -shell-escape

examples:
	g++ code/examples/helloworld.cpp -o artifacts/helloworld
	g++ code/examples/types.cpp -o artifacts/types
	g++ code/examples/classes.cpp -o artifacts/classes
	g++ code/examples/structs.cpp -o artifacts/structs
	g++ code/examples/fizzbuzz.cpp -o artifacts/fizzbuzz
	g++ code/examples/functions.cpp -o artifacts/functions
	g++ code/examples/lib_main.cpp code/examples/lib.cpp -o artifacts/lib_main
	g++ code/examples/passbyvalue.cpp -o artifacts/passbyvalue

matrices:
	g++ code/matrices/main.cpp code/matrices/matrix.cpp -o artifacts/matrices
