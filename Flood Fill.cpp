#include<fstream>

std::ifstream INPUT_FILE("input.in");
std::ofstream OUTPUT_FILE("output.out");
int rows,cols;
void floodFill(int matrix[100][100],int row, int col,int prevColor,int newColor){
    if(row<0 || row==rows || col<0 || col==cols) return;
    if(matrix[row][col]==prevColor){
         matrix[row][col]=newColor;
         floodFill(matrix,row-1,col,prevColor,newColor); //N
         floodFill(matrix,row+1,col,prevColor,newColor); //S
         floodFill(matrix,row,col+1,prevColor,newColor); //E
         floodFill(matrix,row,col-1,prevColor,newColor); //V
     }
}

int main()
{
    int matrix[100][100],x,y,prevColor,newColor;
    INPUT_FILE>>rows>>cols>>x>>y>>prevColor>>newColor;

    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++) INPUT_FILE>>matrix[row][col];
    }
    floodFill(matrix,x,y,prevColor,newColor);
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++) OUTPUT_FILE<<matrix[row][col]<<" ";
        OUTPUT_FILE<<"\n";
    }
    return 0;
}
