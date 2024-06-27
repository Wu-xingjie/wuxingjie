#pragma once

#include "Human.h"

class Factory
{
    public:
        virtual Human* Create();
};