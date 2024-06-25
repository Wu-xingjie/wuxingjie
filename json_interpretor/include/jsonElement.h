#pragma once

#include <string>
#include <map>
#include <vector>

namespace civitasv{
    namespace json{
    enum class Type{
                JSON_NUMBER,
                JSON_STRING,
                JSON_NULL,
                JSON_ARRAY,
                JSON_BOOL,
                JSON_OBJECT
            };
            
            union Value{
                std::string* value_string;
                float value_number;
                bool value_bool;
                JSONObject* value_object;
                JSONArray* value_array;
            };
        class JsonElement;
        using JSONObject = std::map<std::string, JsonElement*>;
        using JSONArray = std::vector<JsonElement*>;
        class JsonElement{
            private:
            Type type_;
            Value value_;

            public:
            JsonElement(std::string* object_string);
            JsonElement(float object_number);
            JsonElement(bool object_bool);
            JsonElement(JSONObject* object_object);
            JsonElement(JSONArray* object_array);

            JSONArray* ASarray();
            JSONObject* ASobject();
            std::string* ASstring();
            float* ASnumber();
            bool* ASbool();

            std::string Dumps();
        };
    }
}