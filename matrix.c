//Matrix

int main() {
    int rows, cols , i, j;
    printf("Enter number of rows and cols for the matrix: \n");
    scanf("%d %d",&rows, &cols);
    
    int mat[rows][cols];
    
    printf("enter the matrix:");
    
    for(i = 0; i < rows ; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
    
    printf("\nThe Matrix is:\n");
    for(i = 0; i < rows ; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d",mat[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    
  return 0;
}
