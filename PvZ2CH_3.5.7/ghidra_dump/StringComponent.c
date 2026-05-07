// Class: StringComponent


/* StringComponent::TEMPNAMEPLACEHOLDERVALUE(StringComponent&&) */

StringComponent * __thiscall
StringComponent::operator=(StringComponent *this,StringComponent *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_054766c8();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x28) = uVar4;
  return this;
}


/* StringComponent::StringComponent() */

void __thiscall StringComponent::StringComponent(StringComponent *this)

{
  FUN_05476574();
  *(undefined8 *)(this + 8) = 0;
  Sexy::Color::Color((Color *)(this + 0x10),0);
  Sexy::Insets::Insets((Insets *)(this + 0x20));
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* StringComponent::StringComponent(std::wstring, Sexy::PrimeTypeface*, Sexy::Color,
   Sexy::TRect<int>, DrawStringJustification) */

void __thiscall
StringComponent::StringComponent
          (StringComponent *this,undefined8 param_2,undefined8 param_3,Insets *param_4,
          Insets *param_5,undefined4 param_6)

{
  FUN_05477b24();
  *(undefined8 *)(this + 8) = param_3;
  Sexy::Insets::Insets((Insets *)(this + 0x10),param_4);
  Sexy::Insets::Insets((Insets *)(this + 0x20),param_5);
  *(undefined4 *)(this + 0x30) = param_6;
  return;
}

