#include <stdio.h>

#define ROWS 20
#define COLS 50

char canvas[ROWS][COLS];

void initCanvas()
{
    int i,j;

    for(i=0;i<ROWS;i++)
        for(j=0;j<COLS;j++)
            canvas[i][j]=' ';
}

void drawRectangle(int row,int col,int height,int width)
{
    int i,j;

    for(i=row;i<row+height;i++)
    {
        for(j=col;j<col+width;j++)
        {
            if(i==row || i==row+height-1 ||
               j==col || j==col+width-1)
            {
                canvas[i][j]='*';
            }
        }
    }
}

void displayCanvas()
{
    int i,j;

    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
            printf("%c",canvas[i][j]);

        printf("\n");
    }
}

int main()
{
    initCanvas();

    drawRectangle(2,5,6,12);

    displayCanvas();

    return 0;
}
