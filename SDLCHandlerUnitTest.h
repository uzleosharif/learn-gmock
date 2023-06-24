

#ifndef SDLCHANDLER_UNITTEST_H
#define SDLCHANDLER_UNITTEST_H

#include "SDLCHandler.h"
#include "SDLCIface.h"
#include "SDLCIfaceMock.h"
#include "gtest/gtest.h"

class SdlcHandlerTest : public ::testing::Test {
protected:
  SdlcHandler sdlc_handler_{};
  std::shared_ptr<SdlcIfaceMock> sdlciface_mock_{
      std::make_shared<SdlcIfaceMock>()};

  auto SetUp() -> void override { sdlc_handler_.SetIface(sdlciface_mock_); }
};

#endif
