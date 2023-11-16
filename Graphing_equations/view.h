#include <SFML/Graphics.hpp>
using namespace sf;
sf::View view;//объ€вили sfml объект "вид", который и €вл€етс€ камерой

int move_x = 0;
int move_y = 0;

void draw_fill(int max_x, int max_y) {
    for (int ii = 0; ii <= max_y; ii += 20) { // горизонтальные
        sf::RectangleShape line(sf::Vector2f(max_x, 1));
        line.setPosition(move_x, ii + move_y);
        line.setFillColor(Color::Black);
        line.rotate(0);
        window.draw(line);
    }

    for (int jj = 0; jj <= max_x; jj += 20) { // вертикальые
        sf::RectangleShape line(sf::Vector2f(max_y, 1));
        line.setPosition(jj + move_x, move_y);
        line.setFillColor(Color::Black);
        line.rotate(90);
        window.draw(line);
    }
    
}

int zoom = 0;
int move_y_obl = 0;

bool cheking2_(double x_coord, double y_coord) {
    x_coord += move_x;
    y_coord += move_y_obl;
    x_coord /= 20.0;
    y_coord /= 20.0;
    bool up_line = 4 * y_coord < -1 * x_coord + 13;
    bool down_line = 3 * y_coord > x_coord - 5;
    bool down_parabola = 2 * y_coord > -3 * x_coord * x_coord - 6 * x_coord - 4;
    bool up_parabola = 2 * y_coord > -3 * x_coord * x_coord + 24 * x_coord - 42;
    bool romb = 2 * fabs(x_coord - 1) + fabs(y_coord - 2) > 1;
    bool circle = (x_coord - 3.5) * (x_coord - 3.5) + (y_coord + 5) * (y_coord + 5) < 6.25;
    bool goriz_parabola = 9 * x_coord > 10 * y_coord * y_coord + 110 * y_coord + 298;
    bool priamoyg = x_coord < -3.5 && x_coord > -6 && y_coord < -0.5 && y_coord > -1;
    bool ans = (!up_parabola && ! circle && goriz_parabola) || (!down_line && !circle && !goriz_parabola && down_parabola && up_parabola && x_coord > 0 && x_coord < 5) || (y_coord < 0 && up_parabola && !goriz_parabola && x_coord > 5 && y_coord > -5) ||(down_line && up_line && down_parabola && up_parabola && romb && !priamoyg) || (circle && !up_parabola && !goriz_parabola) || (!up_line && !up_parabola);
    return ans;
}



void coord_pl(int wid, int hei, int half_wif, int half_hei) {
        sf::RectangleShape line(sf::Vector2f(wid, 2));
        line.setPosition(0 + move_x, half_hei);
        line.setFillColor(Color::Red);
        line.rotate(0);
        window.draw(line);

        sf::RectangleShape line2(sf::Vector2f(hei, 2));
        line2.setPosition(half_wif, 0 + move_y);
        line2.setFillColor(Color::Red);
        line2.rotate(90);
        window.draw(line2);
}



void viewmap(float time) { //функци€ дл€ перемещени€ камеры по карте. принимает врем€ sfml

    

	if (Keyboard::isKeyPressed(Keyboard::D)) {
		view.move(20, 0);//скроллим карту вправо (см урок, когда мы двигали геро€ - всЄ тоже самое)
        move_x += 20;
        sprite.move(20, 0);
	}
 
	if (Keyboard::isKeyPressed(Keyboard::S)) {
		view.move(0, 20);//скроллим карту вниз (см урок, когда мы двигали геро€ - всЄ тоже самое)
        move_y_obl -= 20;
        move_y += 20;
        sprite.move(0, 20);
	}
 
	if (Keyboard::isKeyPressed(Keyboard::A)) {
		view.move(-20, 0);//скроллим карту влево (см урок, когда мы двигали геро€ - всЄ тоже самое)
        move_x -= 20;
        sprite.move(-20, 0);
	}
    
	if (Keyboard::isKeyPressed(Keyboard::W)) {
		view.move(0, -20);//скроллим карту вправо (см урок, когда мы двигали геро€ - всЄ тоже самое)
        move_y_obl += 20;
        move_y -= 20;
        sprite.move(0, -20);
	}
    

}
 
void changeview(int wid, int hei){
 
 
	if (Keyboard::isKeyPressed(Keyboard::U) && zoom > 0) {
		view.zoom(1.0100f); //масштабируем, уменьшение
        --zoom;
	}
 
	if (Keyboard::isKeyPressed(Keyboard::I)) {
		view.setSize(wid, hei);//устанавливает размер камеры (наш исходный)
        zoom = 0;
	}

    if (Keyboard::isKeyPressed(Keyboard::Y) && zoom < 80) {
        view.zoom(0.99f);//масштабируем, увеличение
        ++zoom;
    }
 
}

