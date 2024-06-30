#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int erda[1000000], origin[1000000];

//퀵정렬 사용하였음
void Swap(int arr[], int a, int b) {
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

int Partition(int arr[], int left, int right) {
	int pivot = arr[left]; // 피벗의 위치는 가장 왼쪽에서 시작
	int low = left + 1;
	int high = right;

	while (low <= high) // 교차되기 전까지 반복한다 
	{
		while (low <= right && pivot >= arr[low]) // 피벗보다 큰 값을 찾는 과정 
		{
			low++; // low를 오른쪽으로 이동 
		}
		while (high >= (left + 1) && pivot <= arr[high]) // 피벗보다 작은 값을 찾는 과정 
		{
			high--; // high를 왼쪽으로 이동
		}
		if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
		{
			Swap(arr, low, high); //low와 high를 스왑 
		}
	}
	Swap(arr, left, high); // 피벗과 high가 가리키는 대상을 교환 
	return high;  // 옮겨진 피벗의 위치정보를 반환 

}


void QuickSort(int arr[], int left, int right) {
	if (left <= right)
	{
		int pivot = Partition(arr, left, right); // 둘로 나누어서
		QuickSort(arr, left, pivot - 1); // 왼쪽 영역을 정렬한다.
		QuickSort(arr, pivot + 1, right); // 오른쪽 영역을 정렬한다.
	}
}

int main() {
	int n, m;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &erda[i]);
	for (int i = 0; i < m; i++)
		scanf("%d", &origin[i]);

	QuickSort(erda, 0, n - 1);
	QuickSort(origin, 0, m - 1);

	int erdaCnt = 0, originCnt = 0;
	for (int current = 0, last = 0; current < n; current++)
		if (current == 0) erdaCnt++;
		else if (erda[current] - erda[last] >= 100) {
			erdaCnt++;
			last = current;
		}
	for (int current = 0, last = 0; current < m; current++)
		if (current == 0) originCnt++;
		else if (origin[current] - origin[last] >= 360) {
			originCnt++;
			last = current;
		}

	printf("%d %d", erdaCnt, originCnt);

	return 0;
}