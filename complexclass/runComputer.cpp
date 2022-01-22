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

    if (myComputer.getCPU().overHeating() != true && myComputer.getRAM().outOfMemory() != true) {
        
        myComputer.turnOn();
        if(myComputer.getOnStatus() == true) {
            std::cout << "Computer on" << std::endl;
        }
        myComputer.getMonitor().turnOnMonitor();
        std::cout << "Monitor status is " << myComputer.getMonitor().getOnStatus() << std::endl;
        if(myComputer.getMonitor().getOnStatus() == true) {
            std::cout << "Monitor on" << std::endl;
        }
    }

    

}