#include <stdio.h>
int main()
{ int rows;
    printf("Enter rows: \n");
	scanf("%d", &rows);
    int space = rows - 1;
	for (int i = 1; i <= rows; i++)
    {
	for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
		 for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
		 printf("\n");
    }
    return 0;
}
