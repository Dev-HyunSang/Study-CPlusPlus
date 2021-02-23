#include <iostream>

namespace BestComImp1 {
    void SimpleFunc(void);
}

namespace BestComImp1 {
    void PrettyFun(void);
}

namespace ProgComImp1 {
    void SimpleFunc(void);
}

int main(void) {
    BestComImp1::SimpleFunc();
    return 0;
}

void BestComImp1::SimpleFunc(void) {
    std::cout << "BestCom이 정의한 함수" << std::endl;
    PrettyFun(); // 동일 이름공간
    ProgComImp1::SimpleFunc(); // 다른 이름공간
}

void BestComImp1::PrettyFun(void) {
    std::cout << "So Pretty!!" << std::endl;
}

void ProgComImp1::SimpleFunc(void) {
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}