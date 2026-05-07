// Class: ConstWeightedOption<std::string>


/* ConstWeightedOption<std::string >::~ConstWeightedOption() */

void __thiscall
ConstWeightedOption<std::string>::~ConstWeightedOption(ConstWeightedOption<std::string> *this)

{
  *(undefined ***)this = &PTR__ConstWeightedOption_0675c7b0;
  std::string::~string((string *)(this + 8));
  return;
}


/* ConstWeightedOption<std::string >::~ConstWeightedOption() */

void __thiscall
ConstWeightedOption<std::string>::~ConstWeightedOption(ConstWeightedOption<std::string> *this)

{
  ~ConstWeightedOption(this);
  AK::FreeHook(this);
  return;
}


/* ConstWeightedOption<std::string >::ConstWeightedOption(std::string, float) */

void __thiscall
ConstWeightedOption<std::string>::ConstWeightedOption
          (undefined4 param_1,ConstWeightedOption<std::string> *this,IWeightedOption *param_3)

{
  IWeightedOption::IWeightedOption((IWeightedOption *)this,param_3);
  *(undefined ***)this = &PTR__ConstWeightedOption_0675c7b0;
  FUN_05475d88(this + 8,param_3);
  *(undefined4 *)(this + 0x10) = param_1;
  return;
}


/* ConstWeightedOption<std::string >::ConstWeightedOption(ConstWeightedOption<std::string > const&)
    */

void __thiscall
ConstWeightedOption<std::string>::ConstWeightedOption
          (ConstWeightedOption<std::string> *this,ConstWeightedOption *param_1)

{
  IWeightedOption::IWeightedOption((IWeightedOption *)this,(IWeightedOption *)param_1);
  *(undefined ***)this = &PTR__ConstWeightedOption_0675c7b0;
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* ConstWeightedOption<std::string >::TEMPNAMEPLACEHOLDERVALUE(ConstWeightedOption<std::string >&&)
    */

ConstWeightedOption<std::string> * __thiscall
ConstWeightedOption<std::string>::operator=
          (ConstWeightedOption<std::string> *this,ConstWeightedOption *param_1)

{
  FUN_05474278(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}


/* ConstWeightedOption<std::string >::TEMPNAMEPLACEHOLDERVALUE(ConstWeightedOption<std::string >
   const&) */

ConstWeightedOption<std::string> * __thiscall
ConstWeightedOption<std::string>::operator=
          (ConstWeightedOption<std::string> *this,ConstWeightedOption *param_1)

{
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}


/* ConstWeightedOption<std::string >::ConstWeightedOption(ConstWeightedOption<std::string >&&) */

void __thiscall
ConstWeightedOption<std::string>::ConstWeightedOption
          (ConstWeightedOption<std::string> *this,ConstWeightedOption *param_1)

{
  IWeightedOption::IWeightedOption((IWeightedOption *)this,(IWeightedOption *)param_1);
  *(undefined ***)this = &PTR__ConstWeightedOption_0675c7b0;
  FUN_05474148(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* ConstWeightedOption<std::string >::ConstWeightedOption() */

void ConstWeightedOption<std::string>::ConstWeightedOption(void)

{
  IWeightedOption *in_x0;
  IWeightedOption *in_x1;
  
  IWeightedOption::IWeightedOption(in_x0,in_x1);
  *(undefined ***)in_x0 = &PTR__ConstWeightedOption_0675c7b0;
  Set8BytesTo0(in_x0 + 8);
  return;
}

