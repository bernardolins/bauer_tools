#include "bauer_yaml.h"

void bauer::tools::bauer_yaml::load_yaml(std::string path) {
    this->root_node = YAML::LoadFile(path);
    this->path = path;
}

bauer::tools::bauer_yaml_node bauer::tools::bauer_yaml::get_key(std::string key) {
    return this->root_node[key];
}
