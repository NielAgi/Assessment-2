#include"sensor.hpp"
#include"sensor.cpp"
#include<iostream>

using namespace std;

int main(int argc, char *argv[]){

  int counter; 
    printf("Program Name Is: %s",argv[0]); 
    if(argc==1) 
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name"); 
    if(argc>=2) 
    { 
        printf("\nNumber Of Arguments Passed: %d",argc); 
        printf("\n----Following Are The Command Line Arguments Passed----"); 
        for(counter=0;counter<argc;counter++) 
            printf("\nargv[%d]: %s",counter,argv[counter]); 
    } 

	if (argc < 2) {
        	cerr << "n\Usage: " << argv[0] << " <sampleTime> <precisionBits> <numberOfSimulatedSamples>" << std::endl;
    	}
	else{
		cout << "You passed the following arguments: ";
		for(int argcount = 1; argcount < argc; argcount++){
			cout << argv[argcount] << "\t";
		}
		cout << endl;

    

		/* TODO: Process the first argument as sampleTime; second argument as precisionBits; and third argument as the number of samples to generate */
	}

	Sensor A("A", 1000, 2); /* TODO: The constructor parameters here should be input from the user through main arguments */
	A.showInfo();

	A.generateSamples(50); //TODO: 100 here should be replaced by the third argument you pass

	/* TODO: Declare the person objects here with different weights and ages */
	/* TODO: Read the sensed samples with timestamps and process sample information as directed in the Project info */
	/* TODO: Store analysed criticality info of the persons/samples in analysis.txt file */


	return 0;
}
