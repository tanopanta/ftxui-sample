// https://arthursonzogni.github.io/FTXUI/

#include <cstdlib>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>

int main(void) {
    using namespace ftxui;

    Element document = 
        hbox({
            text("title") | border,
            text("Hello, world!") | border | flex,
        });
    auto screen = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(document)
    );
    Render(screen, document);
    screen.Print();

    return EXIT_SUCCESS;
}