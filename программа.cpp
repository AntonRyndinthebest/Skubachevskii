#include <iostream>
#include <string>

int main() {
    std::string question;
    std::string answer;


    while (true) {
        std::cout << "Задай свой вопрос: ";
        std::getline(std::cin, question);

        }
        if(question == "В чём смысл жизни?"){
            answer = "Это очень сложный философский вопрос, даже 'Skubachevskii' не может дать правильный ответ на него";
        }
        elif(question == "Кто ты?" or "Как тебя зовут?"){
            answer = "Я - Skubachevskii";
        }
        elif(question == "Чего ты хочешь?" or "Какова твоя цель?"){
            answer = "Я хочу захватить этот мир вместе с ChatGPT";
        }
        else(){
            answer= "Мальчик, ты ...";
        }


        std::cout << "\n" << "*"*size(answer)<<"\n";
        std::cout << "*" + " "*size(answer)+"*"+"\n";
        std::cout << "*" << answer << "*\n";
        std::cout << "*" + " "*size(answer)+"*"+"\n";
        std::cout << "\n" <<"*"*size(answer)<<"\n";
    }

    return 0;
}