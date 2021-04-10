
#pragma once

#ifndef DIALOGUE_HPP
#define DIALOGUE_HPP


#include <string>
#include <vector>

class Dialogue {
public:
    Dialogue();
    Dialogue(const std::string &description, const std::vector<std::string> &choices);

    int activate();
    void make_choice(int choice);

private:
    const std::string description;
    const std::vector<std::string> choices;
};

#endif // DIALOGUE_HPP