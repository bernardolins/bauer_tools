#include "bauer_yaml.h"

void bauer::tools::bauer_yaml::load_yaml(std::string path) {
     this->node = YAML::LoadFile(path);
     this->path = path;
}

list<std::string> bauer::tools::bauer_yaml::load_workers_list() {
       if(this->node) {
       
       } 
}
