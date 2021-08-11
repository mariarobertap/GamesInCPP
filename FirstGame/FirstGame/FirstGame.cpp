
#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "Teste", sf::Style::Titlebar | sf::Style::Close);
    sf::Event ev;

    while (window.isOpen()) {

        while (window.pollEvent(ev)) {

            switch (ev.type) {

            case sf::Event::Closed:

                window.close();
                break;

            case sf::Event::KeyPressed:

                if (ev.key.code == sf::Keyboard::Escape) {
                    window.close();

                    break;
                }
                else if (ev.key.code == sf::Keyboard::M) {
                    printf("maria");
                }
              


            }
        }
      
        window.clear(sf::Color::Blue);
        window.display();
    }

    std::cout << "Hello World!\n";
}


