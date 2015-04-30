#include "bauer_yaml.h"

void bauer::bauer_yaml::load_yaml(std::string path) {
    this->root_node = YAML::LoadFile(path);
    this->path = path;
}

bauer::bauer_yaml_node bauer::bauer_yaml::get_key(std::string key) {
    return this->root_node[key];
}

bauer::bauer_yaml_node bauer::bauer_yaml::get_subkey_of(std::string key, std::string subkey) {
    return this->root_node[key][subkey];
      
}

std::vector<bauer::bauer_yaml_node> bauer::bauer_yaml::get_subnode_list(std::string subkey) {
    std::vector<bauer::bauer_yaml_node> key_list;

    for(std::size_t i = 0; i != root_node[subkey].size(); i++) {
        key_list.push_back(root_node[i]);
    }
    
    return key_list;
}
