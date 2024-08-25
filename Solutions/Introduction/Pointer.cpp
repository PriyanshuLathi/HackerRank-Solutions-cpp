#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    
    int original_a = *a;
    int original_b = *b;
    
    *a = original_a + *b;
    
    if (original_a < original_b) {
        *b = original_b - original_a;
    }
    else {
        *b = original_a - original_b;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
