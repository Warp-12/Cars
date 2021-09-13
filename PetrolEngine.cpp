#include "PetrolEngine.hpp"

#include <iostream>

PetrolEngine::PetrolEngine(int power, float capacity, int gears)
    : power_(power), capacity_(capacity), gears_(gears), currentGear_(0) {
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolEngine::changeGear(int gear) {
    // TODO: Add checking if gear is between -1 and gears_
    // -1 is for REAR
    // 0 is for NEUTRAL
    if (gear == -1 && currentGear_ != 0) {
        throw InvalidGear("Invalid changing gears");
    }

    if (gear > gears_) {
        throw InvalidGear("Cannot change to gear that is over max gear: " + gears_);
    }
    currentGear_ = gear;
    std::cout << __FUNCTION__ << std::endl;
}
