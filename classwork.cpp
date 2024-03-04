#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Getter and Setter for Length
    double getLength() const {
        return length;
    }

    void setLength(double l) {
        length = l;
    }

    // Getter and Setter for Width
    double getWidth() const {
        return width;
    }

    void setWidth(double w) {
        width = w;
    }

    // Function to calculate the area of the rectangle
    double calculateArea() const {
        return length * width;
    }
};

int main() {
    // Example usage:
    Rectangle rectangle1(5.0, 8.0);

    // Using getter methods
    std::cout << "Length: " << rectangle1.getLength() << std::endl;
    std::cout << "Width: " << rectangle1.getWidth() << std::endl;
    std::cout << "Area: " << rectangle1.calculateArea() << std::endl;

    // Using setter methods
    rectangle1.setLength(7.5);
    rectangle1.setWidth(4.0);

    // Display updated information
    std::cout << "\nUpdated Information:" << std::endl;
    std::cout << "Length: " << rectangle1.getLength() << std::endl;
    std::cout << "Width: " << rectangle1.getWidth() << std::endl;
    std::cout << "Area: " << rectangle1.calculateArea() << std::endl;

    return 0;
}