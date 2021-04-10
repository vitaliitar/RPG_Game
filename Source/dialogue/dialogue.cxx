#include <iostream>
#include <utility>
#include "dialogue.hpp"

Dialogue::Dialogue() {}

Dialogue::Dialogue(const std::string &description, const std::vector<std::string> &choices)
: description(std::move(description)), choices(std::move(choices)) {}

int Dialogue::activate() {
    std::cout << description << std::endl;

    for (int i = 0; i < this->choices.size(); ++i) {
        std::cout << i + 1 << ": " << this->choices[i] << std::endl;
    }

    int input = -1;

    while (true) {
        std::cin >> input;
        if (input >= 0 && input <= choices.size()) {
            return input;
        }

        std::cout << "Please choose again." << std::endl;
    }
}

void Dialogue::make_choice(int choice) {
    switch (choice) {
        case 1:
            std::cout << "You chose 'Play cards'" << std::endl;
            break;
        case 2:
            std::cout << "You chose 'Watch movies'" << std::endl;
            break;
        default:
            std::cout << "Dialogue is broken." << std::endl;
            break;
    }
}