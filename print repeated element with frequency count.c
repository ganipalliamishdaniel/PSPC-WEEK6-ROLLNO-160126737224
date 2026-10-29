
#include <stdio.h>

int main() {
    int a[100], n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++) {
        count = 1;

        for(j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                count++;
                a[j] = -9999;
            }
        }

        if(count > 1 && a[i] != -9999)
            printf("%d occurs %d times\n", a[i], count);
    }

    return 0;
}
