#include"sensor.hpp"
#include<iostream>

using namespace std;

		/*
		Run any of these commands below:
		./program --sensoronly --sampleTime 200 --precisionBits 2 --numberOfSimulatedSamples 3
		./program --sensoronly --numberOfSimulatedSamples 4 --sampleTime 100 --precisionBits 5
		./program
		*/
		
		
int main(int argc, char *argv[])
{
	int sampleTime = 0;
	int precisionBits = 0;
	int numberOfSimulatedSamples = 0;

	if (argc < 2) 
	{
		cerr << "\nUsage: " << argv[0] << " <sampleTime> <precisionBits> <numberOfSimulatedSamples>" << std::endl;

			cout << "Give sampleTime: ";
			cin >> sampleTime;
			cout << "Give precisionBits: ";
			cin >> precisionBits;
			cout << "Give numberOfSimulatedSamples: ";
			cin >> numberOfSimulatedSamples;
	}
	else
	{

		const int sampleTimeStrToInt = (int)'a';
		const int precisionBitsStrToInt = (int)'r';
		const int numberOfSimulatedSamplesStrToInt = (int)'u';
		string argument = "o";
		int argvStrToInt = 0;

		for(int argcount = 2; argcount < argc; argcount+=2)
		{
			argument = argv[argcount];
			argvStrToInt = (int)argument[3];

			switch(argvStrToInt)
			{
				case sampleTimeStrToInt:
					sampleTime = atoi(argv[argcount+1]);
					cout << "\nAssigning sampleTime to " << sampleTime<< "   \n";
					break;
				case precisionBitsStrToInt:
					precisionBits = atoi(argv[argcount+1]);
					cout << "\nAssigning precisionBits to " << precisionBits<< "   \n";
					break;
				case numberOfSimulatedSamplesStrToInt:
					numberOfSimulatedSamples = atoi(argv[argcount+1]);
					cout << "\nAssigning numberOfSimulatedSamples to " << numberOfSimulatedSamples<< "   \n";
					break;
			}
		}
		cout << endl;
	}

	Sensor A("A", sampleTime, precisionBits);
	A.showInfo();

	A.generateSamples(numberOfSimulatedSamples);

	/* TODO: Declare the person objects here with different weights and ages */
	/* TODO: Read the sensed samples with timestamps and process sample information as directed in the Project info */
	/* TODO: Store analysed criticality info of the persons/samples in analysis.txt file */

	return 0;
}
