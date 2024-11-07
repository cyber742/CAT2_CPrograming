//A program of 2D arrray
#include <stdio.h>
int main() {
//Declaring a 2D array 
int score[2][2][2]= {{{65,92},{84,72}},{{35,70},{59,67}}};
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
for(int k=0;k<2;k++){
//printing each element in 2D array 
printf("[%d][%d][%d] = %d   " ,i,j,k,score[i][j][k]);

}
printf("\n");
}
printf("\n");
}
return 0;
}
    