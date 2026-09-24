#include <drogon/drogon.h>

int main() {
    drogon::app().registerHandler(
        "/",
        [](const drogon::HttpRequestPtr&, std::function<void(const drogon::HttpResponsePtr&)>&& callback) {
            auto response = drogon::HttpResponse::newFileResponse("../public/index.html");
            callback(response);
        });

    drogon::app()
        .setDocumentRoot("../public")
        .addListener("0.0.0.0", 8080)
        .run();

    return 0;
}