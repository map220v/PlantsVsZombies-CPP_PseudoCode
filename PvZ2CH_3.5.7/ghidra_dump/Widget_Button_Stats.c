// Class: Widget_Button_Stats


/* Widget_Button_Stats::~Widget_Button_Stats() */

void __thiscall Widget_Button_Stats::~Widget_Button_Stats(Widget_Button_Stats *this)

{
  FUN_05476c50(this + 0x20);
  return;
}


/* Widget_Button_Stats::Widget_Button_Stats(int, int, int, int, int, int, Sexy::PrimeTypeface*,
   std::wstring) */

void __thiscall
Widget_Button_Stats::Widget_Button_Stats
          (Widget_Button_Stats *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_9)

{
  FUN_05476574(this + 0x20);
  *(int *)this = param_1;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  *(undefined4 *)(this + 0xc) = param_5;
  *(undefined4 *)(this + 0x10) = param_6;
  *(undefined8 *)(this + 0x18) = param_7;
  thunk_FUN_05477b9c(this + 0x20,param_9);
  if (param_2 != 0) {
    param_1 = param_2;
  }
  *(int *)(this + 0x14) = param_1;
  return;
}

