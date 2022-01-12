
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,  //矩陣A的列數
        n,  //矩陣A的行數 (同時也是矩陣B的列數)
        p;  //矩陣B的行數

    printf("輸入矩陣A之列數m、行數n及矩陣B之行數p\n");
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &p);
    int a[m][n],
          b[n][p],
          c[m][p];

    printf("\n輸入A矩陣\n");
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n輸入 B矩陣\n");
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < p; j ++){
            scanf("%d", &b[i][j]);
        }
    }

    /*計算矩陣乘積*/
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < p; j ++){
            c[i][j] = 0;
            for(int k = 0; k < n; k ++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    /*輸出*/
    printf("===============\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j ++){
            printf("%d   ",c[i][j]);
        }
        printf("\n");
    }
}
