#pragma once

#include "LicenseKey.hpp"

namespace serialkeymanager_com {

class LicenseKey;

class LicenseKeyChecker {
  bool status_;
  LicenseKey const* key_;

public:
  LicenseKeyChecker(LicenseKey const* license_key);

  explicit operator bool() const;

  LicenseKeyChecker& has_feature(int feature);
  LicenseKeyChecker& has_not_feature(int feature);
  LicenseKeyChecker& has_expired(std::uint64_t now);
  LicenseKeyChecker& has_not_expired(std::uint64_t now);
  LicenseKeyChecker& is_blocked();
  LicenseKeyChecker& is_not_blocked();
  LicenseKeyChecker& is_on_right_machine(std::string const& machine_code);
};

} // namespace serialkeymanager_com
