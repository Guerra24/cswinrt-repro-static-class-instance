
var info = RuntimeComponent1.Bar.GetBarInfo();

RuntimeComponent1.Bar.BarInfoChanged += (s, e) =>
{

};

RuntimeComponent1.Bar.FireEvent();
