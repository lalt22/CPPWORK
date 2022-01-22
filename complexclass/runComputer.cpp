#include <iostream>
#include "computer.hpp"

int main() {
    Monitor monitor;
    CPU cpu;
    RAM ram;

    Computer myComputer(monitor, cpu, ram);
    std::cout << "Details:" << std::endl;
    std::cout << "Monitor: " << myComputer.getMonitor().getName() << std::endl;
    std::cout << "CPU: " << myComputer.getCPU().getModel() << std::endl;
    std::cout << "RAM: " << myComputer.getRAM().getDetails() << std::endl;
}