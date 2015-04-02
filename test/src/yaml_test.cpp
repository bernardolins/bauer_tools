#include "gtest/gtest.h"
#include "bauer_yaml.h"

class yaml_test : public ::testing::Test {
    protected:
    virtual void SetUp() {
        
    }

    virtual void TearDown() {
    
    }
};

TEST_F(yaml_test, should_load_yaml) {
    bauer::tools::bauer_yaml yaml;
    ASSERT_NO_THROW(yaml.load_yaml("files/test.yml"));
}

TEST_F(yaml_test, should_raise_exception_when_yml_not_found) {
    bauer::tools::bauer_yaml yaml;
    ASSERT_ANY_THROW(yaml.load_yaml("files/nofile.yml"));
}

TEST_F(yaml_test, should_get_value_of_key) {
    bauer::tools::bauer_yaml yaml;
    yaml.load_yaml("files/test.yml");

    ASSERT_EQ(yaml.get_key("key1").as<std::string>(), "value1");
}

TEST_F(yaml_test, should_get_not_defined_when_key_not_found) {
    bauer::tools::bauer_yaml yaml;
    yaml.load_yaml("files/test.yml");

    ASSERT_FALSE(yaml.get_key("invalid_key").IsDefined());
}

TEST_F(yaml_test, should_get_subkey) {
    bauer::tools::bauer_yaml yaml;
    yaml.load_yaml("files/test.yml");


   ASSERT_EQ(yaml.get_subkey_of("key_with_subkey", "subkey1").as<std::string>(), "subvalue1");

}
