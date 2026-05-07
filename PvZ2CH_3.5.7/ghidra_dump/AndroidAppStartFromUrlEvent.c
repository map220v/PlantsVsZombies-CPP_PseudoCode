// Class: AndroidAppStartFromUrlEvent


/* AndroidAppStartFromUrlEvent::~AndroidAppStartFromUrlEvent() */

void __thiscall
AndroidAppStartFromUrlEvent::~AndroidAppStartFromUrlEvent(AndroidAppStartFromUrlEvent *this)

{
  *(undefined ***)this = &PTR__AndroidAppStartFromUrlEvent_06a32cd0;
  std::string::~string((string *)(this + 0x10));
  return;
}


/* AndroidAppStartFromUrlEvent::~AndroidAppStartFromUrlEvent() */

void __thiscall
AndroidAppStartFromUrlEvent::~AndroidAppStartFromUrlEvent(AndroidAppStartFromUrlEvent *this)

{
  ~AndroidAppStartFromUrlEvent(this);
  AK::FreeHook(this);
  return;
}


/* AndroidAppStartFromUrlEvent::AndroidAppStartFromUrlEvent(std::string) */

void __thiscall
AndroidAppStartFromUrlEvent::AndroidAppStartFromUrlEvent
          (AndroidAppStartFromUrlEvent *this,undefined8 param_2)

{
  AndroidAppEvent::AndroidAppEvent((AndroidAppEvent *)this,2);
  *(undefined ***)this = &PTR__AndroidAppStartFromUrlEvent_06a32cd0;
  FUN_05475d88(this + 0x10,param_2);
  return;
}

