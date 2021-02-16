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

int GetPlayerChoice(){
    int answer;
    bool goodanswer = false;
    std::cout << "Please choose where you would like to place your marker (1-9): ";
    while(!goodanswer){
        cin >> answer;
        if(answer > 9 || answer < 1){
            std::cout << std::endl;
            std::cout << "Invalid location, please choose a location 1-9: ";
        }
        else{
            goodanswer = true;
        }
    }
    return answer;
}

int main() {
  
  CreateBoard();

  return 0;
}
