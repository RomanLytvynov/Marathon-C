#include "header.h"
int mx_max(int **arr,int ax, int ay, int He, int Wi, char **final)
{
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  int d, x, y, k;
  bool stop = false;
  int maxim;
  int flag = 1;

  d = 0;
  arr[ay][ax] = 0;
  while (!stop  || flag)
  {
    stop = true;
    for ( y = 0; y < He; ++y )
      for ( x = 0; x < Wi; ++x )
        if ( arr[y][x] == d )
        {
          for ( k = 0; k < 4; ++k )
          {
             int iy=y + dy[k], ix = x + dx[k];
             if ( iy >= 0 && iy < He && ix >= 0 && ix < Wi &&
             arr[iy][ix] == -2 )
             {
                stop = false;
                arr[iy][ix] = d + 1;
             }
          }
        }
    d++;
    flag = 0;
  }

  maxim = arr[0][0];
  for (int i = 0; i < He; ++i) 
  {
        for (int j = 0; j < Wi; ++j) 
        {
              if (arr[i][j] > maxim)
                  maxim = arr[i][j];
        }
  }

  for (int i = 0; i < He; ++i) 
  {
        for (int j = 0; j < Wi; ++j) 
        {
            if (arr[i][j] == maxim) 
            {
              if (final[i][j] == '*') final[i][j] ='X';
              else final[i][j] = 'D';
            }
        }
  }
  return maxim;
}
