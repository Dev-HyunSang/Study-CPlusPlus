
## 01-1: printf와 sacnf를 대신하는 입출력 방식

### 문자열 "Hello World"의 출력

```c++
#include <iostream>

int main(void) {
    int num = 20;
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello" << std::endl;
    std::cout << num << ' ' << 'A';
    std::cout << ' ' << 3.14 << std::endl;
    return 0;
}
```

```shell
Hello World!
Hello
20 A 3.14
```
- 헤더파일 선언문 ```#include<iostream>```
- ```std::cout```과 ```<<```을 이용한 출력
- ```std::endl```을 이용한 개행

### scanf를 대신하는 데이터의 입력
```c++
#include <iostream>

int main(void) {
int val1;
std::cout << "첫 번째 숫자입력: ";
std::cin << val1;

    int val2;
    std::cout << "두 번째 숫자입력: ";
    std::cin << val2;

    int result = val1 + val2;
    std::cout << "덧셈 결과: " << result << std::endl;
    return 0;
}
```
- 키보드로부터의 데이터 입력에도 헤더파일 선언문 ```#include<iostream>```이 필요하다.
- 키보드로부터의 데이터 입력에는 ```std::cin```과 ```>>``` 연산자가 사용된다.
- 변수의 선언은 어디서든 가능하다.