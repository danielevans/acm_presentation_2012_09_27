.SUFFIXES:
.SUFFIXES: .in .out .cpp

PROBLEM=permutation
CASES=$(patsubst %.in,%.out,$(wildcard *.in))

all: solution $(CASES)

solution: $(PROBLEM).cpp
	g++ -o $(PROBLEM) $(PROBLEM).cpp

%.out: %.in solution
	cat $< | ./$(PROBLEM) > $@
	-diff $@.correct $@ > /dev/null