#include <iostream>

class Monitor {
    public:
    Monitor();
    ~Monitor();
    const char* getResolution();
    bool getOnStatus();
    void turnOnMonitor();
    void turnOffMonitor();
    const char* getName();
    private:
    const char* resolution;
    const char* name;
    bool onStatus;
};

class CPU {
    public:
    CPU();
    ~CPU();
    int getTemps();
    bool overHeating();
    const  char* getModel();
    private:
    int maxTemp;
    int temp;
    const char* model;
};

class RAM {
    public:
    RAM();
    ~RAM();
    int getRAMUsed();
    int getSize();
    bool outOfMemory();
    const char* getDetails();
    private:
    int used;
    int size;
    const char* details;
};

class Computer {
    public:
    Computer(Monitor mon, CPU c, RAM r);
    ~Computer();
    Monitor getMonitor();
    CPU getCPU();
    RAM getRAM();
    void turnOn();
    void turnOff();
    bool getOnStatus();
    private:
    Monitor monitor;
    CPU cpu;
    RAM ram;
    bool onStatusCmp;
};