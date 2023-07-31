#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int trees) {
    totalTrees = 50;
    remainingShots = 5;
    srand(time(NULL));
    targetTree = rand() % totalTrees + 1;
}

void Game::play() {
    int guess;

    while (remainingShots > 0) {
        cout<<"Suas tentativas disponiveis sao: "<<remainingShots<<endl;
        cout<<"Digite o numero da arvore que voce deseja atirar (1-"<<totalTrees<<"): ";
        cin >> guess;

        if (guess == targetTree) {
            cout<<"Parabens! Voce atingiu o Revolutionary High atras da arvore "<<targetTree<<"."<<endl;
            return;
        } else if (guess < targetTree) {
            cout<<"Voce perdeu! O Revolutionary High e mais a direita."<<endl;
        } else {
            cout<<"Voce perdeu! O Revolutionary High esta mais a esquerda."<<endl;
        }

        remainingShots--;
    }

    cout << "Game Over! Voce ficou sem tiros. The Revolutionary High estava atras da arvore "<<targetTree<<"."<<endl;
}

