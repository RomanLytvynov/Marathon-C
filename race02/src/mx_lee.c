#include "header.h"

bool mx_lee(int **arr, int size_x, int size_y, t_coord * point1, t_coord * point2, int*pathX, int*pathY, int*ext)
{
arr[point1->y][point1->x] = 0;
    int d, x, y, k;
    int dx[4] = {1, 0, -1, 0};   // смещения, соответствующие соседям ячейки
    int dy[4] = {0, 1, 0, -1};   // справа, снизу, слева и сверху
    bool stop;

    d = 0;
    arr[point1->y][point1->x] = 0;
    while (true) 
    {
      stop = true;
      for (y = 0; y < size_y; ++y) 
        for (x = 0; x < size_x; ++x)
          if (arr[y][x] == d )
          {
            for ( k = 0; k < 4; ++k )
            {
              int iy = y + dy[k], ix = x + dx[k];
              if ( iy >= 0 && iy < size_y && ix >= 0 && ix < size_x && arr[iy][ix] == -2 )
              {
                  stop = false;
                  arr[iy][ix] = d + 1;
              }
            }
          }
        d++;
        if (( stop || arr[point2->y][point2->x] != -2 )) break;
    }
    
    *ext = arr[point2->y][point2->x];
    x = point2->x;
    y = point2->y;
    d = *ext;
    if(arr[point2->y][point2->x] == -2) return false;

    while ( d > 0 )
    {
      pathX[d] = x;
      pathY[d] = y;
      d--;
      for (k = 0; k < 4; ++k)
      {
        int iy = y + dy[k], ix = x + dx[k];

        if ( iy >= 0 && iy < size_y && ix >= 0 && ix < size_x && arr[iy][ix] == d)
        {
            x = x + dx[k];
            y = y + dy[k];
            break;
        }
      }
    }
    pathX[0] = point1->x;
    pathY[0] = point1->y; 
    return true;
}

