#pragma once

#include "Game.h"
#include <string>
#include <memory>

namespace cc {
    class View;
};

class AppDelegage {
public:
    AppDelegage(const std::string &name, int width, int height);

    void start();

private:
    std::shared_ptr<Game> _game;
    std::shared_ptr<cc::View> _view;
    
    bool _quit = false;
};