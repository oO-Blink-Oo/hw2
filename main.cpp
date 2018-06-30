#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iterator>

using namespace std;

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
	int numAddressSpace_;//how many pieces of address space are inside the vector to be added together
	
	vector <int> addressSpace; //holds address spaces
	//need a function that sums this address spaces
};




int main() {
	int numProcesses;
	int memSize, pageSize;
	string fileName;
	
	

	vector<process> processes;//need to make an array of structs or vector to store these processes

	process p; 

	/*NOTE: This is how we can add adress space to the vector for it to be summed. These 2 lines of code 44-45 is just for visualization and will be deleted later*/
	p.addressSpace.push_back(1);
	p.addressSpace.push_back(20);

	cout << "Memory size = ";
	cin >> memSize;
	cout << "\nPage Size (1: 100, 2: 200, 3: 300 = ";
	cin >> pageSize;
	
	cout << "\nInput file name = ";
	cin >> fileName;
	ifstream inFile(fileName);
	
	return 0;
}