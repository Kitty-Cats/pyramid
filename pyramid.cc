#include <iostream>
#include <string>

const std::string unit = "X";
const std::string space = " ";
void line(int size1, int spaceNum, std::string unit){
    int unitSize = size1 - spaceNum;
    for(int spacePrintTimes=0; spacePrintTimes<spaceNum; spacePrintTimes++){
        std::cout << space;
    }
    for(int unitPrintTimes=0; unitPrintTimes<unitSize*2; unitPrintTimes++){
        std::cout << unit;
    }
    std::cout << std::endl;
}
void pyramid(int size, std::string unit){
    int rowA;
    for(rowA=size-1;rowA>-1;rowA--){
        line(size,rowA,unit);
    }
}
int main(){
    std::string unit,size;
    std::cout << "Enter a character to use:" << std::endl;
    std::cin >> unit;
    std::cout << "Choose the hight of the pyramid:" << std::endl;
    std::cin >> size;
    std::cout << std::endl;
    int sizeInt = std::stoi(size);
    for(int roof=sizeInt*2; roof>-1; roof--){
        std::cout << "_";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    pyramid(sizeInt,unit);
}