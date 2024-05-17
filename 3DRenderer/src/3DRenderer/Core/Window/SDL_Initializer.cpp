#include <3DRenderer/Core/Utils/exceptions.h>
#include <3DRenderer/Core/Window/SDL_Initializer.h>
#include <SDL2/SDL.h>

namespace r3d {

SDL_Initializer::SDL_Initializer() {
    if (SDL_InitSubSystem(SDL_INIT_EVENTS | SDL_INIT_VIDEO) != 0) {
        throw InitializationException{std::source_location::current()};
    }
}

SDL_Initializer::~SDL_Initializer() { SDL_Quit(); }

} // namespace r3d
