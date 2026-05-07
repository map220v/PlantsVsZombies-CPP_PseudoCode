// Class: PlantAnimRig_Sunshroom


/* PlantAnimRig_Sunshroom::InitAnimRig_ZenGarden() */

void __thiscall PlantAnimRig_Sunshroom::InitAnimRig_ZenGarden(PlantAnimRig_Sunshroom *this)

{
  this[0x3b8] = (PlantAnimRig_Sunshroom)0x2;
  return;
}


/* PlantAnimRig_Sunshroom::growthAnimComplete(std::string const&) */

void PlantAnimRig_Sunshroom::growthAnimComplete(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* PlantAnimRig_Sunshroom::getIdleAnimationName() */

void PlantAnimRig_Sunshroom::getIdleAnimationName(void)

{
  long in_x0;
  ulong uVar1;
  
  uVar1 = Sexy::Rand();
  if ((uVar1 & 1) == 0) {
    Sexy::StrFormat("IDLE2_STAGE%d",(ulong)(*(byte *)(in_x0 + 0x3b8) + 1));
    return;
  }
  Sexy::StrFormat("IDLE_STAGE%d",(ulong)(*(byte *)(in_x0 + 0x3b8) + 1));
  return;
}


/* PlantAnimRig_Sunshroom::~PlantAnimRig_Sunshroom() */

void __thiscall PlantAnimRig_Sunshroom::~PlantAnimRig_Sunshroom(PlantAnimRig_Sunshroom *this)

{
  *(undefined ***)this = &PTR_GetClass_0680b360;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sunshroom_0680b5e0;
  PlantAnimRig_Sunflower::~PlantAnimRig_Sunflower((PlantAnimRig_Sunflower *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sunshroom::~PlantAnimRig_Sunshroom() */

void __thiscall PlantAnimRig_Sunshroom::~PlantAnimRig_Sunshroom(PlantAnimRig_Sunshroom *this)

{
  ~PlantAnimRig_Sunshroom(this + -0x10);
  return;
}


/* PlantAnimRig_Sunshroom::~PlantAnimRig_Sunshroom() */

void __thiscall PlantAnimRig_Sunshroom::~PlantAnimRig_Sunshroom(PlantAnimRig_Sunshroom *this)

{
  ~PlantAnimRig_Sunshroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sunshroom::~PlantAnimRig_Sunshroom() */

void __thiscall PlantAnimRig_Sunshroom::~PlantAnimRig_Sunshroom(PlantAnimRig_Sunshroom *this)

{
  ~PlantAnimRig_Sunshroom(this + -0x10);
  return;
}


/* PlantAnimRig_Sunshroom::PlantAnimRig_Sunshroom() */

void __thiscall PlantAnimRig_Sunshroom::PlantAnimRig_Sunshroom(PlantAnimRig_Sunshroom *this)

{
  PlantAnimRig_Sunflower::PlantAnimRig_Sunflower((PlantAnimRig_Sunflower *)this);
  this[0x3b8] = (PlantAnimRig_Sunshroom)0x0;
  *(undefined ***)this = &PTR_GetClass_0680b360;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sunshroom_0680b5e0;
  return;
}


/* PlantAnimRig_Sunshroom::StaticNew() */

PlantAnimRig_Sunshroom * PlantAnimRig_Sunshroom::StaticNew(void)

{
  PlantAnimRig_Sunshroom *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Sunshroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunshroom::StaticClassInit() */

void PlantAnimRig_Sunshroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Sunshroom");
    (*pcVar2)(plVar1,asStack_10,FUN_0420f244,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Sunshroom::StaticGetClass() */

long * PlantAnimRig_Sunshroom::StaticGetClass(void)

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
  uVar2 = PlantAnimRig_Sunflower::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Sunshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Sunshroom::GetClass() const */

long * PlantAnimRig_Sunshroom::GetClass(void)

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
  uVar2 = PlantAnimRig_Sunflower::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Sunshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunshroom::GetPriviewAnim() */

void __thiscall PlantAnimRig_Sunshroom::GetPriviewAnim(PlantAnimRig_Sunshroom *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"IDLE_STAGE3");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunshroom::PlayPreviewAnim(bool) */

void PlantAnimRig_Sunshroom::PlayPreviewAnim(bool param_1)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"IDLE_STAGE3");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)(ulong)param_1,asStack_40,3,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)((PopAnimRig *)(ulong)param_1 + 0x218) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunshroom::SetGrowthStage(unsigned char,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Sunshroom::SetGrowthStage
          (PlantAnimRig_Sunshroom *this,PlantAnimRig_Sunshroom param_1,RtReflectionDelegate *param_3
          )

{
  char cVar1;
  int iVar2;
  RtReflectionDelegate *__n;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] != param_1) {
    this[0x3b8] = param_1;
    __n = param_3;
    Set8BytesTo0(asStack_70);
    if (this[0x3b8] == (PlantAnimRig_Sunshroom)0x1) {
      std::string::append(asStack_70,"GROWTH_STAGE1",(size_t)__n);
    }
    else if (this[0x3b8] == (PlantAnimRig_Sunshroom)0x2) {
      std::string::append(asStack_70,"GROWTH_STAGE2",(size_t)__n);
    }
    cVar1 = FUN_0547419c(asStack_70);
    if (cVar1 == '\0') {
      iVar2 = ::RtReflectionDelegate::operator_cast_to_int(param_3);
      if (iVar2 == 0) {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"growthAnimComplete");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
                  ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)param_3,
                   (RtReflectionDelegate *)aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,param_3);
      PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_70);
    }
    else {
      (**(code **)(*(long *)this + 0x118))(this);
      std::string::~string(asStack_70);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

