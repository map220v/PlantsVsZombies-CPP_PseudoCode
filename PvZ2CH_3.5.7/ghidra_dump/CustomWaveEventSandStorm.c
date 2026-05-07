// Class: CustomWaveEventSandStorm


/* CustomWaveEventSandStorm::TEMPNAMEPLACEHOLDERVALUE(CustomWaveEventSandStorm&&) */

CustomWaveEventSandStorm * __thiscall
CustomWaveEventSandStorm::operator=
          (CustomWaveEventSandStorm *this,CustomWaveEventSandStorm *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}


/* CustomWaveEventSandStorm::CustomWaveEventSandStorm(CustomWaveEventSandStorm const&) */

void __thiscall
CustomWaveEventSandStorm::CustomWaveEventSandStorm
          (CustomWaveEventSandStorm *this,CustomWaveEventSandStorm *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* CustomWaveEventSandStorm::TEMPNAMEPLACEHOLDERVALUE(CustomWaveEventSandStorm const&) */

CustomWaveEventSandStorm * __thiscall
CustomWaveEventSandStorm::operator=
          (CustomWaveEventSandStorm *this,CustomWaveEventSandStorm *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}


/* CustomWaveEventSandStorm::CustomWaveEventSandStorm() */

void __thiscall CustomWaveEventSandStorm::CustomWaveEventSandStorm(CustomWaveEventSandStorm *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),8);
  return;
}

