#include "gtest/gtest.h"
#include "bauer_thread.h"

class thread_test : public ::testing::Test {
    protected:
    virtual void SetUp() {
        
    }

    virtual void TearDown() {
    
    }
};

TEST_F(thread_test, should_start_thread) {
	bauer::bauer_thread* thread = new bauer::bauer_thread();
	ASSERT_NO_THROW(thread->start());
}
