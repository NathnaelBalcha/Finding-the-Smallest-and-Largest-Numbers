#include <iostream.h>
int main() {
	int numbers[10],smallest,largest;
	cout << "Enter 10 integers to finds the smallest and biggest number:\n";
	cout<<"=============================================================\n";
	for (int i = 0; i < 10; ++i) {
			cout << "Enter integer " << i + 1 << ": ";
			cin >> numbers[i];
		}
	largest = numbers[0];
	smallest = numbers[0];
	for (int j = 1; j < 10; ++j) {
			if (numbers[j] < smallest) {
					smallest = numbers[j];
				}
			if (numbers[j] > largest) {
					largest = numbers[j];
				}
		}
	cout<<"=========================";
	cout << "\nSmallest number: " << smallest;
	cout << "\nLargest number: " << largest << endl;
	return 0;
}

