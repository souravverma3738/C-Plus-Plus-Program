#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits>

using namespace std;

// Function to convert choice number to string representation
string choiceToString(int choice) {
    switch(choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid";
    }
}

// Function to determine the winner
string determineWinner(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        return "It's a tie!";
    } else if ((playerChoice == 1 && computerChoice == 3) || 
               (playerChoice == 2 && computerChoice == 1) || 
               (playerChoice == 3 && computerChoice == 2)) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0, tieScore = 0;
    char playAgain;
    
    cout << "Welcome to Rock Paper Scissors Game!" << endl;
    
    do {
        // Display menu
        cout << "\nChoose your move:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "Enter your choice (1-3): ";
        
        // Get player choice
        while (!(cin >> playerChoice) || playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid input. Please enter a number between 1 and 3: ";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        
        // Generate computer choice (1-3)
        computerChoice = rand() % 3 + 1;
        
        // Display choices
        cout << "\nYour choice: " << choiceToString(playerChoice) << endl;
        cout << "Computer's choice: " << choiceToString(computerChoice) << endl;
        
        // Determine winner
        string result = determineWinner(playerChoice, computerChoice);
        cout << result << endl;
        
        // Update scores
        if (result == "You win!") {
            playerScore++;
        } else if (result == "Computer wins!") {
            computerScore++;
        } else {
            tieScore++;
        }
        
        // Display current score
        cout << "\nScore:" << endl;
        cout << "You: " << playerScore << " | Computer: " << computerScore << " | Ties: " << tieScore << endl;
        
        // Ask to play again
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
        
    } while (playAgain == 'y' || playAgain == 'Y');
    
    // Display final score
    cout << "\nFinal Score:" << endl;
    cout << "You: " << playerScore << " | Computer: " << computerScore << " | Ties: " << tieScore << endl;
    
    // Determine overall winner
    cout << "\nGame Over! ";
    if (playerScore > computerScore) {
        cout << "You are the overall winner!" << endl;
    } else if (computerScore > playerScore) {
        cout << "Computer is the overall winner!" << endl;
    } else {
        cout << "The game ended in a tie!" << endl;
    }
    
    return 0;
}
