#include <iostream>
#include <string>

void exploreCave() {
    std::cout << "You enter a dark cave. It's full of mysteries.\n";
    
    // Add your cave exploration logic here
    std::cout << "You see a fork in the path. Which way do you go?\n";
    std::cout << "1. Take the left path\n";
    std::cout << "2. Take the right path\n";
    std::cout << "Enter your choice: ";
    
    std::string choice;
    std::cin >> choice;
    
    if (choice == "1") {
        std::cout << "You cautiously follow the left path.\n";
        std::cout << "You stumble upon a hidden treasure chest!\n";
        // Add your treasure discovery logic here
    } else if (choice == "2") {
        std::cout << "You decide to take the right path.\n";
        std::cout << "The path leads you to a dead end. There's nothing here.\n";
    } else {
        std::cout << "Invalid choice. You hesitate and decide not to proceed.\n";
    }
}

void searchTreasure() {
    std::cout << "You search for treasure. What will you find?\n";
    
    // Add your treasure search logic here
    std::cout << "You dig deep into the ground and find an old chest!\n";
    std::cout << "You open the chest and discover gold coins and a magical amulet.\n";
}

void startGame() {
    std::string playerName;
    
    // Get player's name
    std::cout << "Enter your name: ";
    std::cin >> playerName;
    std::cout << "Welcome, " << playerName << "! Let's start the adventure." << std::endl;
    
    // Game loop
    bool gameOver = false;
    while (!gameOver) {
        std::string choice;
        
        // Present choices to the player
        std::cout << "\n--- Menu ---\n";
        std::cout << "1. Explore the cave\n";
        std::cout << "2. Search for treasure\n";
        std::cout << "3. Quit the game\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        
        // Process player's choice
        if (choice == "1") {
            exploreCave();
        } else if (choice == "2") {
            searchTreasure();
        } else if (choice == "3") {
            std::cout << "Quitting the game. Goodbye, " << playerName << "!\n";
            gameOver = true;
        } else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }
}

int main() {
    // Start the game
    startGame();
    
    return 0;
}
