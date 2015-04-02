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
    bauer::tools::bauer_yaml yaml;
    ASSERT_NO_THROW(yaml.load_yaml("files/test.yml"));
    ASSERT_ANY_THROW(yaml.load_yaml("files/nofile.yml"));
}

TEST_F(yaml_test, get_key) {
    bauer::tools::bauer_yaml yaml;
    yaml.load_yaml("files/test.yml");

    ASSERT_EQ(yaml.get_key("key1").as<std::string>(), "value1");
}

