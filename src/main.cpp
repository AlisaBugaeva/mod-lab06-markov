#include "textgen.h"

int main() {
	MarkovTextGenerator g = MarkovTextGenerator(2,1000);
	g.readFromFile("input.txt");
	g.generateNewText();

}