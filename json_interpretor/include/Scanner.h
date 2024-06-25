#pragma once

#include <string>

namespace civitasv{
    namespace json{
        enum class JsonTokenType{
                    BEGIN_OBJECT,
                    END_OBJECT,
    
                    BEGIN_ELEMENT,
                    END_ELEMENT,
                    
                    VALUE_SPARATION,
                    NAME_SPARATION,
    
                    VALUE_STRING,
                    VALUE_NUMBER,
                    
                    LITERAL_TRUE,
                    LITERAL_FALSE,
                    LITERAL_NULL,
    
                    BEGIN_ARRAY,
                    END_ARRAY,
    
                    END_OF_SOURCE
                };
        class Scanner{
            private:
            std::string source_;
            size_t current_;
            std::string value_string;
            float value_number;
            
            public:
            Scanner(const std::string& source);       
            bool IsAtEnd();
            char Advance();
            JsonTokenType scan();
            void ScanString();
            void ScanNumber();
            void ScanTrue();
            void ScanFalse();
            void ScanNull();
        };
    }
}