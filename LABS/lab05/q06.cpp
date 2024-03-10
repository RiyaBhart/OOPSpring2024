#include <iostream>
#include <string>

using namespace std;

class GraphicRenderEngine {
public:
    void renderGraphics() {
        cout << "Rendering graphics..." << endl;
    }
};

class InputHandler {
public:
    void handleInput() {
        cout << "Handling input..." << endl;
    }
};

class PhysicsEngine {
public:
    void simulatePhysics() {
        cout << "Simulating physics..." << endl;
    }
};

class GameEngine {
private:
    GraphicRenderEngine graphicsEngine;
    InputHandler inputHandler;
    PhysicsEngine physicsEngine;

public:
    void start() {
        cout << "Starting the game engine..." << endl;
        graphicsEngine.renderGraphics();
        inputHandler.handleInput();
        physicsEngine.simulatePhysics();
        cout << "Game engine started successfully!" << endl;
    }
};

int main() {
    cout << "\nProgrammer : Riya Bhart\n Roll ID : 23k-0063\n"
         << endl;
    GameEngine gameEngine;
    gameEngine.start();
    return 0;
}
