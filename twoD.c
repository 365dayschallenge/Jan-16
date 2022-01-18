#include <stdio.h>

int main(){
    int row,col;
    float add;
    float temp_check[5][2] = { {36.5,36.4},
                                {36.4,36.2},
                                {36.5,36.5},
                                {36.6,37.4},
                                {36.3,36.5}
                                };
    for(row = 0; row< 5; row++){
        for(col= 0; col< 2; col++){
            printf("temp[%d][%d] = %.1f\n", row,col,temp_check[row][col]);
        }
    }
    for(row=0; row<5; row++){
        for(col= 1; col<1; col++){


        }
        add= temp_check[row][0] + temp_check[row][1];
        printf("%.1f\n",add);
    }

    return 0;
}
