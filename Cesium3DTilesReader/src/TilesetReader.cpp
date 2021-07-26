// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!

#include <Cesium3DTiles/TilesetReader.h>

namespace Cesium3DTiles {
/////////////////////////////////////////
// Implementation of AssetJsonHandler
/////////////////////////////////////////

AssetJsonHandler::AssetJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context)
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _version(),
      _tilesetVersion() {}

void AssetJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    Asset* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
AssetJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyAsset(Asset::TypeName, str, *this->_pObject);
}

CesiumJsonReader::IJsonHandler* AssetJsonHandler::readObjectKeyAsset(
    [[maybe_unused]] const std::string& objectType,
    const std::string_view& str,
    [[maybe_unused]] Asset& o) {
  using namespace std::string_literals;
  if ("version"s == str)
    return property("version", this->_version, o.version);

  if ("tilesetVersion"s == str)
    return property("tilesetVersion", this->_tilesetVersion, o.tilesetVersion);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}

/////////////////////////////////////////
// Implementation of BoundingVolumeJsonHandler
/////////////////////////////////////////

BoundingVolumeJsonHandler::BoundingVolumeJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context)
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _box(),
      _region(),
      _sphere() {}

void BoundingVolumeJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    BoundingVolume* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
BoundingVolumeJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyBoundingVolume(
      BoundingVolume::TypeName,
      str,
      *this->_pObject);
}

CesiumJsonReader::IJsonHandler*
BoundingVolumeJsonHandler::readObjectKeyBoundingVolume(
    [[maybe_unused]] const std::string& objectType,
    const std::string_view& str,
    [[maybe_unused]] BoundingVolume& o) {
  using namespace std::string_literals;
  if ("box"s == str)
    return property("box", this->_box, o.box);

  if ("region"s == str)
    return property("region", this->_region, o.region);

  if ("sphere"s == str)
    return property("sphere", this->_sphere, o.sphere);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}

/////////////////////////////////////////
// Implementation of TileContentJsonHandler
/////////////////////////////////////////

TileContentJsonHandler::TileContentJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context)
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _boundingVolume(context),
      _uri() {}

void TileContentJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    TileContent* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
TileContentJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyTileContent(
      TileContent::TypeName,
      str,
      *this->_pObject);
}

CesiumJsonReader::IJsonHandler*
TileContentJsonHandler::readObjectKeyTileContent(
    [[maybe_unused]] const std::string& objectType,
    const std::string_view& str,
    [[maybe_unused]] TileContent& o) {
  using namespace std::string_literals;
  if ("boundingVolume"s == str)
    return property("boundingVolume", this->_boundingVolume, o.boundingVolume);

  if ("uri"s == str)
    return property("uri", this->_uri, o.uri);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}

/////////////////////////////////////////
// Implementation of TileJsonHandler
/////////////////////////////////////////

TileJsonHandler::TileJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context)
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _boundingVolume(context),
      _viewerRequestVolume(context),
      _geometricError(),
      _refine(),
      _transform(),
      _content(context),
      _children(context) {}

void TileJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    Tile* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
TileJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyTile(Tile::TypeName, str, *this->_pObject);
}

CesiumJsonReader::IJsonHandler* TileJsonHandler::readObjectKeyTile(
    [[maybe_unused]] const std::string& objectType,
    const std::string_view& str,
    [[maybe_unused]] Tile& o) {
  using namespace std::string_literals;
  if ("boundingVolume"s == str)
    return property("boundingVolume", this->_boundingVolume, o.boundingVolume);

  if ("viewerRequestVolume"s == str)
    return property(
        "viewerRequestVolume",
        this->_viewerRequestVolume,
        o.viewerRequestVolume);

  if ("geometricError"s == str)
    return property("geometricError", this->_geometricError, o.geometricError);

  if ("refine"s == str)
    return property("refine", this->_refine, o.refine);

  if ("transform"s == str)
    return property("transform", this->_transform, o.transform);

  if ("content"s == str)
    return property("content", this->_content, o.content);

  if ("children"s == str)
    return property("children", this->_children, o.children);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}

/////////////////////////////////
// Implementation of enum TileJsonHandler::RefineJsonHandler
/////////////////////////////////

