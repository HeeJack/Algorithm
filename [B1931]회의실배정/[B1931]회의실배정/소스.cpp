#include <iostream>

using namespace std;

int main(void) {
	int input = 0;
	int arr[100001][2] = {};
	int cur[1][2] = {};
	int result = 0;
	cin >> input;
	
	for (int i = 0; i < input; i++) {//�Է� �� ť�� �����Ͽ� �Է�
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		arr[i][0] = tmp1;
		arr[i][1] = tmp2;
	}
	cur[0][0] = arr[0][0];
	cur[0][1] = arr[0][1];
	result++;

	for (int i = 0; i < input; i++) {
		if (cur[0][1] <= arr[i][0]) {//�ð��� ��ġ�� ������ ����
			if () {//���۽ð��� ��ġ�� �ʰ� ������ �ð��� ���� ���� �ɷ�
				result++;
				cur[0][0] = arr[i][0];
				cur[0][1] = arr[i][1];
			}
		}		
	}


	printf("%d", result);
	
	return 0;
}