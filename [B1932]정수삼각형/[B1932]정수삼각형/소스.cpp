#include <iostream>
using namespace std;

int main(void) {
	int input = 0;
	int arr[501][501] = { {0,0}, };
	int output = 0;
	cin >> input;

	for (int i = 1; i <= input; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> arr[i][j];

			if (j == 1) {
				arr[i][j] = arr[i - 1][j] + arr[i][j];
			}
			else if (j == i) {
				arr[i][j] = arr[i - 1][j - 1] + arr[i][j];
			}
			else {
				arr[i][j] = arr[i - 1][j - 1] > arr[i - 1][j] ? arr[i - 1][j - 1] + arr[i][j] : arr[i - 1][j] + arr[i][j];
			}

			if (output < arr[i][j]) {
				output = arr[i][j];
			}
		}
	}
	   
	printf("%d", output);

	return 0;
}