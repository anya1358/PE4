#include <iostream>
#include <vector>

int * CreateBoard(){
    int board[3][3];
    int init = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = init;
            init++;
        }
    }
    return board;
}

int main() {
  
  CreateBoard();

  return 0;
}
