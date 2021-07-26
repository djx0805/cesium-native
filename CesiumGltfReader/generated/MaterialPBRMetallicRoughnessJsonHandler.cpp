// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#include "MaterialPBRMetallicRoughnessJsonHandler.h"
#include "CesiumGltf/MaterialPBRMetallicRoughness.h"

#include <cassert>
#include <string>

using namespace CesiumGltf;

MaterialPBRMetallicRoughnessJsonHandler::
    MaterialPBRMetallicRoughnessJsonHandler(
        const ReaderContext& context) noexcept
    : ExtensibleObjectJsonHandler(context),
      _baseColorFactor(),
      _baseColorTexture(context),
      _metallicFactor(),
      _roughnessFactor(),
      _metallicRoughnessTexture(context) {}

void MaterialPBRMetallicRoughnessJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    MaterialPBRMetallicRoughness* pObject) {
  ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
MaterialPBRMetallicRoughnessJsonHandler::readObjectKey(
    const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyMaterialPBRMetallicRoughness(
      MaterialPBRMetallicRoughness::TypeName,
      str,
      *this->_pObject);
}

CesiumJsonReader::IJsonHandler* MaterialPBRMetallicRoughnessJsonHandler::
    readObjectKeyMaterialPBRMetallicRoughness(
        const std::string& objectType,
        const std::string_view& str,
        MaterialPBRMetallicRoughness& o) {
  using namespace std::string_literals;

  if ("baseColorFactor"s == str)
    return property(
        "baseColorFactor",
        this->_baseColorFactor,
        o.baseColorFactor);
  if ("baseColorTexture"s == str)
    return property(
        "baseColorTexture",
        this->_baseColorTexture,
        o.baseColorTexture);
  if ("metallicFactor"s == str)
    return property("metallicFactor", this->_metallicFactor, o.metallicFactor);
  if ("roughnessFactor"s == str)
    return property(
        "roughnessFactor",
        this->_roughnessFactor,
        o.roughnessFactor);
  if ("metallicRoughnessTexture"s == str)
    return property(
        "metallicRoughnessTexture",
        this->_metallicRoughnessTexture,
        o.metallicRoughnessTexture);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}