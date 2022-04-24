#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<deque>
#include<string>
#include<ctime>

using namespace std;

class MarkovTextGenerator{
public:

	typedef deque<string> prefix; // очередь префиксов
	map<prefix, vector<string> > statetab; // префикс-суффиксы
	deque<string> start;
	deque<string> next;
	int NPREF; // количество слов в префиксе
	int MAXGEN; //объем текста на выходе
	int countWords=0;

	MarkovTextGenerator(int kolvo, int size);
	void readFromFile(string path);
	void generateNewText();
};