#include <iostream>
#include <cpp-httplib/httplib.h>
using namespace httplib;

int main() {
    // Создаём клиент и привязываем к домену. Туда пойдут наши запросы
    Client cli("http://webhook.site");
    // Отправляем post в теле которого будет текст {"Hello": "world"}
    auto res = cli.Post("/de537185-a8f4-45ac-b242-7b5d0947f81a", R"({"Hello": "world"})", "text/json");
    // res преобразуется в true, если запрос-ответ прошли без ошибок
    if (res) {
        // Проверяем статус ответа, т.к. может быть 404 и другие
        if (res->status == 200) {
            // В res->body лежит string с ответом сервера
            std::cout << res->body << std::endl;
        }
        else {
            std::cout << "Status code: " << res->status << std::endl;
        }
    }
    else {
        auto err = res.error();
        std::cout << "Error code: " << err << std::endl;
    }
}