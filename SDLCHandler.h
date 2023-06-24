

#ifndef SDLC_HANDLER_H
#define SDLC_HANDLER_H

#include <iostream>
#include <memory>

#include "SDLCIfaceImpl.h"

class SdlcHandler {
public:
  void PatchExtendTime() const noexcept {
    auto result{sdlc_iface_->PatchExtendTime(23.33)};
    if (result != ESdlcStatus::kOk) {
      std::cerr << "Error\n";
    }
    std::cout << "handler patched\n";
  }

private:
  std::unique_ptr<SdlcIface> sdlc_iface_{std::make_unique<SdlcIfaceImpl>()};
};

#endif
