

#include "SDLCHandlerUnitTest.h"

TEST_F(SdlcHandlerTest, SimpleTest) {
  EXPECT_CALL(*sdlciface_mock_, PatchExtendTime(testing::_))
      .Times(1)
      .WillOnce(testing::Return(ESdlcStatus::kOk));

  auto result{sdlc_handler_.PatchExtendTime()};
  EXPECT_TRUE(result);
}