void TileJsonHandler::RefineJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParent,
    Tile::Refine* pEnum) {
  CesiumJsonReader::JsonHandler::reset(pParent);
  this->_pEnum = pEnum;
}

CesiumJsonReader::IJsonHandler*
TileJsonHandler::RefineJsonHandler::readString(const std::string_view& str) {
  using namespace std::string_literals;

  assert(this->_pEnum);

  if ("ADD"s == str) {
    *this->_pEnum = Tile::Refine::ADD;
    return this->parent();
  }
  if ("REPLACE"s == str) {
    *this->_pEnum = Tile::Refine::REPLACE;
    return this->parent();
  }

  return nullptr;
}
/////////////////////////////////////////
// Implementation of TilesetPropertiesJsonHandler
/////////////////////////////////////////

TilesetPropertiesJsonHandler::TilesetPropertiesJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context)
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _maximum(),
      _minimum() {}

void TilesetPropertiesJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    TilesetProperties* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
TilesetPropertiesJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyTilesetProperties(
      TilesetProperties::TypeName,
      str,
      *this->_pObject);
}

CesiumJsonReader::IJsonHandler*
TilesetPropertiesJsonHandler::readObjectKeyTilesetProperties(
    [[maybe_unused]] const std::string& objectType,
    const std::string_view& str,
    [[maybe_unused]] TilesetProperties& o) {
  using namespace std::string_literals;
  if ("maximum"s == str)
    return property("maximum", this->_maximum, o.maximum);

  if ("minimum"s == str)
    return property("minimum", this->_minimum, o.minimum);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}

/////////////////////////////////////////
// Implementation of TilesetJsonHandler
/////////////////////////////////////////

TilesetJsonHandler::TilesetJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context)
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _asset(context),
      _properties(context),
      _geometricError(),
      _root(context),
      _extensionsUsed(),
      _extensionsRequired() {}

void TilesetJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    Tileset* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
TilesetJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyTileset(Tileset::TypeName, str, *this->_pObject);
}

CesiumJsonReader::IJsonHandler* TilesetJsonHandler::readObjectKeyTileset(
    [[maybe_unused]] const std::string& objectType,
    const std::string_view& str,
    [[maybe_unused]] Tileset& o) {
  using namespace std::string_literals;
  if ("asset"s == str)
    return property("asset", this->_asset, o.asset);

  if ("properties"s == str)
    return property("properties", this->_properties, o.properties);

  if ("geometricError"s == str)
    return property("geometricError", this->_geometricError, o.geometricError);

  if ("root"s == str)
    return property("root", this->_root, o.root);

  if ("extensionsUsed"s == str)
    return property("extensionsUsed", this->_extensionsUsed, o.extensionsUsed);

  if ("extensionsRequired"s == str)
    return property(
        "extensionsRequired",
        this->_extensionsRequired,
        o.extensionsRequired);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}

/////////////////////////////////////////
// Implementation of TilesetJsonHandler::PropertiesJsonHandler
/////////////////////////////////////////

TilesetJsonHandler::PropertiesJsonHandler::PropertiesJsonHandler(
    const CesiumJsonReader::ExtensionReaderContext& context)
    : CesiumJsonReader::ExtensibleObjectJsonHandler(context),
      _additionalProperties(context) {}

void TilesetJsonHandler::PropertiesJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    Tileset::Properties* pObject) {
  CesiumJsonReader::ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
  this->_additionalProperties.reset(
      pParentHandler,
      &pObject->additionalProperties);
}

CesiumJsonReader::IJsonHandler*
TilesetJsonHandler::PropertiesJsonHandler::readObjectKey(
    const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeyProperties(
      Tileset::Properties::TypeName,
      str,
      *this->_pObject);
}

CesiumJsonReader::IJsonHandler*
TilesetJsonHandler::PropertiesJsonHandler::readObjectKeyProperties(
    [[maybe_unused]] const std::string& objectType,
    const std::string_view& str,
    [[maybe_unused]] Tileset::Properties& o) {
  using namespace std::string_literals;
  return this->_additionalProperties.readObjectKey(str);
}

} // namespace Cesium3DTiles