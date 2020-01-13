#include<stdio.h>
#define CUBE_DIM 3
int arr[] = {3, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2};

struct position {
    int x;
    int y;
    int z;
};
static struct position cube[CUBE_DIM * CUBE_DIM * CUBE_DIM];

int recur (int lvl, int same, int arr_element, int last_coor_change);
int check(int lvl);

int main ()
{
    cube[0].x = cube[0].y = cube[0].z = 0;
    arr[0]--;
    recur(1, (arr[0])?1:0, (arr[0])?0:1, 0);
    return 0;
}

int recur (int lvl, int same, int arr_element, int last_coor_change)
{
    if(lvl < (CUBE_DIM * CUBE_DIM * CUBE_DIM)) {
        if(same) {
            switch (last_coor_change){
                case 0:
                        cube[lvl].x = (cube[lvl-1].x)+1;
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 0);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x)-1;
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 0);
                            arr[arr_element]++;
                        }
                        break;
                case 1:
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y)+1;
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 1);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y)-1;
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 1);
                            arr[arr_element]++;
                        }
                        break;
                case 2:
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z)+1;
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 2);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z)-1;
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 2);
                            arr[arr_element]++;
                        }
                        break;
            }
        } else {
            switch (last_coor_change){
                case 0:
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y)+1;
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 1);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y)-1;
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 1);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z)+1;
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 2);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z)-1;
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 2);
                            arr[arr_element]++;
                        }
                        break;
                case 1:
                        cube[lvl].x = (cube[lvl-1].x)+1;
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 0);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x)-1;
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 0);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z)+1;
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 2);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z)-1;
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 2);
                            arr[arr_element]++;
                        }
                        break;
                case 2:
                        cube[lvl].x = (cube[lvl-1].x)+1;
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 0);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x)-1;
                        cube[lvl].y = (cube[lvl-1].y);
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 0);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y)+1;
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 1);
                            arr[arr_element]++;
                        }
                        cube[lvl].x = (cube[lvl-1].x);
                        cube[lvl].y = (cube[lvl-1].y)-1;
                        cube[lvl].z = (cube[lvl-1].z);
                        if(check(lvl)) {
                            arr[arr_element]--;
                            recur (lvl+1, (arr[arr_element])?1:0, (arr[arr_element])?arr_element:arr_element+1, 1);
                            arr[arr_element]++;
                        }
                        break;
            }
        }
    } else {
        //check for cube formation
        for(int k = 0; k < (CUBE_DIM * CUBE_DIM * CUBE_DIM); k++) {
            printf("%d %d %d; ", cube[k].x, cube[k].y, cube[k].z);
        }
    }
    return 0;
}

int check(int lvl)
{
    int low_x, low_y, low_z;
    low_x  = low_y  = low_z  = 0;
    int high_x, high_y, high_z;
    high_x = high_y = high_z = 0;
    if((cube[lvl].x <= (-1*CUBE_DIM)) || (cube[lvl].x >= (CUBE_DIM)))
        return 0;
    if((cube[lvl].y <= (-1*CUBE_DIM)) || (cube[lvl].y >= (CUBE_DIM)))
        return 0;
    if((cube[lvl].z <= (-1*CUBE_DIM)) || (cube[lvl].z >= (CUBE_DIM)))
        return 0;

    for(int k = 0; k <= lvl; k++) {
        if (cube[k].x < low_x)  low_x  = cube[k].x;
        if (cube[k].y < low_y)  low_y  = cube[k].y;
        if (cube[k].z < low_z)  low_z  = cube[k].z;
        if (cube[k].x > high_x) high_x = cube[k].x;
        if (cube[k].y > high_y) high_y = cube[k].y;
        if (cube[k].z > high_z) high_z = cube[k].z;
    }
    if(((high_x - low_x) >= CUBE_DIM) || ((high_y - low_y) >= CUBE_DIM) || ((high_z - low_z) >= CUBE_DIM))
        return 0;

    for(int k = 0; k <= lvl; k++) {
        for(int l = 0; l < k; l++) {
            if((cube[k].x == cube[l].x) && (cube[k].y == cube[l].y) && (cube[k].z == cube[l].z))
                return 0;
        }
    }

    return 1;
}
