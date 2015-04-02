#include "gtest/gtest.h"
#include "bauer_yaml.h"

class yaml_test : public ::testing::Test {
    protected:
    virtual void SetUp() {
        
    }

    virtual void TearDown() {
    
    }
};

TEST_F(yaml_test, load_yaml) {
    ASSERT_NO_THROW(bauer::tools::bauer_yaml::load_yaml("files/test.yml"));
}
