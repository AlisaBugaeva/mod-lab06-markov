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

	typedef deque<string> prefix; // ������� ���������
	map<prefix, vector<string> > statetab; // �������-��������
	deque<string> start;
	deque<string> next;
	int NPREF; // ���������� ���� � ��������
	int MAXGEN; //����� ������ �� ������
	int countWords=0;

	MarkovTextGenerator(int kolvo, int size);
	void readFromFile(string path);
	void generateNewText();
};