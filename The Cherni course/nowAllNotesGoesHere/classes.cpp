#include <iostream>

class Player
{
public:
    int x = 0;
    int y, speed;

    void move(int x, int y)
    {
        this->x += x * speed;
        this->y += y * speed;
    }
};

int main()
{

    // Instantiate a object of Player class

    Player player;
    std::cout << player.x << std::endl;
    player.x = 10;
    player.y = 10;
    player.speed = 2;
    player.move(1, -1);
    std::cout << "X: " << player.x << " "
              << "Y: " << player.y << std::endl;

    // Class encapsulates data and the functions that process that data
    // we can do all things without classes
    // but classes makes code more mainatinable
}