#pragma once

#include "map"

#include "../../KKTEngine.h"

#include "base_context/ISystem.h"
#include "base_context/Defines.h"

#include "Base/ESceneType.h"
#include "Base/IScene.h"

namespace Engine {
namespace SceneSystem {
#if defined _WIN32
class ENGINE_API SceneSystem : public ISystem
#elif defined __APPLE__  || defined __linux__
class SceneSystem : public ISystem
#endif
{
private: 

   std::map<ESceneType, IScene*> _scenes;

public:

    SceneSystem();

    void Initialize();
   
    void CreateSceneByName(std::string name, ESceneType eSceneType = ESceneType::BasicScene);

    IScene* GetSceneByName(std::string);

    int GetSceneId(std::string);

    IScene* GetCurrentScene();
};

} // namespace SceneSystem
} // namespace Engine