#include <iostream>
using namespace std;

void swapNums(int &x, int &y){
	int z = x;
	x = y;
	y = z;
}

int main(){
	
	int firstNum = 3560;
	int secondNum = 7569;
	
	cout << "Before swap: " << endl;
	cout << firstNum << secondNum << endl;
	
	// Call Function
	swapNums(firstNum, secondNum);
	
	cout << "After swap: " << endl;
	cout << firstNum << secondNum << endl;
		
	return 0;
}
