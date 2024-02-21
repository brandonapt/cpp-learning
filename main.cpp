#include <iostream>



int main() {
    std::cout << "< WELCOME TO APP DESKTOP >\n\n";

    // present 2 options, one to continue and one to exit
    std::cout << "1. Continue\n";
    std::cout << "2. Exit\n\n";

    // create choice variable to store user input
    int choice;
    std::cout << "Enter your choice: ";

    // choice prompt data is collected here.
    std::cin >> choice;

    // create the runBot function to run the bot
    // this references the runBot function below
    void runBot(); 

    if (choice == 1) {
        std::cout << "Continuing...\n";
        runBot();

    } else if (choice == 2) {
        std::cout << "Exiting...\n";
        return 0;
    } else {
        std::cout << "Invalid choice. Exiting...\n";
        return 0;
    }

    return 0;
}


// we make the function here because it is referenced in the main function
void runBot() {
    std::cout << "Bot is running...\n";
    std::cout << "Bot has stopped.\n";
}
