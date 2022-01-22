#include <iostream>

#include "computer.hpp"

Monitor::Monitor() {
    resolution = "1920x1080";
    name = "DELLSE2000";
    onStatus = 0;
}

Monitor::~Monitor() {

}

const char* Monitor::getResolution() {
    return resolution;
}

bool Monitor::getOnStatus() {
    return onStatus;
}

void Monitor::turnOnMonitor() {
    onStatus = 1;
}

void Monitor::turnOffMonitor() {
    onStatus = 0;
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
    onStatusCmp = 0;
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
    onStatusCmp = 1;
}

void Computer::turnOff() {
    onStatusCmp = 0;
}



