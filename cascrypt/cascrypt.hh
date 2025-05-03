/*
 * Copyright (c) ghgltggamer
 * Written by ghgltggamer
 * CASCRYPT - CASCI CRYPTOGRAPHY
 * Licensed under the MIT License
 * Checkout the README.md for more information
*/

// #include "scxx/scxx.hh"

#ifndef CASCRYPT
#define CASCRYPT 1
#include <string>

namespace cascrypt{
    const char* encoding[129][2] = {
        {"0 ", "0"},
        {"1 ", "1"},
        {"2 ", "2"},
        {"3 ", "3"},
        {"4 ", "4"},
        {"5 ", "5"},
        {"6 ", "6"},
        {"7 ", "7"},
        {"8 ", "8"},
        {"9 ", "9"},
        {"10 ", "A"},
        {"11 ", "B"},
        {"12 ", "C"},
        {"13 ", "D"},
        {"14 ", "E"},
        {"15 ", "F"},
        {"16 ", "G"},
        {"17 ", "H"},
        {"18 ", "I"},
        {"19 ", "J"},
        {"20 ", "K"},
        {"21 ", "L"},
        {"22 ", "M"},
        {"23 ", "N"},
        {"24 ", "O"},
        {"25 ", "P"},
        {"26 ", "Q"},
        {"27 ", "R"},
        {"28 ", "S"},
        {"29 ", "T"},
        {"30 ", "U"},
        {"31 ", "V"},
        {"32 ", "W"},
        {"33 ", "X"},
        {"34 ", "Y"},
        {"35 ", "Z"},
        {"36 ", "a"},
        {"37 ", "b"},
        {"38 ", "c"},
        {"39 ", "d"},
        {"40 ", "e"},
        {"41 ", "f"},
        {"42 ", "g"},
        {"43 ", "h"},
        {"44 ", "i"},
        {"45 ", "j"},
        {"46 ", "k"},
        {"47 ", "l"},
        {"48 ", "m"},
        {"49 ", "n"},
        {"50 ", "o"},
        {"51 ", "p"},
        {"52 ", "q"},
        {"53 ", "r"},
        {"54 ", "s"},
        {"55 ", "t"},
        {"56 ", "u"},
        {"57 ", "v"},
        {"58 ", "w"},
        {"59 ", "x"},
        {"60 ", "y"},
        {"61 ", "z"},
        {"62 ", "{"},
        {"63 ", "|"},
        {"64 ", "}"},
        {"65 ", "~"},
        {"66 ", "¡"},
        {"67 ", "¢"},
        {"68 ", "£"},
        {"69 ", "¤"},
        {"70 ", "¥"},
        {"71 ", "¦"},
        {"72 ", "§"},
        {"73 ", "¨"},
        {"74 ", "©"},
        {"75 ", "ª"},
        {"76 ", "«"},
        {"77 ", "¬"},
        {"78 ", "­"},
        {"79 ", "®"},
        {"80 ", "¯"},
        {"81 ", "°"},
        {"82 ", "±"},
        {"83 ", "²"},
        {"84 ", "³"},
        {"85 ", "´"},
        {"86 ", "µ"},
        {"87 ", "¶"},
        {"88 ", "·"},
        {"89 ", "¸"},
        {"90 ", "¹"},
        {"91 ", "º"},
        {"92 ", "»"},
        {"93 ", "¼"},
        {"94 ", "½"},
        {"95 ", "¾"},
        {"96 ", "¿"},
        {"97 ", "À"},
        {"98 ", "Á"},
        {"99 ", "Â"},
        {"100 ", "Ã"},
        {"101 ", "Ä"},
        {"102 ", "Å"},
        {"103 ", "Æ"},
        {"104 ", "Ç"},
        {"105 ", "È"},
        {"106 ", "É"},
        {"107 ", "Ê"},
        {"108 ", "Ë"},
        {"109 ", "Ì"},
        {"110 ", "Í"},
        {"111 ", "Î"},
        {"112 ", "Ï"},
        {"113 ", "Ð"},
        {"114 ", "Ñ"},
        {"115 ", "Ò"},
        {"116 ", "Ó"},
        {"117 ", "Ô"},
        {"118 ", "Õ"},
        {"119 ", "Ö"},
        {"120 ", "×"},
        {"121 ", "Ø"},
        {"122 ", "Ù"},
        {"123 ", "Ú"},
        {"124 ", "Û"},
        {"125 ", "Ü"},
        {"126 ", "Ý"},
        {"127 ", "Þ"},
        {"128 ", "ß"}
    };


    // str encode(const char* __VALUE){
    //     str rval = __VALUE;
    //     for (int i = 0;i <= 128;i++){
    //         str b = rval.replaceAll(encoding[i][0], encoding[i][1]);
    //         rval.value(b.value());
    //     }
    //     return rval;
    // }



    // str decode(const char* __VALUE){
    //     str rval = __VALUE;
    //     for (int i = 0;i <= 128;i++){
    //         rval.value(rval.replaceAll(encoding[i][1], encoding[i][0]));
    //     }
    //     return rval;
    // }

    void replaceAll(std::string& str, const std::string& find, const std::string& replace) {
        size_t pos = 0;
        while ((pos = str.find(find, pos)) != std::string::npos) {
            str.replace(pos, find.length(), replace);
            pos += replace.length();  // Move past the replaced substring
        }
    }

    std::string encode(const std::string& value) {
        std::string rval = value;
        for (int i = 0; i <= 128; ++i) {
            // std::cout << "Replacing: " << encoding[i][0] << " with " << encoding[i][1] << ", Content: "<< rval <<"\n";
            replaceAll(rval, std::string(encoding[128-i][0]), std::string(encoding[128-i][1]));
        }
        return rval;
    }

    std::string decode(const std::string& value) {
        std::string rval = value;
        for (int i = 0; i <= 128; ++i) {
            // std::cout << "Replacing: " << encoding[i][1] << " with " << encoding[i][0] << "\n";
            replaceAll(rval, std::string(encoding[i][1]), std::string(encoding[i][0]));
        }
        return rval;
    }

}

#endif