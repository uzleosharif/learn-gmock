

#ifndef SDLC_HANDLER_H
#define SDLC_HANDLER_H

#include <iostream>
#include <memory>

#include "SDLCIfaceImpl.h"

class SdlcHandler {
public:
  void SetIface(std::shared_ptr<SdlcIface> sdlc_iface) {
    sdlc_iface_ = std::move(sdlc_iface);
  }

  [[nodiscard]] auto PatchExtendTime() const noexcept -> bool {
    auto result{sdlc_iface_->PatchExtendTime(23.33)};
    if (result != ESdlcStatus::kOk) {
      std::cerr << "Error\n";
      return false;
    }
    std::cout << "handler patched\n";
    return true;
  }

private:
  std::shared_ptr<SdlcIface> sdlc_iface_{nullptr};
};

#endif
