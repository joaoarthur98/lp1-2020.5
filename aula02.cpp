#include <iostream>
#include <string>

void show_usage(std::string const prog_name);

int main(int argc, char *argv[]){
    std::string arg = "add";

    if(argc == 1){
        show_usage(argv[0]);
        return -1;
    }

    std::string action = argv[1];

    if(action != "add"){
        show_usage(argv[0]);
        return -1;
    }
    
    std::string mensagem;

    if(argc == 2){
        std::cout << "Informe a mensagem a ser impressa: " << std::endl;
        std::cin >> mensagem; 
    }
    else{
        mensagem = argv[2];
    }

    std::cout << "Mensagem adicionada!" << std::endl;
}

void show_usage(std::string const prog_name){
    std::cout << "Uso: " << prog_name << " add <mensagem>" << std::endl;
}