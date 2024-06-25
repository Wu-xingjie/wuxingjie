#include "../include/Scanner.h"

namespace civitasv{
    namespace json{
        bool Scanner::IsAtEnd(){
            return (current_ >= source_.size());
        }

        char Scanner::Advance(){
            return source_[current_++];
        }
        
        void Scanner::ScanTrue(){
            
        }
        

        JsonTokenType Scanner::scan(){
            if(IsAtEnd())
            {
                return JsonTokenType::END_OF_SOURCE;
            }
            char c = Advance();
            switch (c)
            {
                case '{':
                    return JsonTokenType::BEGIN_OBJECT;
                case '}':
                    return JsonTokenType::END_OBJECT;
                case '[':
                    return JsonTokenType::BEGIN_ARRAY;
                case ']':
                    return JsonTokenType::END_ARRAY;
                case ':':
                    return JsonTokenType::VALUE_SPARATION;
                case ',':
                    return JsonTokenType::NAME_SPARATION;
                case 't':
                    ScanTrue();
                    return JsonTokenType::LITERAL_TRUE;
                case 'f':
                    ScanFalse(); 
                    return JsonTokenType::LITERAL_FALSE;
                case 'n':
                    ScanNull();
                    return JsonTokenType::LITERAL_NULL;
                case '\t':
                case '\n':
                case '\r':
                    ScanString();
                    return scan();
                case '\"':

                    return JsonTokenType::VALUE_STRING;
                case '-':
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    ScanNumber(current_);
                    return JsonTokenType::VALUE_NUMBER;
                default:
                    Error("undefined JsonTokenType:" + c);
                
            }






        }
        
    }
}