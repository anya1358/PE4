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

void DisplayBoard() {
    
    for(int i = 0; i < b3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << board[i][j] << std::endl;
        }
    }
    
}

int main() {
  
  CreateBoard();

  return 0;
}
