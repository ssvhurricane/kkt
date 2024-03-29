// This is non Context System (you can't use distanced services here).
#pragma once

#include "base_context/ISystem.h"
#include "base_context/Defines.h"

#include "../../_Context/EngineContextInstaller.h"

namespace Engine {
namespace StartSystem {
#ifdef _WIN32
class ENGINE_API StartSystem : public ISystem
#else
#ifdef __APPLE__ 
class StartSystem : public ISystem
#endif
#ifdef __linux__
class StartSystem : public ISystem
#endif
#ifdef __EMSCRIPTEN__
class StartSystem : public ISystem
#endif
#endif
{
private:


public:

    StartSystem();

    void Initialize();
};

} // namespace StartSystem
} // namespace Engine