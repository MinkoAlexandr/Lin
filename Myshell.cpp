#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string history="kubsh_history.txt";
    std::ofstream history_file(history, std::ios::app);

    std::string input;
    while(std::getline(std::cin,input))
    {
        history_file<<input<<"\n";
        history_file.flush();

        if (input=="\\q")
            break;
    
        if (input.empty()) continue;
        if (input.find("echo")==0)
            std::cout<<input.substr(6, input.length()-7)<<"\n";
        else
            std::cout<<input<<"\n";

    }
    
    
    //task1
    //std::cout<<"'";
    //std::string input;
    //std::getline(std::cin,input);
    //std::cout<<input<<"\n";
}
