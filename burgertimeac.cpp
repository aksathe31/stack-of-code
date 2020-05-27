#include <iostream>
#include <cstdio>
#include <cstring>
#include <string.h>
#include <string>
#include <cmath>
using namespace std;
 
int main() {
    char r[2000005];
    int i, l, last, min_d = 2000009;
    while (scanf("%d\n%s\n", &l, r) > 0 && l) {
        min_d = 2000009, last = 0;
        for (i = 0; i < l; i++) {
            if (r[i] == 'Z') min_d =0;
            if (r[i] != '.') {
                if (r[last] !='.' && r[i] != r[last]) min_d = min(min_d, i - last);
                last = i;
            }
        }
        printf("%d\n", min_d);
    }
    return 0;
}
