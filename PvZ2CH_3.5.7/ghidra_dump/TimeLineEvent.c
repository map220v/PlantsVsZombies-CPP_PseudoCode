// Class: TimeLineEvent


/* TimeLineEvent::~TimeLineEvent() */

void __thiscall TimeLineEvent::~TimeLineEvent(TimeLineEvent *this)

{
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x38));
  return;
}


void __thiscall TimeLineEvent::~TimeLineEvent(TimeLineEvent *this)

{
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x38));
  return;
}


/* TimeLineEvent::TimeLineEvent(float, Sexy::Delegate1<float>) */

void __thiscall
TimeLineEvent::TimeLineEvent(undefined4 param_1,TimeLineEvent *this,Delegate2 *param_3)

{
  Sexy::Delegate1<float>::Delegate1((DummyInit *)(this + 8));
  RtReflectionDelegate<Sexy::Delegate1<float>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<float>> *)(this + 0x38));
  *(undefined4 *)this = param_1;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 8),param_3);
  return;
}


/* TimeLineEvent::TimeLineEvent(TimeLineEvent const&) */

void __thiscall TimeLineEvent::TimeLineEvent(TimeLineEvent *this,TimeLineEvent *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<float>::Delegate1((Delegate1<float> *)(this + 8),param_1 + 8);
  RtReflectionDelegate<Sexy::Delegate1<float>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<float>> *)(this + 0x38),
             (RtReflectionDelegate *)(param_1 + 0x38));
  return;
}


/* TimeLineEvent::TimeLineEvent(TimeLineEvent&&) */

void __thiscall TimeLineEvent::TimeLineEvent(TimeLineEvent *this,TimeLineEvent *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate1<float>::Delegate1((Delegate1<float> *)(this + 8),param_1 + 8);
  RtReflectionDelegate<Sexy::Delegate1<float>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<float>> *)(this + 0x38),
             (RtReflectionDelegate *)(param_1 + 0x38));
  return;
}


/* TimeLineEvent::TEMPNAMEPLACEHOLDERVALUE(TimeLineEvent&&) */

TimeLineEvent * __thiscall TimeLineEvent::operator=(TimeLineEvent *this,TimeLineEvent *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 8),(Delegate2 *)(param_1 + 8));
  RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x38),
             (RtReflectionDelegate *)(param_1 + 0x38));
  return this;
}

