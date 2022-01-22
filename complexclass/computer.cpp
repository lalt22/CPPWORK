#include <iostream>

#include "computer.hpp"

Monitor::Monitor() {
    resolution = "1920x1080";
    name = "DELLSE2000";
    onStatus = false;
}

Monitor::~Monitor() {

}

const char* Monitor::getResolution() {
    return resolution;
}

void Monitor::turnOnMonitor() {
    onStatus = true;
    if (onStatus == false) {
        std::cout << "Error: Could not turn on monitor" << std::endl;
    }
    else {
        std::cout << "Set monitor status to true" << std::endl;
    }
}

void Monitor::turnOffMonitor() {
    onStatus = false;
}

bool Monitor::getOnStatus() {
    return onStatus;
}

const char* Monitor::getName() {
    return name;
}

CPU::CPU() {
    temp = 30;
    maxTemp = 100;
    model = "Intel i5 11400";
}

CPU::~CPU() {

}

int CPU::getTemps() {
    return temp;
}

bool CPU::overHeating() {
    if (temp > maxTemp) {
        return true;
    }
    return false;
}

const char* CPU::getModel() {
    return model;
}

RAM::RAM() {
    used = 0;
    size = 16;
    details = "DDR4 3200mHz";
}

RAM::~RAM() {

}

int RAM::getRAMUsed() {
    return used;
}

int RAM::getSize() {
    return size;
}

bool RAM::outOfMemory() {
    if (used > size) {
        return true;
    }
    return false;
}

const char* RAM::getDetails() {
    return details;
}

Computer::Computer(Monitor m, CPU c, RAM r) {
    monitor = m;
    cpu = c;
    ram = r;
    onStatusCmp = false;
}

Computer::~Computer(){

}

Monitor Computer::getMonitor() {
    return monitor;
}

CPU Computer::getCPU() {
    return cpu;
}

RAM Computer::getRAM() {
    return ram;
}

void Computer::turnOn() {
    onStatusCmp = true;
}

void Computer::turnOff() {
    onStatusCmp = false;
}

bool Computer::getOnStatus() {
    return onStatusCmp;
}



