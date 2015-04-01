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
    ASSERT_TRUE(bauer::tools::bauer_yaml::load_yaml("test.yml"));
}
