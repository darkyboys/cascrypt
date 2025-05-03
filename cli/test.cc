#include <iostream>
#include <fstream>
#include <string>
#include <cascrypt/cascrypt.hh>

int main(int argc, char* argv[]){
    if (argc < 4){
        std::cout << "Error -> Need [e/d] [one casci file] [one output file] at the least!\n";
        std::exit ( 3 );
    }
    
    std::ifstream ifile(argv[2]);
    std::string temp, cont, enc;
    while (std::getline(ifile, temp)){
        cont += temp + '\n';
    }

    if (std::string(argv[1]) == "e"){
        enc = cascrypt::encode(cont);
    }
    else if (std::string(argv[1]) == "d"){
        enc = cascrypt::decode(cont);
    }
    else {
        std::cout << "Error -> Unknown argument "<<argv[1]<<"\n";
        std::exit ( 3 );
    }

    std::ofstream ofile(argv[3]);
    ofile << enc;
}