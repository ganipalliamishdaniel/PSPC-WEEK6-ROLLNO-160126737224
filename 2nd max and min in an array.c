#include <stdio.h>

int main() {
    int a[100], n, i, j, temp;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("2nd Smallest = %d\n", a[1]);
    printf("2nd Largest = %d\n", a[n-2]);

    return 0;
}
