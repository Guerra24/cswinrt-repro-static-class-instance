#include "pch.h"
#include "BarInfo.h"
#include "BarInfo.g.cpp"

namespace winrt::RuntimeComponent1::implementation
{
    winrt::hstring BarInfo::Something()
    {
        return L"Default Value";
    }
}