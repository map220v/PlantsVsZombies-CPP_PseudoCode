// Class: ZombieWithPushingActionAnimRig


/* ZombieWithPushingActionAnimRig::CancelPush() */

void __thiscall ZombieWithPushingActionAnimRig::CancelPush(ZombieWithPushingActionAnimRig *this)

{
  this[0x2d0] = (ZombieWithPushingActionAnimRig)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithPushingActionAnimRig::onPopAnimInitialized() */

void __thiscall
ZombieWithPushingActionAnimRig::onPopAnimInitialized(ZombieWithPushingActionAnimRig *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  std::string::string(asStack_10,"ice_block_full");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWithPushingActionAnimRig::~ZombieWithPushingActionAnimRig() */

void __thiscall
ZombieWithPushingActionAnimRig::~ZombieWithPushingActionAnimRig
          (ZombieWithPushingActionAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0687e900;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWithPushingActionAnimRig_0687eb88;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x288));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x240));
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieWithPushingActionAnimRig::~ZombieWithPushingActionAnimRig() */

void __thiscall
ZombieWithPushingActionAnimRig::~ZombieWithPushingActionAnimRig
          (ZombieWithPushingActionAnimRig *this)

{
  ~ZombieWithPushingActionAnimRig(this + -0x10);
  return;
}


/* ZombieWithPushingActionAnimRig::~ZombieWithPushingActionAnimRig() */

void __thiscall
ZombieWithPushingActionAnimRig::~ZombieWithPushingActionAnimRig
          (ZombieWithPushingActionAnimRig *this)

{
  ~ZombieWithPushingActionAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWithPushingActionAnimRig::~ZombieWithPushingActionAnimRig() */

void __thiscall
ZombieWithPushingActionAnimRig::~ZombieWithPushingActionAnimRig
          (ZombieWithPushingActionAnimRig *this)

{
  ~ZombieWithPushingActionAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithPushingActionAnimRig::StaticClassInit() */

void ZombieWithPushingActionAnimRig::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ZombieWithPushingActionAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_0462b018,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWithPushingActionAnimRig::StaticGetClass() */

long * ZombieWithPushingActionAnimRig::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWithPushingActionAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWithPushingActionAnimRig::GetClass() const */

long * ZombieWithPushingActionAnimRig::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWithPushingActionAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWithPushingActionAnimRig::DoPush(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieWithPushingActionAnimRig::DoPush
          (ZombieWithPushingActionAnimRig *this,RtReflectionDelegate *param_2)

{
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x288),param_2);
  this[0x2d0] = (ZombieWithPushingActionAnimRig)0x1;
  return;
}


/* ZombieWithPushingActionAnimRig::ZombieWithPushingActionAnimRig() */

void __thiscall
ZombieWithPushingActionAnimRig::ZombieWithPushingActionAnimRig(ZombieWithPushingActionAnimRig *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0687e900;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWithPushingActionAnimRig_0687eb88;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             (this + 0x240));
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x288));
  this[0x2d0] = (ZombieWithPushingActionAnimRig)0x0;
  return;
}


/* ZombieWithPushingActionAnimRig::StaticNew() */

ZombieWithPushingActionAnimRig * ZombieWithPushingActionAnimRig::StaticNew(void)

{
  ZombieWithPushingActionAnimRig *this;
  
  this = ::operator_new(0x2d8);
  ZombieWithPushingActionAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithPushingActionAnimRig::PlayWalk(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
ZombieWithPushingActionAnimRig::PlayWalk
          (ZombieWithPushingActionAnimRig *this,RtReflectionDelegate *param_2)

{
  undefined4 uVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x240),param_2);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  uVar1 = ZombieAnimRig::PlayWalk((ZombieAnimRig *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithPushingActionAnimRig::onAnimContinued(std::string const&, std::string const&, int) */

void ZombieWithPushingActionAnimRig::onAnimContinued(string *param_1,string *param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  vector *pvVar3;
  code *pcVar4;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"walk");
  if (bVar1) {
    lVar2 = RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
            TryGetDelegate((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>
                            *)(param_1 + 0x240));
    if (lVar2 != 0) {
      pvVar3 = (vector *)
               RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
               GetDelegate((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>
                            *)(param_1 + 0x240));
      Sexy::Delegate3<std::vector<PlantInfo,std::allocator<PlantInfo>>&,int,int>::operator()
                (pvVar3,(int)param_2,param_3);
    }
    if (param_1[0x2d0] != (string)0x0) {
      pcVar4 = *(code **)(*(long *)param_1 + 0x170);
      std::string::string(asStack_58,"push");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,(RtReflectionDelegate *)(param_1 + 0x288));
      (*pcVar4)(param_1,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      param_1[0x2d0] = (string)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

