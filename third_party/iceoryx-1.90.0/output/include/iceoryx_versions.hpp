#ifndef __ICEORYXVERSIONS__
#define __ICEORYXVERSIONS__

#define ICEORYX_VERSION_MAJOR    1
#define ICEORYX_VERSION_MINOR    90
#define ICEORYX_VERSION_PATCH    0
#define ICEORYX_VERSION_TWEAK    0

#define ICEORYX_LATEST_RELEASE_VERSION    "1.90.0"
#define ICEORYX_BUILDDATE                 "2024-03-26T01:59:33Z"
#define ICEORYX_SHA1                      "564831a573f3c31444c6a9b34865310a9b87e08f-dirty"

#include "iceoryx_posh/internal/log/posh_logging.hpp"

#define ICEORYX_PRINT_BUILDINFO()     iox::LogInfo() << "Built: " << ICEORYX_BUILDDATE;


#endif
