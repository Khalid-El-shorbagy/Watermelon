#include <iostream>
using namespace std;

int main() {

	int w;

	cout << "Please enter the weight" << endl;
	cin >> w;



	if (w > 1 && w <= 100) {

		if (w % 2 == 0) {
			cout << "Yes";
		}
		else {
			cout << "No";
		}


	}
	else {
		cout << "You should enter number between 1-100";
	}


}