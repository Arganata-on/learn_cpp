#include <iostream>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
  char player;
  char computer;

  player = getUserChoice();
  return 0;
}
char getUserChoice() {
  char player;
  cout << "Rock-Paper-Scissors Game!\n";
  cout << "************************\n";
  cout << "'r' for rock\n";
  cout << "'p' for paper\n";
  cout << "'s' for scissors\n";
  return 0;
}
char getComputerChoice() { return 0; }
void showChoice(char choice) {}
void chooseWinner(char player, char computer) {}