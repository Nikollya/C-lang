#include <stdio.h>
#include <string.h>

int main() {
    printf("Write number of card!\n");
    char a[256];
    scanf("%s",a);
    int n=strlen(a);
    if (n!=16) { printf("Error: 01!\n"); return 0;}
    for (int i = 0; i < n; i++) {
        if (a[i]<'0' || a[i]>'9') {printf("Error: 02!\n"); return 0;}
    }
    int sum=0;
    for (int i = 0; i < n; i++) {
        if (i%2==0) {
            if ((a[i] - '0') * 2 > 9) {
                int x = (a[i] - '0')*2;
                sum += x % 10;
                x = x / 10;
                sum += x;
            } else
                sum += (a[i] - '0')*2;
        } else
            sum += (a[i]-'0');
    }
    if (sum%10!=0)
    {
        printf("\nError: 03!\n");
        return 0;
    }
    printf("\nYour card have accepted!\n");
    return 0;
}
//5168441223630339