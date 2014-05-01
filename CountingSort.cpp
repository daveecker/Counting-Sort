

#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

void countingSort(vector<int>& sortMe){

	//find max value in the array
	int array_size = sizeof(sortMe)/sizeof(sortMe[0]);
	int max = sortMe[0];
	for(int i = 1; i < array_size; ++i){
		if(max < sortMe[i])
			max = sortMe[i];
	}

	//make the flag vector, fill it with false values
	vector<bool> flags;
	flags.resize(max+1);
	fill(flags.begin(), flags.end(), false);


	//mark the correct flag in the vector
	for(int i = 0; i < array_size; ++i){
		flags[sortMe[i]] = true;
	}

	//output sorted array
	cout << "sorted array:" << endl;
	for(int i = 0; i < flags.size(); ++i){
		if(flags[i] == true){
			cout << i << endl;
		}
	}
}
