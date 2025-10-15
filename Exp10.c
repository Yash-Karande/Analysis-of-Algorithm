#include <stdio.h>
#include <string.h>

void search(char* pat, char* txt) {
    int M = strlen(pat);
    int N = strlen(txt);
    int found = 0;

    // Loop to slide the pattern one by one
    for (int i = 0; i <= N - M; i++) {
        int j;

        // Check for pattern match at current index i
        for (j = 0; j < M; j++) {
            if (txt[i + j] != pat[j]) {
                break;
            }
        }

        // If we reached the end of pat[], we found a match
        if (j == M) {
            printf("Pattern found at index %d\n", i);
            found = 1;
        }
    }

    if (!found)
        printf("Pattern not found in the text.\n");
}

int main() {
    char txt[100], pat[50];

    printf("Enter the text: ");
    scanf(" %[^\n]", txt);   // reads entire line (including spaces)

    printf("Enter the pattern to search: ");
    scanf(" %[^\n]", pat);

    printf("\nSearching for pattern...\n\n");
    search(pat, txt);

    return 0;
}
