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
	int tempInt, Continue;
	string tempString;
	individual people[MAX];
	group part[MAX];

	//checking for proper use
	if(argc!=2)
	{
		cout << "error: improper use" << endl << "Peoper use:" << endl << "./meetingData Individual.txt Overall.txt" << endl;
		return 0,
	}
	//scan information into verriables.  Will also call needed functions.
	Continue=scanIndividual(people[], argv[1], personDataMinutes);
	if (Continue==0)
	{
		return 0;
	}
}

int scanIndividual (individual people[], string fileName, float personDataMinutes[])
{
	int i=0, j;
	float totalTime, tempFloat;
	string tempString;

	ifstream fin;
	fin.open(fileName);

	//checking for opening file
	if(!fin)
	{
		cout << "Sorry, could not open " << fileName << " for reading." << endl;
		return 0;
	}
	
	for(j=0; personDataMinutes[i]!='\0'; j++)
	{
		fin >> tempString;
		people[j].setName(tempString);

		//reading the individual data into an array for procewssing by other functions
		i=0
		while(fin!='\n')
		{
			fin >> personDataMinutes[i];
			i++;
		}
		//total time speant speaking
		totalTime=totalMilliseconds=totalTime(personDataMinutes[], j, i);
		peole[j].setTotalSpeaking(totalTime);
		//shortest speaking duation
		tempFloat=shortest(personDataMinutes[], j, i);
		peole[j].setShortest(tempFloat);
		//longest speaking duration
		tempFloat=longest(personDataMinutes[], j, i);
		peole[j].setLongest(tempFloat);
	}
	
	fin.close();
	return i-1;
}

//sums up time spent speaking
float totalTime (float personDataTime[], int index, int terms)
{
	float temp=0;
	for(int i=0; i<=terms; i++)
	{
		temp=temp+personDataTime[i];
	}
	return temp;
}

//checks for the sortest tiem spent speaking
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

//checks for the longest time spent speaking
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

//will return the percentage of the total time that the person spent speaking
float percentageSpeaking (float totalSpeaking, float individualTotalSpeaking)
{
	return (totalSpeaking/individualTotalSpeaking)*100;
}
