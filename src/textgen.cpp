#include "textgen.h"

MarkovTextGenerator::MarkovTextGenerator(int kolvo, int size) {
	NPREF = kolvo;
	MAXGEN = size;
}
void MarkovTextGenerator::readFromFile(string path) {
	ifstream in(path);
	string str;
	for (int i = 0; i < NPREF; i++) {
		in >> str;
		next.push_back(str);
	}
	start = next;
	while (in >> str) {
		statetab[next].push_back(str);
		next.pop_front();
		next.push_back(str);
	}
	in.close();
}

void MarkovTextGenerator::generateNewText(){
	ofstream out("output.txt");
	for (int i = 0; i < NPREF; i++) {
		out << start[i] << " ";
	}
	map<prefix, vector<string> >::iterator it;
	next = start;
	string suff;
	srand(time(0));
	for (int i = 0; i < MAXGEN; i++) {
		it = statetab.find(next);
		if (it != statetab.end()) {
			suff = it->second[rand() % (it->second).size()];
			out << suff << " ";
			next.pop_front();
			next.push_back(suff);
			countWords++;
		}
		else
		 break;
	}

	
}