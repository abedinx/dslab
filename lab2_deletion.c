#include <stdio.h>

int main() {
    int array[100], n, index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter index to delete: ");
    scanf("%d", &index);

    if (n == 0 || index < 0 || index >= n) {
        printf("Deletion not possible\n");
    } else {
        for (int i = index; i < n - 1; i++) {
            array[i] = array[i + 1];
        }
        n--;

        printf("Array after deletion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
