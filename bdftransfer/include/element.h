#pragma once

#include <vector>
#include <string>
#include <iostream>

class Element
{
    public:
        Element() = default;
        ~Element() = default;
        virtual void ElementDisplay() = 0;
};