#include <sting>
#include "Game.h"
#include "Player.h"

int main(){


std::string name1;
std::string name2;
std::string str;
int score1;
int score2;

std::getline(ifs,name1,';');
std::getline(ifs,str,'\n');
score2 = ataoi(str.c_str());

game.play(name1,score1,name2,score2);

return 0;

}

