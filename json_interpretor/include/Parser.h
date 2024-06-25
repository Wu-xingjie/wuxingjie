#pragma once

#include "Scanner.h"
#include "jsonElement.h"

namespace civitasv{
    namespace json{
        class Parser{
            public:
            Parser(Scanner scanner);
            JsonElement* Parse();
        };
    }
}