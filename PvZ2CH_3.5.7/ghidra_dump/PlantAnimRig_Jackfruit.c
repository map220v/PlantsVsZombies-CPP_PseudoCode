// Class: PlantAnimRig_Jackfruit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Jackfruit::PlayOnceCommon(JACKFRUITANIMSTATE, std::string const&) */

void __thiscall
PlantAnimRig_Jackfruit::PlayOnceCommon
          (PlantAnimRig_Jackfruit *this,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_3,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = param_2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Jackfruit::PlayLoopCommon(JACKFRUITANIMSTATE, std::string const&) */

void __thiscall
PlantAnimRig_Jackfruit::PlayLoopCommon
          (PlantAnimRig_Jackfruit *this,undefined4 param_2,undefined8 param_3)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,param_3,0,aDStack_38);
  *(undefined4 *)(this + 0x218) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Jackfruit::StaticClassInit() */

void PlantAnimRig_Jackfruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Jackfruit");
    (*pcVar2)(plVar1,asStack_10,FUN_049aa684,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Jackfruit::StaticGetClass() */

long * PlantAnimRig_Jackfruit::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Jackfruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Jackfruit::GetClass() const */

long * PlantAnimRig_Jackfruit::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Jackfruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Jackfruit::GetJumpTimeLength() */

void __thiscall PlantAnimRig_Jackfruit::GetJumpTimeLength(PlantAnimRig_Jackfruit *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"jump");
  uVar1 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Jackfruit::PlayJump() */

void __thiscall PlantAnimRig_Jackfruit::PlayJump(PlantAnimRig_Jackfruit *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"jump");
  PlayOnceCommon(this,0x10,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Jackfruit::~PlantAnimRig_Jackfruit() */

void __thiscall PlantAnimRig_Jackfruit::~PlantAnimRig_Jackfruit(PlantAnimRig_Jackfruit *this)

{
  *(undefined ***)this = &PTR_GetClass_069246b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Jackfruit_06924918;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Jackfruit::~PlantAnimRig_Jackfruit() */

void __thiscall PlantAnimRig_Jackfruit::~PlantAnimRig_Jackfruit(PlantAnimRig_Jackfruit *this)

{
  ~PlantAnimRig_Jackfruit(this + -0x10);
  return;
}


/* PlantAnimRig_Jackfruit::~PlantAnimRig_Jackfruit() */

void __thiscall PlantAnimRig_Jackfruit::~PlantAnimRig_Jackfruit(PlantAnimRig_Jackfruit *this)

{
  ~PlantAnimRig_Jackfruit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Jackfruit::~PlantAnimRig_Jackfruit() */

void __thiscall PlantAnimRig_Jackfruit::~PlantAnimRig_Jackfruit(PlantAnimRig_Jackfruit *this)

{
  ~PlantAnimRig_Jackfruit(this + -0x10);
  return;
}


/* PlantAnimRig_Jackfruit::PlantAnimRig_Jackfruit() */

void __thiscall PlantAnimRig_Jackfruit::PlantAnimRig_Jackfruit(PlantAnimRig_Jackfruit *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069246b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Jackfruit_06924918;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_Jackfruit::StaticNew() */

PlantAnimRig_Jackfruit * PlantAnimRig_Jackfruit::StaticNew(void)

{
  PlantAnimRig_Jackfruit *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Jackfruit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Jackfruit::PlayNormalRun() */

void __thiscall PlantAnimRig_Jackfruit::PlayNormalRun(PlantAnimRig_Jackfruit *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"walk");
  PlayLoopCommon(this,0xf,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Jackfruit::onAnimStopped() */

void __thiscall PlantAnimRig_Jackfruit::onAnimStopped(PlantAnimRig_Jackfruit *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  PlantJackfruit *this_00;
  
  iVar1 = *(int *)(this + 0x218);
  PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  if (iVar1 != 0xf) {
    if (iVar1 == 2) {
      PlayNormalRun(this);
      return;
    }
    if (iVar1 == 0x10) {
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x3b8));
      if (cVar2 != '\0') {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
        this_00 = Sexy::RtObject::Cast<PlantJackfruit>(*(RtObject **)(lVar3 + 0xa8));
        if (this_00 != (PlantJackfruit *)0x0) {
          PlantJackfruit::DestorySelf(this_00);
          return;
        }
      }
    }
  }
  return;
}

