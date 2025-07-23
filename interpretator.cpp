#include <iostream>

struct BF{
    static std::string interpretator(std::string& code){
        std::string input = code;
        std::string result = "";
        for(char c : input){
            char symbol = c;
            int count = static_cast<int>(symbol); // перевод в символа в его число по таблице ASCII
            for(int j = 0; j < count; j++){
                result += "+";
            }
            result += ".";
            result += "[-]";      
        }
        return result;
    }
};

int main(){
    std::string input = "H";
    std::cout << BF::interpretator(input);
}