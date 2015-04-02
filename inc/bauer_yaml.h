#ifndef _BAUERYAML_
#define _BAUERYAML_

#include "yaml-cpp/yaml.h"
#include <iostream>

enum yaml_nodes {
    worker_list = "worker_list"
};

namespace bauer {
    namespace tools {
        class bauer_yaml {
            private:
                YAML::Node node;
            public:
                bauer_yaml(std::string path);
                //static bool load_yaml(std::string path);
                void get_worker_list 
        };
    }
}

#endif
