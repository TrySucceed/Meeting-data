#include <iostream>
#include <fstream>
#include <strings>
class person
{
	int speaks;
	float totalSpeaking, percentageSpeaking, shortest, longest;
	string name;
int getSpeaks (void);
void setSpeaks (int temp);
float getTotalSpeaking (void);
void setTotalSpeaking (float temp);
float getPercentageSpeaking (void);
void setPercentageSpeaking (float temp);
float getShortest (void);
void setLongest (float temp);
string getName (void);
void setName (string temp);
}
