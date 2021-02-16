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

void DisplayBoard(int arr[][]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << arr[i][j];
            if(j != 2){
            std::cout << " | ";
            }
        }
        if(i != 2){
            std::cout << std::endl << "----------" << std::endl;
        }
    }
}

void PlaceMarker(int currArr[][], int markerArr[][]) {
    for(int i = 0; i < 3; i ++) {
        for(int j = 0; j < 3; j++) {
            currArr[i][j] = markerArr[i][j];   
        }
        
    }
    
    return currArr;
}

int main() {
  
  CreateBoard();

  return 0;
}
