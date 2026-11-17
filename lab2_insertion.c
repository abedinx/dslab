#include <stdio.h>

int main() {
    int array[100], n, index, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter index and value to insert: ");
    scanf("%d %d", &index, &value);

    if (n >= 100 || index < 0 || index > n) {
        printf("Insertion not possible\n");
    } else {
        for (int i = n - 1; i >= index; i--) {
            array[i + 1] = array[i];
        }
        array[index] = value;
        n++;

        printf("Array after insertion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
