#pragma once
#include "pch.h"

namespace typescriptwinmd
{
    struct settings_type
    {
        std::set<std::string> input;
        std::set<std::string> reference;

        std::string output_folder;
        bool base{};
        bool license{};

        bool verbose{};

        std::set<std::string> include;
        std::set<std::string> exclude;       
        
        winmd::reader::filter projection_filter;
    };

    extern settings_type settings;
}
