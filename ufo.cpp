#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main() {
  greet();

  std::string codeword = "extraterrestrial";
  std::string answer = "________________";

  int misses = 0;

  std::vector<char> incorrect;
  bool guess = false;

  char letter;

  while(answer != codeword && misses < 7) {

    display_misses(misses);
    

    std::cout << "\nIncorrect Guesses\n";

    display_status(incorrect, answer);

    std::cout << "\n\nPlease enter your guess: ";
    std::cin >> letter;

    guess = false;

    for(int i = 0; i < codeword.length(); i++) {
      if(letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
      }
    }

    if(guess) {
      std::cout << "\nCorrect\n";
    } else {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses ++;
    }
  }

  end_game(answer, codeword);

  return 0;
}
