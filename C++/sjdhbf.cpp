#include <iostream>

class Distance {
  private:
    int feet;
    int inch;

  public:
    Distance() {
        feet = 0;
        inch = 0;
    }

    void input() {
        std::cout << "Enter feet: ";
        std::cin >> feet;
        std::cout << "Enter inch: ";
        std::cin >> inch;
    }

    void show() {
        std::cout << feet << " feet " << inch << " inches" << std::endl;
    }

    Distance operator+(const Distance& other) {
        Distance res;
        res.feet = feet + other.feet;
        res.inch = inch + other.inch;
        return res;
    }
};

int main() {
    Distance d1, d2, d3;

    std::cout << "Enter data for first distance:" << std::endl;
    d1.input();

    std::cout << "Enter data for second distance:" << std::endl;
    d2.input();

    d3 = d1 + d2;
    std::cout << "Result of addition: ";
    d3.show();

    return 0;
}
