
#include <iostream>
#include <cstring>   // for strlen, strcpy

// TODO: function prototypes

// TODO: implement addStudent
void addStudent(char* name, double gpa, char* names[], double gpas[], int& size, int capacity) {
    
}

// TODO: implement updateGPA
void updateGPA(double* gpaPtr, double newGpa) {

}

// TODO: implement printStudent
void printStudent(const char* name, const double& gpa) {

}

// TODO: implement averageGPA
double averageGPA(const double gpas[], int size) {
    return 0.0;
}


int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./program <capacity>" << std::endl;
        return 1;
    }

    int capacity = std::stoi(argv[1]);
    char* names[capacity];
    double gpas[capacity];
    int size = 0;

    int choice;
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Add student\n";
        std::cout << "2. Update GPA\n";
        std::cout << "3. Print all students\n";
        std::cout << "4. Compute average GPA\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // TODO: implement menu logic
                char name[100]; // names must be under 100 chars
                double gpa;
                std::cout << "Enter name: ";
                std::cin >> name;
                std::cout << "Enter GPA: ";
                std::cin >> gpa;
                if (size == capacity) {
                    std::cout << "List full" << std::endl;
                } else {
                    addStudent(name, gpa, names, gpas, size, capacity);
                }
                break;
            }
            case 2: {
                // TODO: implement menu logic
                int index;
                double gpa;
                std::cout << "Enter index: ";
                std::cin >> index;
                std::cout << "Enter GPA: ";
                std::cin >> gpa;
                updateGPA(&gpas[index], gpa);
                break;
            }
            case 3: {
                // TODO: implement menu logic
                for (int i=0; i<size; i++) {
                    printStudent(names[i], gpas[i]);
                }
                break;
            }
            case 4: {
                // TODO: implement menu logic
                if (size == 0) {
                    std::cout << "No students" << std::endl;
                } else {
                    int avg = static_cast<int>(averageGPA(gpas, size));
                    std::cout << "Average GPA: " << avg << std::endl;
                }
                break;
            }
            case 5: {
                std::cout << "Goodbye!" << std::endl;
                break;
            }
            default: {
                std::cout << "Invalid choice" << std::endl;
            }
        }
    } while (choice != 5);

    // TODO: free memory

    return 0;
}
