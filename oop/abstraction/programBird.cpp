#include "bird.h"
#include <iostream>
using namespace std;

void birdDoing(Bird *bird)
{
    bird->eat();
    bird->fly();
}

int main() {
    Bird* pigeon = new Penguin();
    Bird* eagle = new Eagle();
    birdDoing(pigeon);
    birdDoing(eagle);
}