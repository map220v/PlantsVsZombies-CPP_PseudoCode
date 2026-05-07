// Class: ZombiePrototype


/* ZombiePrototype::~ZombiePrototype() */

void __thiscall ZombiePrototype::~ZombiePrototype(ZombiePrototype *this)

{
  *(undefined ***)this = &PTR_GetClass_068b2710;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePrototype_068b3128;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePrototype::~ZombiePrototype() */

void __thiscall ZombiePrototype::~ZombiePrototype(ZombiePrototype *this)

{
  ~ZombiePrototype(this + -0x10);
  return;
}


/* ZombiePrototype::~ZombiePrototype() */

void __thiscall ZombiePrototype::~ZombiePrototype(ZombiePrototype *this)

{
  ~ZombiePrototype(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePrototype::~ZombiePrototype() */

void __thiscall ZombiePrototype::~ZombiePrototype(ZombiePrototype *this)

{
  ~ZombiePrototype(this + -0x10);
  return;
}


/* ZombiePrototype::StaticGetClass() */

long * ZombiePrototype::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePrototype",uVar2,StaticNew);
  return sClass;
}


/* ZombiePrototype::GetClass() const */

long * ZombiePrototype::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePrototype",uVar2,StaticNew);
  return sClass;
}


/* ZombiePrototype::ZombiePrototype() */

void __thiscall ZombiePrototype::ZombiePrototype(ZombiePrototype *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068b2710;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePrototype_068b3128;
  return;
}


/* ZombiePrototype::StaticNew() */

ZombiePrototype * ZombiePrototype::StaticNew(void)

{
  ZombiePrototype *this;
  
  this = ::operator_new(0x800);
  ZombiePrototype(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePrototype::SetColor(Sexy::Color) */

void __thiscall ZombiePrototype::SetColor(ZombiePrototype *this,Insets *param_2)

{
  ZombieHydraHeadAnimRig *pZVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  if (pZVar1 != (ZombieHydraHeadAnimRig *)0x0) {
    Sexy::Insets::Insets(aIStack_18,param_2);
    ZombieAnimRig_StaticArtPrototype::SetColor
              ((ZombieAnimRig_StaticArtPrototype *)pZVar1,aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePrototype::onZombieInitialize() */

void __thiscall ZombiePrototype::onZombieInitialize(ZombiePrototype *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this_00;
  ZombiePrototypeProps *pZVar2;
  RtMixedPtrBase aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  if (this_00 != (ZombieHydraHeadAnimRig *)0x0) {
    pZVar2 = Zombie::GetProps<ZombiePrototypeProps>((Zombie *)this);
    Sexy::ResourceManager::GetResourceForStringIdT<Sexy::Image>
              (*(string **)(gLawnApp + 0x848),(bool)((char)pZVar2 + '\x10'));
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_18);
      ZombieAnimRig_Ski::SetOwner((ZombieAnimRig_Ski *)this_00,(RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    }
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_10,*(float *)(pZVar2 + 0x218),*(float *)(pZVar2 + 0x218));
    ZombieAnimRig_StaticArtPrototype::SetImageScale(local_10,local_c,this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

