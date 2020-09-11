//Matthew Julio
//This will compile and call the needed functions to put the summerized data into a file
//9-9-2020

#include <iostream>
#include <fstream>
#include <string>


#define MAX 800

using namespace std;

class Person {
private:
	int totalTime;
	static int everyoneTime;
	int percentageTime;
	int longestTime;
	int shortestTime;
	int howManyTimes;
	int medianTime;
	int averageTime;
	int lengthOfName;
public:
	int getTotalTime();
	int getEveryoneTime();
	int getPercentageTime();
	int getLongestTime();
	int getShortestTime();
	int getHowManyTimes();
	int getMedianTime();
	int getAverageTime();
	int getLengthOfName();
	void setTotalTime(int);
	void s_setEveryoneTime(int);
	void setPercentageTime(int);
	void setLongestTime(int);
	void setShortestTIme(int);
	void setHowManyTimes(int);
	void setMedianTime(int);
	void setAverageTime(int);
	void setLengthOfName(int);
};

int main (int argc, char** argv) {
	string lines[MAX];
	int size = 0;
	//check for proper use
	if (argc != 2)
	{
		cout << "Error: improper use" << endl << "Proper use:" << endl;
		cout << "./meetingData Individual.txt Overall.txt Historical.txt" << endl;
		return 1;
	}

	//check for files
	std::ifstream fin;
	fin.open(argv[1]);
	//Validate file
	if (!fin.is_open()) {
		std::cout << "Sorry, could not open " << argv[1];
		std::cout << " for reading." << std::endl;
		fin.close();
		return 0;
	}
	//Record words & update size
	for (int i = 0; !fin.eof(); ++i) {
		std::getline(fin, lines[i]);
		++size;
	}
	//Close file
	fin.close();
	for (int i = 0; i < size; ++i) {
		cout << lines[i] << endl;
	}
	std::cout << size << endl;
	//Return number of recorded words

	//sampleOutIndividual.txt
	std::ofstream fout;
	int length = 0;
	fout.open("IndividualOut.txt");
	for (int i = 0; lines[0][i] != ' '; ++i) {
		fout << lines[0][i];
		++length;
	}
	fout << endl;

	fout << "Total speaking time: ";
	cout << length << endl;

	int tempTotal[3] = {0,0,0};
	cout << 1 << endl;
	for (int i = length + 1; lines[0][i] != '\n'; ) {
		cout << 2 << endl;
		tempTotal[0] += (10 * (lines[0][i] - '0'));
		cout << 3 << endl;
		++i;
		cout << 4 << endl;
		tempTotal[0] += (lines[0][i] - '0');
		cout << 5 << endl;
		++i; ++i;
		cout << 6 << endl;
		tempTotal[1] += (10 * (lines[0][i] - '0'));
		++i;
		cout << 7 << endl;
		tempTotal[1] += (lines[0][i] - '0');
		cout << 8 << endl;
		++i; ++i;
		cout << 9 << endl;
		tempTotal[2] += (10 * (lines[0][i] - '0'));
		cout << 10 << endl;
		++i;
		cout << 11 << endl;
		tempTotal[2] += (lines[0][i] - '0');
		cout << 12 << endl;
		cout << 13 << endl;
		++i; ++i;
		cout << 14 << endl;
	}
	std::cout << tempTotal[0] << "." << tempTotal[1] << "." << tempTotal[2] << endl;
	fout.close();
	return 0;
}

int Person::getTotalTime(){}
int Person::getEveryoneTime(){}
int Person::getPercentageTime(){}
int Person::getLongestTime(){}
int Person::getShortestTime(){}
int Person::getHowManyTimes(){}
int Person::getMedianTime(){}
int Person::getAverageTime(){}
int Person::getLengthOfName(){}
void Person::setTotalTime(int){}
void Person::s_setEveryoneTime(int){}
void Person::setPercentageTime(int){}
void Person::setLongestTime(int){}
void Person::setShortestTIme(int){}
void Person::setHowManyTimes(int){}
void Person::setMedianTime(int){}
void Person::setAverageTime(int){}
void Person::setLengthOfName(int){}