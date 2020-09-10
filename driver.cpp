//Matthew Julio
//This will compile and call the needed functions to put the summerized data into a file
//9-9-2020

#include "individuals.h"
#include "overall.h"
#include "historical.h"

#define MAX 80

using namespace std;

int scanIndividual (individual people[], string fileName, float personDataMinutes[]);
float totalTime (float personDataTime[], int index, int terms);
float shortest (float personDataTime[], int index, int terms);
float longest (float personDataTime[], int index, int terms);
float percentageSpeaking (float totalSpeaking, float individualTotalSpeaking);

int main (arc, *arv[])
{
	float tempFloat, personDataMinutes;
	int tempInt;
	string tempString;
	individual people[MAX];
	group part[MAX];
	if(argc!=2)
	{
		cout << "error: improper use" << endl << "Peoper use:" << endl << "./meetingData Individual.txt Overall.txt" << endl;
		return 0,
	}
	scanIndividual(people[], argv[1], personDataMinutes);
}

int scanIndividual (individual people[], string fileName, float personDataMinutes[])
{
	int i=0, j;
	float totalTime, tempFloat;
	string tempString;
	ifstream fin;
	fin.open(fileName);
	if(!fin)
	{
		cout << "Sorry, could not open " << fileName << " for reading." << endl;
		return 0;
	}

	for(j=0; personDataMinutes[i]!='\0'; j++)
	{
		fin >> tempString;
		people[j].setName(tempString);

		i=0
		while(fin!='\n')
		{
			fin >> personDataMinutes[i];
			i++;
		}
		totalTime=totalMilliseconds=totalTime(personDataMinutes[], j, i);
		peole[j].setTotalSpeaking(totalTime);
		tempFloat=shortest(personDataMinutes[], j, i);
		peole[j].setShortest(tempFloat);
		tempFloat=longest(personDataMinutes[], j, i);
		peole[j].setLongest(tempFloat);
	}
	
	fin.close();
	return i-1;
}

float totalTime (float personDataTime[], int index, int terms)
{
	float temp=0;
	for(int i=0; i<=terms; i++)
	{
		temp=temp+personDataTime[i];
	}
	return temp;
}

float shortest (float personDataTime[], int index, int terms)
{
	float shortest=0;
	for(int i=0; i<=terms; i++)
	{
		if(personDataTime[i]<shortest)
		{
			shortest=personDataTime[i];
		}
	}
	return shortest;
}

float longest (float personDataTime[], int index, int terms)
{
	float longest=0;
	for(int i=0; i<=terms; i++)
	{
		if(personDataTime[i]>greatest)
		{
			greatest=personDataTime[i];
		}
	}
	return greatest;
}

float percentageSpeaking (float totalSpeaking, float individualTotalSpeaking)
{
	return (totalSpeaking/individualTotalSpeaking)*100;
}


