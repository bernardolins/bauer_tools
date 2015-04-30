#include "gtest/gtest.h"
#include "bauer_exception.h"

class exception_test : public ::testing::Test {
    protected:
    virtual void SetUp() {
        
    }

    virtual void TearDown() {
    
    }

    public:
    static void throw_bauer_exception() {
        throw bauer::bauer_exception(); 
            
    }
};

TEST_F(exception_test, should_throw_bauer_exception) {
   ASSERT_THROW(exception_test::throw_bauer_exception(), bauer::bauer_exception);
}
