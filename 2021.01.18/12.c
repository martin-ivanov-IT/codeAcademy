#include <stdio.h>
int main() {
int nX = 33; /* homework, input with scanf */
int nY = 20;
if (nX == nY) {
printf("%d and %d are equal\n", nX, nY);
} else {
printf("%d and %d are not equal\n", nX, nY);
}
if (nX > nY) { printf("%d is greater than %d\n", nX, nY);
}

if (nX < nY) { printf("%d is greater than %d\n", nY, nX);
}

if (nX >= nY) { printf("%d is greater or equal than %d\n", nX, nY);
}


if (nX <= nY) { printf("%d is greater or equal than %d\n", nY, nX);
}

return 0;
} 