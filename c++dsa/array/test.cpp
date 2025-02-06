#include <iostream>
class Base {
private:
    int privateMember = 1;  // Only accessible within this class

protected:
    int protectedMember = 2;  // Accessible within this class and derived classes

public:
    int publicMember = 3;  // Accessible from anywhere where the object is accessible

    // Public function to demonstrate access to private and protected members
    void display() {
        std::cout << "Private Member: " << privateMember << std::endl;
        std::cout << "Protected Member: " << protectedMember << std::endl;
        std::cout << "Public Member: " << publicMember << std::endl;
    }
};
// Public inheritance
class DerivedPublic : public Base {
    // No additional members needed
};

// Protected inheritance
class DerivedProtected : protected Base {
    // No additional members needed
};

// Private inheritance
class DerivedPrivate : private Base {
    // No additional members needed
};


int main() {
    DerivedPublic dp;
    std::cout << "Accessing public member through DerivedPublic: " << dp.publicMember << std::endl; // OK

    DerivedProtected dprot;
    // Cannot access any Base members directly through dprot

    DerivedPrivate dpriv;
    // Cannot access any Base members directly through dpriv

    return 0;
}
