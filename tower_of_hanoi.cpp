#include <stdio.h>
#include <stdlib.h>
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}
void displayPegs(char pegs[], int numPegs, int numDisks[]) {
    for (int i = 0; i < numPegs; i++) {
        printf("Peg %c: ", pegs[i]);
        for (int j = 0; j < numDisks[i]; j++) {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
}
int main() {
    int n, numPegs;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid number of disks. Please enter a positive integer.\n");
        return 1;
    }
    printf("Enter the number of pegs (3 or more): ");
    scanf("%d", &numPegs);
    if (numPegs < 3) {
        printf("Invalid number of pegs. Please enter 3 or more.\n");
        return 1;
    }
    char pegs[numPegs];
    int numDisks[numPegs];
    for (int i = 0; i < numPegs; i++) {
        pegs[i] = 'A' + i;
        numDisks[i] = (i == 0) ? n : 0;
    }
    printf("Initial state of the pegs:\n");
    displayPegs(pegs, numPegs, numDisks);
    printf("Tower of Hanoi solution for %d disks and %d pegs:\n", n, numPegs);
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}

