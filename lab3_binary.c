#include <stdio.h>
int main() {
	int array[100], n,key,low,high,mid, found;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter the sorted elements:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	printf("Enter the element to search: ");
	scanf("%d", &key);
	low = 0;
	high = n - 1;
	found = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		if (array[mid] == key) {
			printf("Found at index %d", mid);
			found = 1;
			break;
		} else if (key < array[mid]) {
			high = mid - 1;
		} else low = mid + 1;
	}
	if (found == 0) {
		printf("Element not found");
	}
    return 0;
}
