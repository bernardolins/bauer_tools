#include "bauer_yaml.h"

void bauer::tools::bauer_yaml::load_yaml(std::string path) {
     node = YAML::LoadFile(path);
     //std::cout << node.as<std::string>();
}

/*list<std::string> bauer::tools::bauer_yaml::get_workers_list() {
        
}*/
