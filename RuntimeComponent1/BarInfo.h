#pragma once
#include "BarInfo.g.h"

namespace winrt::RuntimeComponent1::implementation
{
    struct BarInfo : BarInfoT<BarInfo>
    {
        BarInfo() = default;

        winrt::hstring Something();
    };
}
