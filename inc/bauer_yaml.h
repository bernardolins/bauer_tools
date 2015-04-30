#ifndef _BAUERYAML_
#define _BAUERYAML_

#include "yaml-cpp/yaml.h"
#include <iostream>
#include <vector>

namespace bauer {

typedef YAML::Node bauer_yaml_node;

class bauer_yaml {
    private:
        bauer_yaml_node root_node;
        std::string path;
    public:
        void load_yaml(std::string path);
        bauer_yaml_node get_key(std::string key);
        bauer_yaml_node get_subkey_of(std::string key, std::string subkey);
        std::vector<bauer_yaml_node>get_subnode_list(std::string key);
};
}

#endif
