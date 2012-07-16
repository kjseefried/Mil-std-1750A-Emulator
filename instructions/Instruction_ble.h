
#ifndef INSTRUCTION_BLE
#define INSTRUCTION_BLE

#include "Instruction_counterRelative.h"

class Instruction_ble : public Instruction_counterRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_ble();
    virtual void execute() const;
private:
    Instruction_ble();
};


#endif
