#include <iostream>
#include <cstdlib> // Required for exit() function

int main() {
    while (true) {
        int choice;
        std::cout << "Enter a number (1 to 5, 0 to exit): ";
        std::cin >> choice;
        
        switch (choice) {
            case 0:
                std::cout << "Exiting..." << std::endl;
                exit(0); // Exits the program
            case 1:
                std::cout << "Choice 1 selected" << std::endl;
                break; // Exit the switch block
            // Add cases 2, 3, 4, 5 here
            default:
                std::cout << "Invalid choice, try again" << std::endl;
                break; // Exit the switch block
        }
    }

    return 0;
}
