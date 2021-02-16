#include <iostream>
#include <vector>

void DisplayLocations(){
    std::cout << "Here are the locations on the board: " << std::endl;
    int board[3][3];
    int init = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = init;
            init++;
        }
    }
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

std::string * CreateBoard(){
    std::string board[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = " ";
        }
    }
    return board;
}

void DisplayBoard(std::string arr[][]){
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

void PlaceMarker(int location, std::string marker, string arr[][]) {
    if(location == 1){
       arr[0][0] = marker;
    }
    if(location == 2){
       arr[0][1] = marker;
    }
    if(location == 3){
       arr[0][2] = marker;
    }
    if(location == 4){
       arr[1][0] = marker;
    }
    if(location == 5){
       arr[1][1] = marker;
    }
    if(location == 6){
       arr[1][2] = marker;
    }
    if(location == 7){
       arr[2][0] = marker;
    }
    if(location == 8){
       arr[2][1] = marker;
    }
    if(location == 9){
       arr[2][2] = marker;
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
  DisplayLocations();
  CreateBoard();

  return 0;
}
