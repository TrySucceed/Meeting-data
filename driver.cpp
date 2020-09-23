//Matthew Julio
//9-22-2020


#include <iostream>
#include <ctime>
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
	float averageTime;
	int lengthOfName;
	int speaks[MAX];
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
	void displayIndividual(void);
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
	void displayOverall(void);
};

float toMinutes (int tempTotal[]);
float longestSpeak (float speakignTimes[]);
float averageSpeechLength (float speakingTimes[]);
float shortestSpeak (float speakignTimes[]);
float durationPercentageOver (float expectedDuration, float actualDuration);
	//both in seconds
float expectedValue (float historicalTimes[]);

int main (void)
{
	time_t currentTime, pastTime, deltaT;
	Person particpants[MAX];
	string name;
	char stop, endChar, userInput;
	int i, minutes, numberOfParticipants=0, tempInt;
	bool newName;
	
	cout << "Meeting analyzer" << endl << "please input the appropriate input" << endl << "For individuals, input 1"  << "for overall, input 2" << "for historical, input 3";
	cin >> userInput;
	
	//inputting data
	switch(userInput) {
	case 1:
		cout << "Pick your teminiating character" << endl;
		cin >> endChar;
		do
		{
		minutes=0;
		pastTime=time(NULL);
		cout << "User input: ";
		cin >> name;
		newName=false;
		for(i=0; participants[i].getName!=name; i++)
		{
			name!=paticipants[i].getName
		}
		if(i=MAX)
		{
			newName=true;
			numberOfParticipants++;
		}
		if (newName=true)
		{
			name=paticipants[numberOfParticipants].setName;
		}
		currentTime=time(NULL);
		deltaT=difftime(currentTime,pastTime);
		tempInt=participants[i].getHowManyTimes();
		participants[i].setHowManyTimes(tempInt++);
		deltaT=participants[i].setSpeaks(participants[i].getHowManyTimes());
		} while (stop!=endChar);
		cout << "timer terminated." << endl;
		break;
	case 2:
		cout << "Recognized catagories: " << endl;
				cout << "Pick your teminiating character" << endl;
		cin >> endChar;
		do
		{
		minutes=0;
		pastTime=time(NULL);
		cout << "User input: ";
		cin >> stop;
		currentTime=time(NULL);
		deltaT=difftime(currentTime,pastTime);
		if(deltaT>60)
		{
			for(i=0; deltaT>60; i++)
			{
				minutes++;
				deltaT=deltaT-60;
			}
		}
		if (minutes<10)
		{
			cout << "0";
		}
			cout << minutes << ".";
		if (deltaT<10)
		{
			cout << "0";
		}
		cout << deltaT << ".00"<< endl;
		} while (stop!=endChar);
		cout << "timer terminated." << endl;
		break;
	}
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
Person::Person()
{
	int totalTime=0;
	static int everyoneTime=0;
	int percentageTime=0;
	int longestTime=0;
	int shortestTime=0;
	int howManyTimes=0;
	float averageTime=0;
	int lengthOfName=0;
	int speaks[MAX]=[0];
}

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
 	void displayIndividual(void)
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
void displayOverall(void)
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

