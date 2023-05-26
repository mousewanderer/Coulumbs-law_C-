#include <iostream>
#include <cmath>
#include <string>

double calculateForce(double charge1, double charge2, double distance) {
    const double k = 8.99e9;  // Coulomb's constant

    // Calculate the force using Coulomb's Law
    double force = (k * charge1 * charge2) / (distance * distance);

    return force;
}
double calculateCharge1(double charge2, double distance, double force) {
    const double k = 8.99e9;  // Coulomb's constant

    // Calculate charge 1 using Coulomb's Law
    double charge1 = (force * distance * distance) / (k * charge2);

    return charge1;
}
double calculateDistance(double charge1, double charge2, double force) {
    const double k = 8.99e9;  // Coulomb's constant

    // Calculate the distance using Coulomb's Law
    double distance = std::sqrt((k * charge1 * charge2) / force);

    return distance;
}

// Function to exit the program
void exitProgram() {
    std::cout << "Exiting the program..." << std::endl;
    exit(0); // Terminate the program
}

int main() {
    double charge1, charge2, distance, force;
    std::string selection;

    while (true) {
        std::cout << "Solve Coulumb's law \nEnter a number to solve";
        std::cout << "\n1 = Charge \n2 = Force \n3 = Distance\n4 = exit:";
        std::getline(std::cin, selection );

        if (selection== "1") {
            std::cout << "Enter the value of charge 1 (in coulombs): ";
            std::cin >> charge1;
            std::cout << "Enter the value of charge 2 (in coulombs): ";
            std::cin >> charge2;
            std::cout << "Enter the distance between the charges (in meters): ";
            std::cin >> distance;

            double force = calculateForce(charge1, charge2, distance);
            std::cout << "The force between the charges is: " << force << " N" << std::endl;

        } else if (selection== "2") {
            std::cout << "Enter the value of charge 2 (in coulombs): ";
            std::cin >> charge2;
            std::cout << "Enter the distance between the charges (in meters): ";
            std::cin >> distance;
            std::cout << "Enter the value of the force (in newtons): ";
            std::cin >> force;

            double charge1 = calculateCharge1(charge2, distance, force);

            std::cout << "The value of charge 1 is: " << charge1 << " C" << std::endl;
        } else if (selection == "3") {
            std::cout << "Enter the value of charge 1 (in coulombs): ";
            std::cin >> charge1;
            std::cout << "Enter the value of charge 2 (in coulombs): ";
            std::cin >> charge2;
            std::cout << "Enter the value of the force (in newtons): ";
            std::cin >> force;
        // Calculate the distance using Coulomb's Law
            double distance = calculateDistance(charge1, charge2, force);
        // Output the result
            std::cout << "The distance between the charges is: " << distance << " meters" << std::endl;
        } else if (selection == "4") {
            exitProgram();
        } else {
            std::cout << "Invalid selection!" << std::endl;
            }
         }
    return 0;
    }




