//Matthew Julio
//This will compile and call the needed functions to put the summerized data into a file
//9-9-2020

#include <iostream>
#include <fstream>
#include <string>


#define MAX 80

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
	for (int i = length + 1; lines[0][i] != '\n'; ) {
		tempTotal[0] += (10 * (lines[0][i] - '0'));
		++i;
		tempTotal[0] += (lines[0][i] - '0');
		++i; ++i;
		tempTotal[1] += (10 * (lines[0][i] - '0'));
		++i;
		tempTotal[1] += (lines[0][i] - '0');
		++i; ++i;
		tempTotal[2] += (10 * (lines[0][i] - '0'));
		++i;
		tempTotal[2] += (lines[0][i] - '0');
		++i;
		if (lines[0][i] != '\n')
			++i;
		else continue;
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