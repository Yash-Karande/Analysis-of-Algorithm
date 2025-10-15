#include <stdio.h>
#include <stdlib.h>  
#include <math.h>

int board[20], count = 0;

// Function to print the board configuration
void print(int n)
{
    int i, j;
    printf("\n\nSolution %d:\n\n", ++count);
    
    // Print column numbers
    for (i = 1; i <= n; ++i)
        printf("\t%d", i);

    for (i = 1; i <= n; ++i)
    {
        printf("\n\n%d", i);
        for (j = 1; j <= n; ++j)
        {
            if (board[i] == j)
                printf("\tQ"); // Queen at (i, j)
            else
                printf("\t-"); // Empty position
        }
    }
    printf("\n");
}

// Function to check whether a queen can be placed at row 'row' and column 'col'
int place(int row, int col)
{
    int i;
    for (i = 1; i <= row - 1; ++i)
    {
        // Check same column or diagonal conflict
        if (board[i] == col || abs(board[i] - col) == abs(i - row))
            return 0;
    }
    return 1;
}

// Recursive function to place queens
void queen(int row, int n)
{
    int col;
    for (col = 1; col <= n; ++col)
    {
        if (place(row, col))
        {
            board[row] = col;
            if (row == n)
                print(n); // If all queens placed, print solution
            else
                queen(row + 1, n); // Try next row
        }
    }
}

int main()
{
    int n;
    printf(" - N Queens Problem Using Backtracking -");
    printf("\n\nEnter number of Queens: ");
    scanf("%d", &n);
    queen(1, n);
    if (count == 0)
        printf("\nNo solutions exist for %d queens.\n", n);
    return 0;
}
