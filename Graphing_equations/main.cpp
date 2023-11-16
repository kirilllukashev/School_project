#include <SFML/Graphics.hpp>
#include <iostream>
#include<cmath>

using namespace sf;
const int width = 1920;
const int height = 1080;
int width_c = width;
int height_c = height;
const double unit = 20;
RenderWindow window(VideoMode(width, height), "Graph_project");//, Style::Fullscreen
int pos_x = 0, pos_y = 0;

double point_x = -1e-5;
double point_y = -1e-5;
View view;
Texture texture;
Sprite sprite;

Uint8 pixels[height * width * 4]; //red-green-blue-alpha

Color grey(0, 0, 0, 30);

void draw_line() {
    for (int i = 0; i < height; i += unit) {
        RectangleShape line(Vector2f(width, 1));
        line.setPosition(pos_x, i + pos_y);
        line.rotate(0);
        line.setFillColor(grey);
        window.draw(line);
    }

    for (int i = 0; i < width; i += unit) {
        RectangleShape line(Vector2f(height, 1));
        line.setPosition(i + pos_x, pos_y);
        line.rotate(90);
        line.setFillColor(grey);
        window.draw(line);
    }

    RectangleShape line_x(Vector2f(width, 2));
    line_x.setPosition(0 + pos_x, height / 2);
    line_x.rotate(0);
    line_x.setFillColor(Color::Black);
    window.draw(line_x);

    RectangleShape line_y(Vector2f(height, 2));
    line_y.setPosition(width / 2, 0 + pos_y);
    line_y.rotate(90);
    line_y.setFillColor(Color::Black);
    window.draw(line_y);
}

int pos_y_obl = 0, zoom;

bool check_point (double coord_x, double coord_y) {
    coord_x += pos_x;
    coord_y += pos_y_obl;
    coord_x = coord_x / unit;
    coord_y = coord_y / unit;
    bool rectangle = coord_x < 1 && coord_x > 0.5 && coord_y < -3.5 && coord_y > -6;//inside
    bool romb = 2 * fabs(coord_y - 1) + fabs(coord_x + 2) < 1;//inside
    bool circle = (coord_y - 3.5) * (coord_y - 3.5) + (coord_x - 5) * (coord_x - 5) < 6.25;//inside
    bool vert_parabola = 9 * coord_y > 10 * coord_x * coord_x - 110 * coord_x + 298;//inside
    bool down_parabola = 2 * coord_x > 3 * coord_y * coord_y + 6 * coord_y + 4;//inside
    bool up_parabola = 2 * coord_x > 3 * coord_y * coord_y - 24 * coord_y + 42;//inside
    bool right_line = coord_y < -3 * coord_x + 5;//left
    bool left_line = coord_y < 4 * coord_x + 13;//right
    bool ans_1 = (left_line && right_line && !romb && !rectangle && !down_parabola && !up_parabola);
    bool ans_2 = (up_parabola && !(left_line && right_line) && right_line);
    bool ans_3 = up_parabola && circle && !(circle && vert_parabola);
    bool ans_4 = up_parabola && !circle && vert_parabola;
    bool ans_5 = coord_y >= 0 && coord_x >= 0 && coord_x <= 8 && !up_parabola & !down_parabola && !vert_parabola;
    bool ans_6 = !down_parabola && !circle && vert_parabola;
    return ans_1 || ans_2 || ans_3 || ans_4 || ans_5 || ans_6;
}

bool point (double coord_x, double coord_y) {
    coord_x += pos_x;
    coord_y += pos_y_obl;
    coord_x = coord_x / unit;
    coord_y = coord_y / unit;
    return coord_x >= (point_x - 0.05) && coord_x <= (point_x + 0.05) && coord_y >= (point_y - 0.05) && coord_y <= (point_y + 0.05);
}

void zoom_view(int size_w, int size_h){
	if (Keyboard::isKeyPressed(Keyboard::E) && zoom > 0) {
		view.zoom(1.0200f);
        --zoom;
	}
    if (Keyboard::isKeyPressed(Keyboard::R) && zoom < 100) {
        view.zoom(0.98f);
        ++zoom;
    }
	if (Keyboard::isKeyPressed(Keyboard::T)) {
		view.setSize(size_w, size_h);
        zoom = 0;
	}
}

int main() {
    Clock clock;
    int half_width, half_heigth;
    Vector2u Width2_;
    sf::Texture texture;
    texture.create(width, height);
    sprite.setTexture(texture);
    for (int i = 0; i < width * height * 4; i += 4) {
        pixels[i] = 0;
        pixels[i + 1] = 0;
        pixels[i + 2] = 0;
        pixels[i + 3] = 0;
        if (check_point((((i / 4) % width) - width / 2), (height / 2 - ((i / 4) / width)))) {
            pixels[i] = 100;
            pixels[i + 1] = 100;
            pixels[i + 2] = 100;
            pixels[i + 3] = 100;
        }
    }
    texture.update(pixels);
    view.reset(sf::FloatRect(0, 0, width, height));
    float size_frame = 0;
    window.clear(Color::White);
    window.draw(sprite);
    draw_line();
    window.display();

    while (window.isOpen()) {
        float time = clock.getElapsedTime().asMicroseconds();
        clock.restart();
        time = time / 800;

        Width2_ = window.getSize();
        width_c = Width2_.x;
        height_c = Width2_.y;
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            zoom_view(width, height);
            window.setView(view);
            window.clear(Color::White);
            for (int i = 0; i < width_c * height_c * 4; i += 4) {
                pixels[i] = 0;
                pixels[i + 1] = 0;
                pixels[i + 2] = 0;
                pixels[i + 3] = 0;
                if (check_point((((i / 4) % width_c) - width_c / 2), (height_c / 2 - ((i / 4) / width_c)))) {
                    pixels[i] = 100;
                    pixels[i + 1] = 100;
                    pixels[i + 2] = 100;
                    pixels[i + 3] = 100;
                }
                if (point((((i / 4) % width_c) - width_c / 2), (height_c / 2 - ((i / 4) / width_c)))) {
                    pixels[i] = 100;
                    pixels[i + 1] = 0;
                    pixels[i + 2] = 0;
                    pixels[i + 3] = 255;
                }
            }
            texture.update(pixels);
            window.draw(sprite);
            draw_line();
            window.display();
        }
    }
}
