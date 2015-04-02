#ifndef _BAUERYAML_
#define _BAUERYAML_

#include "yaml-cpp/yaml.h"
#include <iostream>

namespace bauer {
    namespace tools {
        class bauer_yaml {
            private:
                YAML::Node node;
                std::string path;
            public:
                void load_yaml(std::string path);
                void get_worker_list();
        };
    }
}

#endif
