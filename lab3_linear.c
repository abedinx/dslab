#include <stdio.h>
int main() {
	int array[100], n, key, found;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	printf("Enter the element to search: ");
	scanf("%d", &key);
	found = 0;

	for (int i = 0; i < n; i++) {
		if (array[i] == key) {
			printf("Found at index %d", i);
			found = 1;
			break;
		}
	}
	if (found == 0) {
		printf("Element not found");
	}
	
	return 0;
}
