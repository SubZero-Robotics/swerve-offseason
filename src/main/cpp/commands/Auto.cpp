#include "commands/Auto.h"

Auto::Auto(DriveSubsystem* subsystem)
    : m_autonomousCommand{subsystem} {}