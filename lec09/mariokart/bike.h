#include "kart.h"
class Bike : public Kart {
public:
    Bike(const string& driver);

    void specialMove() override;
};
