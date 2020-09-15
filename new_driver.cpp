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
	static int getEveryoneTime() {
		return everyoneTime;
	}
	int getPercentageTime();
	int getLongestTime();
	int getShortestTime();
	int getHowManyTimes();
	int getMedianTime();
	int getAverageTime();
	int getLengthOfName();
	void setTotalTime(int temp);
	static void setEveryoneTime(int temp) {
		everyoneTime = temp;
	}
	void setPercentageTime(int temp);
	void setLongestTime(int temp);
	void setShortestTime(int temp);
	void setHowManyTimes(int temp);
	void setMedianTime(int temp);
	void setAverageTime(int temp);
	void setLengthOfName(int temp);
	void displayIndividual(string filename);
};

class Overall {
private:
	float expectedMinutes;
	float actualMinutes;
	string name;
	float predictedMinutes;

public:	
	float getExpectedMinutes (void);
	float getActualMinuts (void);
	float getPredictedMinutes (void);
	string getName (void);

	void setExpectedMinutes (float temp);
	void setActualMinutes (float temp);
	void setPredictedMinutes (float temp);
	void setName (string temp);
	void displayOverall(string filename);
};

float toMinutes (int tempTotal[]);
float longestSpeak (float speakignTimes[]);
float averageSpeechLength (float speakingTimes[]);
float shortestSpeak (float speakignTimes[]);
float durationPercentageOver (float expectedDuration, float actualDuration);
	//both in seconds
float expectedValue (float historicalTimes[]);
	//this one is for the expected duration under group
/*
//I will assume you know or can ealsily get the nubmer of times spoken in main

//add any functions you think of for me to do.
*/

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
	for (int i = length + 1; lines[0][i] != '\0'; ) {
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
	std::cout << "Total minutes: " << toMinutes(tempTotal) << std::endl;
	fout.close();
	return 0;
}
	//inputs diffrent portions of the scnned time data and returns a flat of the time in minutes
float toMinutes (int tempTotal[])
{
	float minutes = tempTotal[0];
	minutes += ( float(tempTotal[1]) / 60);
	minutes += ( float(tempTotal[2]) / 6000);
	return minutes;
}
	//inputting a float array of time in minutes, this will return the verage of the dataset in a float.
float averageSpeechLength (float speakingTimes[])
{
	int i;
	float average=0;
	for(i=0; speakingTimes[i]!='\0'; i++)
	{
		average=+speakingTimes[i];
	}
	average=average/i;
	return average;
}
	//inputting a float array of time in minutes, this will return the largest value in that array in the form of a float.
float longestSpeak (float speakignTimes[])
{
	float longest=0;
	for(int i=0; speakingTimes[i]!='\0'; i++)
	{
		if (speakingTimes[i]>longest)
		{
			longest=speakingTimes[i];
		}
	}
	return longest;
}
	//inputting a float array of the time in minues, this will return the smallest value in the array in the form of a float.
float shortestSpeak (float speakignTimes[])
{
	float shortest=999999999999999;
	for(int i=0; speakingTimes[i]!='\0'; i++)
	{
		if(speakingTimes[i]<shortest)
		{
			shortest=speakingTimes;
		}
	}
	return shortest;
}
	//inputting a float of historical times from the historicalTimes array, this will return a float of the prediced lenth
	//this should be called after updating the historical text file
float expectedValue (float historicalTimes[])
{
	int i;
	float total=0, expectedValue;
	for(i=0; historicalTimes[i]!='\0'; i++)
	{
		total=historicalTimes[i]+total;
	}
	expectedValue=total/i;
	return expectedValue;
}
	//both inputs are in seconds
float durationPercentageOver (float expectedDuration, float actualDuration);


{
	return (expecedDuration/actualDuration)*100
}

//getters and setters for individuals
int Person::getTotalTime()
{
	return totalTime;
}
int Person::getPercentageTime()
{
	return percentageTime;
}
int Person::getLongestTime()
{
	return longestTime;
}
int Person::getShortestTime()
{
	return shortestTime;
}
int Person::getHowManyTimes()
{
	return howManyTimes;
}
int Person::getMedianTime()
{
	return medianTime;
}
int Person::getAverageTime()
{
	return averageTime;
}
int Person::getLengthOfName()
{
	return lengthOfName;
}
void Person::setTotalTime(int temp)
{
	totalTime=temp;
}

void Person::setPercentageTime(int temp)
{
	percentageTime=temp;
}
void Person::setLongestTime(int temp)
{
	longestTime=temp;
}
void Person::setShortestTime(int temp)
{
	shortestTime=temp;
}
void Person::setHowManyTimes(int temp)
{
	howManyTimes=temp;
}
void Person::setMedianTime(int temp)
{
	medianTime=temp;
}
void Person::setAverageTime(int temp)
{
	averageTime=temp;
}
void Person::setLengthOfName(int temp)
{
	lengthOfName=temp;
}
 	void displayIndividual(string filename)
{
	int Minutes;
	float Seconds;

	ofstream fout;
	ifstream fin;
	fin.open("individuals.txt");
	fout.open ("individuals.txt",ios::app);

	minues=totalTime;
	seconds=(totalTime-minutes)*60;
	fout << name << endl;
	fout << "Total speaking time: " << minutes << "minutes, " << seconds << " seconds." << endl;
	fout << name << "spoke " << percentageTime << "percent of the speaking time." << endl;
	minutes=longest;
	seconds=(longest-minutes)*60;
	fout << "Longest single speaking duration: " << minutes << " minutes, " << seconds << " seconds." << endl;
	minutes=shortest;
	seconds=(shortest-minutes)*60;
	fout << "Shortset single speaking duration: " << minutes << " minutes, " << seconds << " seconds."
	fout << name << " spoke " << howManyTimes << "times." << endl;
	minutes=averageTime;
	seconds=(averageTime-minutes)*60;
	fout << "Average duration of speeches: " << minutes << " minutes, " << seconds << " seconds." << endl << endl;
	
	fin.close();
	fout.close();
}

//getters and setters for overall
float getExpectedMinutes (void)
{
	return expectedMinutes;
}
float getActualMinuts (void)
{
	return actualMinutes;
}
float getPredictedMinutes (void)
{
	return predictedMinutes;
}
string getName (void)
{
	return name;
}
void setExpectedMinutes (float temp)
{
	expectedMinutes=temp;
}
void setActualMinutes (float temp)
{
	actualMinutes=temp;
}
void setPredictedMinutes (float temp)
{
	predictedMinutes=temp;
}
void setName (string temp)
{
	name=temp;
}
void displayOverall(string filename)
{
	int Minutes;
	float Seconds;

	ofstream fout;
	ifstream fin;
	fin.open("overall.txt");
	fout.open ("overall.txt",ios::app);

	minues=expectedMinutes;
	seconds=(expectedMinutes-minutes)*60;
	fout << name << "was froecasted to take " << minutes << " minutes, " << seconds << " seconds." << endl;
	minues=actualMinutes;
	seconds=(actualMinutes-minutes)*60;
	fout << "It took " << minutes << "minutes, " << seconds << "seconds." << endl;
	fout << "That is " << minutes << "percent over the expected time." << endl << endl;
	
	fin.close();
	fout.close();
}

