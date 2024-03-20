#include "RE/B/BSInputDevice.h"

namespace RE
{
	BSInputDevice::~BSInputDevice() {}

	bool BSInputDevice::GetKeyMapping([[maybe_unused]] std::uint32_t a_key, [[maybe_unused]] BSFixedString& a_mapping)
	{
		// Dummy implementation, always return false
		return false;
	}

	std::uint32_t BSInputDevice::GetMappingKey([[maybe_unused]] BSFixedString a_mapping)
	{
		// Dummy implementation, always return 0
		return 0;
	}

	bool BSInputDevice::GetMappedKeycode([[maybe_unused]] std::uint32_t a_key, [[maybe_unused]] std::uint32_t& outKeyCode)
	{
		// Dummy implementation, always return false
		return false;
	}

	bool BSInputDevice::IsEnabled() const
	{
		// Dummy implementation, always return true
		return true;
	}
}
