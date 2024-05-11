#include <iostream>
#include <random>

char getPlayerInput(){
    char input {'l'};
    std::cout << "Enter input: ";
    std::cin >> input;

    return input;
}

char genCompInput(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1,3);

    switch(dist(gen)){
        case 1:
            return 'r';

        case 2:
            return 'p';

        case 3:
            return 's';
    }
}

void compareInps(const char& player, const char& comp){
    std::cout << "Computer says: " << comp << std::endl;
    if(player == 'r'){
        if(comp == 's'){
            std::cout << "Player wins" << std::endl;
        }
        else if(comp == 'p'){
            std::cout << "Computer wins" << std::endl;
        }
        else{
            std::cout << "Draw" << std::endl;
        }
    }
    else if(player == 'p'){
        if(comp == 'r'){
            std::cout << "Player wins" << std::endl;
        }
        else if(comp == 's'){
            std::cout << "Computer wins" << std::endl;
        }
        else{
            std::cout << "Draw" << std::endl;
        }
    }
    else{
        if(comp == 'p'){
            std::cout << "Player wins" << std::endl;
        }
        else if(comp == 'r'){
            std::cout << "Computer wins" << std::endl;
        }
        else{
            std::cout << "Draw" << std::endl;
        }
    }
}

int main(){
    for(int i = 0; i < 999; i++){
        compareInps(getPlayerInput(), genCompInput());
    }
}