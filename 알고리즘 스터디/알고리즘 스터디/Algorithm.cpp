#include "Algorithm.h"

void B1931() {
	int input = 0;
	int arr[100001][2] = {};
	int cur[1][2] = {};
	int result = 0;
	cin >> input;

	for (int i = 0; i < input; i++) {//입력 시 큐에 소팅하여 입력
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		arr[i][0] = tmp1;
		arr[i][1] = tmp2;
	}
	cur[0][0] = arr[0][0];
	cur[0][1] = arr[0][1];
	result++;

	for (int i = 0; i < input; i++) {
		if (cur[0][1] <= arr[i][0]) {
			if (true) {
				result++;
				cur[0][0] = arr[i][0];
				cur[0][1] = arr[i][1];
			}
		}
	}


	printf("%d", result);
}

void B1932() {
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
}