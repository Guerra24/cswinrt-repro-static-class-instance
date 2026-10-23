#include "pch.h"
#include "Bar.h"
#include "Bar.g.cpp"
#include "BarInfo.h"
#include "BarInfoChangedEventArgs.h"

namespace winrt::RuntimeComponent1::implementation
{

    RuntimeComponent1::BarInfo Bar::GetBarInfo()
    {
        return winrt::make<winrt::RuntimeComponent1::implementation::BarInfo>();
    }

    winrt::event_token Bar::BarInfoChanged(Windows::Foundation::EventHandler<RuntimeComponent1::BarInfoChangedEventArgs> const& handler)
    {
        return GetInstance().m_barInfoChangedEvent.add(handler);
    }

    void Bar::BarInfoChanged(winrt::event_token const& token)
    {
        GetInstance().m_barInfoChangedEvent.remove(token);
    }

    void Bar::FireEvent()
    {
        auto& instance = GetInstance();

        auto args = winrt::make<winrt::RuntimeComponent1::implementation::BarInfoChangedEventArgs>();

        auto sender = winrt::make<winrt::RuntimeComponent1::factory_implementation::Bar>();

        instance.m_barInfoChangedEvent(sender, args);
    }
}
