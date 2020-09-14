#include <iostream>
#include <ctime>

using namespace std;

int main (void)
{
	time_t currentTime, pastTime, deltaT;
	char stop, endChar;
	int i, minutes;
	cout << "Pick your end character" << endl;
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
}


