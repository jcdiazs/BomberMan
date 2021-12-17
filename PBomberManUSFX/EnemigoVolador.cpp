#include "EnemigoVolador.h"

EnemigoVolador::EnemigoVolador(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer)
    : Enemy(_texture, _renderer)
{

}