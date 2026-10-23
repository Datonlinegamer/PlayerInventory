#pragma once

#include "Modules/ModuleManager.h"

class FModularInventoryModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};