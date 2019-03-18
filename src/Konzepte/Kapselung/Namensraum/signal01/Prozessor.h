#pragma once
#include "Signal.h"

class Prozessor{
public:
	Signal verarbeiten(const Signal& eingang) const;
};
