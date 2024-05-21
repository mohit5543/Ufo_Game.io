# UFO: The Game

Welcome to **UFO: The Game**! Save your friend from alien abduction by guessing the letters in the codeword.

## Table of Contents

- [Introduction](#introduction)
- [Game Instructions](#game-instructions)
- [Installation](#installation)
- [Usage](#usage)
- [Files](#files)
- [Credits](#credits)
- [License](#license)

## Introduction

**UFO: The Game** is a command-line game where players try to guess a secret codeword one letter at a time. Each incorrect guess brings the alien spaceship closer to abducting your friend. Can you save them in time?

## Game Instructions

1. The game will display a series of underscores representing the codeword.
2. Guess letters one at a time to reveal parts of the codeword.
3. Each incorrect guess will be noted, and a part of the UFO will be drawn.
4. You win if you guess all the letters in the codeword before the UFO drawing is complete.
5. You lose if the UFO drawing is completed before you guess the codeword.

## Installation

1. **Clone the Repository:**

    ```sh
    git clone https://github.com/yourusername/ufo-game.git
    cd ufo-game
    ```

2. **Compile the Game:**

    ```sh
    g++ main.cpp ufo_functions.cpp -o ufo_game
    ```

## Usage

Run the compiled game from the command line:

```sh
./ufo_game
