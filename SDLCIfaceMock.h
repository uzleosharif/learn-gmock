
#ifndef SDLCIFACEMOCK_H
#define SDLCIFACEMOCK_H

#include "SDLCIface.h"
#include "gmock/gmock.h"

class SdlcIfaceMock : public SdlcIface {
public:
  MOCK_METHOD(ESdlcStatus, PatchExtendTime, (float extend_time), (noexcept));
};

#endif
