#ifndef _BAUERYAML_
#define _BAUERYAML_

#include "yaml-cpp/yaml.h"
#include <iostream>

namespace bauer {
    namespace tools {
        class bauer_yaml {
            private:
            public:
                static bool load_yaml(std::string path);
        };
    }
}

#endif
