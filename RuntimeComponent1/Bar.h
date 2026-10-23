#pragma once
#include "Bar.g.h"

namespace winrt::RuntimeComponent1::implementation
{
    struct Bar
    {
        Bar() = default;

        static RuntimeComponent1::BarInfo GetBarInfo();
        static winrt::event_token BarInfoChanged(winrt::Windows::Foundation::EventHandler<RuntimeComponent1::BarInfoChangedEventArgs> const& handler);
        static void BarInfoChanged(winrt::event_token const& token);
        static void FireEvent();

    private:
        static Bar& GetInstance()
        {
            static Bar instance;
            return instance;
        }

        winrt::event<Windows::Foundation::EventHandler<RuntimeComponent1::BarInfoChangedEventArgs>> m_barInfoChangedEvent;
    };
}

namespace winrt::RuntimeComponent1::factory_implementation
{
    struct Bar : BarT<Bar, implementation::Bar>
    {};
}