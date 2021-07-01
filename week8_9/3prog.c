#include<stdio.h>

void swap(int * a, int b, int c) {
    int temp = a[b];
    a[b] = a[c];
    a[c] = temp;
}
void insertsort(int * a, int n) {
    int p = 1, c;
    while (p < n) {
        int key = a[p];
        for (int i = p; i > 0; i--) {
            if (a[i] < key)
                break;
            else if (a[i - 1] > a[i])
                swap(a, i, i - 1);
        }
        p++;
    }
}
int main() {
    int n;
    printf("Enter number of element :");
    scanf("%d", & n);
    int num[n];
    printf("Enter %d numbers :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", num + i);
    }
    printf("Number before sorting :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(num + i));
    }
    printf("\n");
    printf("Numbers after sorting :\n");
    insertsort(num, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", *(num + i));
    }
}