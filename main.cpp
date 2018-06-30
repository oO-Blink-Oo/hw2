#include <iostream>
#include <vector>
#include <fstream>
#include <string>

/*
THINGS TO DO:
*
*

*/
struct process{
	process() : process(0,0,0,0,0) {}
	process(int pid, int arrivalTime, int lifeTime, int numAddressSpace, int addressSpace ) : pid_(pid), arrivalTime_(arrivalTime), lifeTime_(lifeTime), numAddressSpace_(numAddressSpace) {}


	int pid_;
	int arrivalTime_;
	int lifeTime_;
	int numAddressSpace_;
	
	vector<int> addressSpace; //holds address spaces
};

using namespace std;


int main() {
	int numProcesses;
	int memSize, pageSize;
	string fileName;
	
	process p; //need to make an array of structs or vector to store these processes
	

	cout << "Memory size = ";
	cin >> memSize;
	cout << "\nPage Size (1: 100, 2: 200, 3: 300 = ";
	cin >> pageSize;
	cout << "\nInput file name = ";
	cin >> fileName;
	return 0;
}