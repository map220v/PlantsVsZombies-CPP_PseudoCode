// Class: PlantAnimRig_Mangosteen


/* PlantAnimRig_Mangosteen::~PlantAnimRig_Mangosteen() */

void __thiscall PlantAnimRig_Mangosteen::~PlantAnimRig_Mangosteen(PlantAnimRig_Mangosteen *this)

{
  *(undefined ***)this = &PTR_GetClass_0672aec0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Mangosteen_0672b128;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Mangosteen::~PlantAnimRig_Mangosteen() */

void __thiscall PlantAnimRig_Mangosteen::~PlantAnimRig_Mangosteen(PlantAnimRig_Mangosteen *this)

{
  ~PlantAnimRig_Mangosteen(this + -0x10);
  return;
}


/* PlantAnimRig_Mangosteen::~PlantAnimRig_Mangosteen() */

void __thiscall PlantAnimRig_Mangosteen::~PlantAnimRig_Mangosteen(PlantAnimRig_Mangosteen *this)

{
  ~PlantAnimRig_Mangosteen(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Mangosteen::~PlantAnimRig_Mangosteen() */

void __thiscall PlantAnimRig_Mangosteen::~PlantAnimRig_Mangosteen(PlantAnimRig_Mangosteen *this)

{
  ~PlantAnimRig_Mangosteen(this + -0x10);
  return;
}


/* PlantAnimRig_Mangosteen::PlantAnimRig_Mangosteen() */

void __thiscall PlantAnimRig_Mangosteen::PlantAnimRig_Mangosteen(PlantAnimRig_Mangosteen *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0672aec0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Mangosteen_0672b128;
  Set8BytesTo0(this + 0x3b8);
  return;
}


/* PlantAnimRig_Mangosteen::StaticNew() */

PlantAnimRig_Mangosteen * PlantAnimRig_Mangosteen::StaticNew(void)

{
  PlantAnimRig_Mangosteen *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Mangosteen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mangosteen::StaticClassInit() */

void PlantAnimRig_Mangosteen::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Mangosteen");
    (*pcVar2)(plVar1,asStack_10,FUN_03b06e60,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Mangosteen::StaticGetClass() */

long * PlantAnimRig_Mangosteen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Mangosteen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Mangosteen::GetClass() const */

long * PlantAnimRig_Mangosteen::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Mangosteen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mangosteen::playIdleAnimation(std::string const&) */

void __thiscall
PlantAnimRig_Mangosteen::playIdleAnimation(PlantAnimRig_Mangosteen *this,string *param_1)

{
  int iVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,param_1,0,aDStack_38);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mangosteen::PlayPreviewAnim(bool) */

void PlantAnimRig_Mangosteen::PlayPreviewAnim(bool param_1)

{
  long lVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar2 = PopAnimRig::PlayAndContinue((PopAnimRig *)(ulong)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)((PopAnimRig *)(ulong)param_1 + 0x218) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mangosteen::getWaterAnimName() */

void PlantAnimRig_Mangosteen::getWaterAnimName(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  PlantMangosteen *pPVar3;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((*(long *)(in_x0 + 0x210) != 0) &&
     (pPVar3 = Sexy::RtObject::Cast<PlantMangosteen>
                         (*(RtObject **)(*(long *)(in_x0 + 0x210) + 0xa8)),
     pPVar3 != (PlantMangosteen *)0x0)) {
    iVar2 = FUN_03b06110(*(undefined4 *)(pPVar3 + 0x34));
    if (iVar2 == 0xb) {
      std::string::string(in_x8,"water");
      nop();
      goto LAB_03b07610;
    }
    if (iVar2 == 0xc) {
      std::string::string(in_x8,"water2");
      nop();
      goto LAB_03b07610;
    }
    if (iVar2 == 0xd) {
      std::string::string(in_x8,"water3");
      nop();
      goto LAB_03b07610;
    }
  }
  std::string::string(in_x8,"");
  nop();
LAB_03b07610:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mangosteen::playAnimation(std::string const&, std::string const&) */

void __thiscall
PlantAnimRig_Mangosteen::playAnimation
          (PlantAnimRig_Mangosteen *this,string *param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  RtMixedPtr aRStack_a8 [8];
  RtId aRStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"");
  if (bVar1) {
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_98);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_98,aRStack_a0,param_2);
    Sexy::RtId::~RtId(aRStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,(RtReflectionDelegate *)aRStack_98);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar2 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}

