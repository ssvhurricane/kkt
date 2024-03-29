// TODO: Standard GL Shader Type.
#pragma once

#include <glad/glad.h>

#include "../../../KKTEngine.h"
#include "../../Base/IShader.h"
#include "../../../CoreLayer/LogSystem/LogSystem.h"

#include <glad/glad.h>
#include <glm/glm.hpp>

namespace Engine {
namespace RenderSystem {
class StandardGLShader : public IShader
{
    // TODO:
private:

    void CheckCompileErrors(unsigned int shader, std::string type);

public: 

    unsigned int ID; // TODO

    StandardGLShader(const std::string vShaderCode, const std::string fShaderCode);
   
    void Use();

    void SetBool(const std::string &name, bool value) const;  

    void SetInt(const std::string &name, int value) const;  

    void SetFloat(const std::string &name, float value) const;

    void SetVec2(const std::string& name, const glm::vec2& value) const;
    
    void SetVec2(const std::string& name, float x, float y) const;
    
    void SetVec3(const std::string& name, const glm::vec3& value) const;
   
    void SetVec3(const std::string& name, float x, float y, float z) const;
   
    void SetVec4(const std::string& name, const glm::vec4& value) const;
   
    void SetVec4(const std::string& name, float x, float y, float z, float w) const;
    
    void SetMat2(const std::string& name, const glm::mat2& mat) const;
   
    void SetMat3(const std::string& name, const glm::mat3& mat) const;
   
    void SetMat4(const std::string& name, const glm::mat4& mat) const;
   
};

} // namespace RenderSystem
} // namespace Engine