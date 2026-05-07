// Class: ZombieAnimRig_FairyTaleArmorBasic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleArmorBasic::SetLayerVisibilityForCurrentState() */

void __thiscall
ZombieAnimRig_FairyTaleArmorBasic::SetLayerVisibilityForCurrentState
          (ZombieAnimRig_FairyTaleArmorBasic *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig_Basic::SetLayerVisibilityForCurrentState((ZombieAnimRig_Basic *)this);
  std::string::string(asStack_10,"_zombie_armor_hat_states");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FairyTaleArmorBasic::StaticGetClass() */

long * ZombieAnimRig_FairyTaleArmorBasic::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig_FairyTaleBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleArmorBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_FairyTaleArmorBasic::GetClass() const */

long * ZombieAnimRig_FairyTaleArmorBasic::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig_FairyTaleBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleArmorBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_FairyTaleArmorBasic::~ZombieAnimRig_FairyTaleArmorBasic() */

void __thiscall
ZombieAnimRig_FairyTaleArmorBasic::~ZombieAnimRig_FairyTaleArmorBasic
          (ZombieAnimRig_FairyTaleArmorBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_069f7a10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleArmorBasic_069f7d28;
  ZombieAnimRig_FairyTaleBasic::~ZombieAnimRig_FairyTaleBasic((ZombieAnimRig_FairyTaleBasic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleArmorBasic::~ZombieAnimRig_FairyTaleArmorBasic() */

void __thiscall
ZombieAnimRig_FairyTaleArmorBasic::~ZombieAnimRig_FairyTaleArmorBasic
          (ZombieAnimRig_FairyTaleArmorBasic *this)

{
  ~ZombieAnimRig_FairyTaleArmorBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleArmorBasic::~ZombieAnimRig_FairyTaleArmorBasic() */

void __thiscall
ZombieAnimRig_FairyTaleArmorBasic::~ZombieAnimRig_FairyTaleArmorBasic
          (ZombieAnimRig_FairyTaleArmorBasic *this)

{
  ~ZombieAnimRig_FairyTaleArmorBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleArmorBasic::~ZombieAnimRig_FairyTaleArmorBasic() */

void __thiscall
ZombieAnimRig_FairyTaleArmorBasic::~ZombieAnimRig_FairyTaleArmorBasic
          (ZombieAnimRig_FairyTaleArmorBasic *this)

{
  ~ZombieAnimRig_FairyTaleArmorBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleArmorBasic::ZombieAnimRig_FairyTaleArmorBasic() */

void __thiscall
ZombieAnimRig_FairyTaleArmorBasic::ZombieAnimRig_FairyTaleArmorBasic
          (ZombieAnimRig_FairyTaleArmorBasic *this)

{
  ZombieAnimRig_FairyTaleBasic::ZombieAnimRig_FairyTaleBasic((ZombieAnimRig_FairyTaleBasic *)this);
  *(undefined ***)this = &PTR_GetClass_069f7a10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleArmorBasic_069f7d28;
  return;
}


/* ZombieAnimRig_FairyTaleArmorBasic::StaticNew() */

ZombieAnimRig_FairyTaleArmorBasic * ZombieAnimRig_FairyTaleArmorBasic::StaticNew(void)

{
  ZombieAnimRig_FairyTaleArmorBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_FairyTaleArmorBasic(this);
  return this;
}

