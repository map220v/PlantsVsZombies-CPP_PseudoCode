// Class: PlantAnimRig_ZoybeanPod


/* PlantAnimRig_ZoybeanPod::PlayZenGardenIdleAnim() */

void __thiscall PlantAnimRig_ZoybeanPod::PlayZenGardenIdleAnim(PlantAnimRig_ZoybeanPod *this)

{
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  (**(code **)(*(long *)this + 0x1a0))(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ZoybeanPod::StaticClassInit() */

void PlantAnimRig_ZoybeanPod::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ZoybeanPod");
    (*pcVar2)(plVar1,asStack_10,FUN_0345d4fc,0x3d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ZoybeanPod::StaticGetClass() */

long * PlantAnimRig_ZoybeanPod::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ZoybeanPod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ZoybeanPod::GetClass() const */

long * PlantAnimRig_ZoybeanPod::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ZoybeanPod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ZoybeanPod::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_ZoybeanPod::PlayAttack(PlantAnimRig_ZoybeanPod *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"transition3");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ZoybeanPod::CalcTransitionTime() */

void __thiscall PlantAnimRig_ZoybeanPod::CalcTransitionTime(PlantAnimRig_ZoybeanPod *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"transition");
  fVar1 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_28);
  std::string::string(asStack_20,"transition2");
  fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_20);
  std::string::string(asStack_18,"transition3");
  fVar3 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_18);
  std::string::string(asStack_10,"transition4");
  fVar4 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2 + fVar1 + fVar3 + fVar4);
}


/* PlantAnimRig_ZoybeanPod::PlantAnimRig_ZoybeanPod() */

void __thiscall PlantAnimRig_ZoybeanPod::PlantAnimRig_ZoybeanPod(PlantAnimRig_ZoybeanPod *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06636140;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ZoybeanPod_066363a8;
  Set8BytesTo0(this + 0x3b8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3c0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3d0));
  return;
}


/* PlantAnimRig_ZoybeanPod::StaticNew() */

PlantAnimRig_ZoybeanPod * PlantAnimRig_ZoybeanPod::StaticNew(void)

{
  PlantAnimRig_ZoybeanPod *this;
  
  this = ::operator_new(0x3d8);
  PlantAnimRig_ZoybeanPod(this);
  return this;
}


/* PlantAnimRig_ZoybeanPod::~PlantAnimRig_ZoybeanPod() */

void __thiscall PlantAnimRig_ZoybeanPod::~PlantAnimRig_ZoybeanPod(PlantAnimRig_ZoybeanPod *this)

{
  *(undefined ***)this = &PTR_GetClass_06636140;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ZoybeanPod_066363a8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3d0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3c0));
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ZoybeanPod::~PlantAnimRig_ZoybeanPod() */

void __thiscall PlantAnimRig_ZoybeanPod::~PlantAnimRig_ZoybeanPod(PlantAnimRig_ZoybeanPod *this)

{
  ~PlantAnimRig_ZoybeanPod(this + -0x10);
  return;
}


/* PlantAnimRig_ZoybeanPod::~PlantAnimRig_ZoybeanPod() */

void __thiscall PlantAnimRig_ZoybeanPod::~PlantAnimRig_ZoybeanPod(PlantAnimRig_ZoybeanPod *this)

{
  ~PlantAnimRig_ZoybeanPod(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ZoybeanPod::~PlantAnimRig_ZoybeanPod() */

void __thiscall PlantAnimRig_ZoybeanPod::~PlantAnimRig_ZoybeanPod(PlantAnimRig_ZoybeanPod *this)

{
  ~PlantAnimRig_ZoybeanPod(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ZoybeanPod::PlayRecovery() */

void __thiscall PlantAnimRig_ZoybeanPod::PlayRecovery(PlantAnimRig_ZoybeanPod *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle4");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ZoybeanPod::PlayTransition(std::string) */

void __thiscall
PlantAnimRig_ZoybeanPod::PlayTransition(PlantAnimRig_ZoybeanPod *this,undefined8 param_2)

{
  int iVar1;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475ffc(asStack_48,param_2,4,1);
  FUN_031f5e7c(asStack_40,"transition",asStack_48);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ZoybeanPod::onPopAnimCommand(float, std::string const&, std::string const&) */

void PlantAnimRig_ZoybeanPod::onPopAnimCommand(float param_1,string *param_2,string *param_3)

{
  RtMixedPtrBase *this;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  Effect_ZoybeanPodSmoke *pEVar6;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::operator==(param_3,(string *)&DAT_06aa1338);
  if (cVar1 == '\0') {
    iVar2 = FUN_0345a674(*(undefined8 *)(param_2 + 0x270),*(undefined8 *)(param_2 + 0x280));
    if ((iVar2 == 0) || (cVar1 = std::operator==(param_3,(string *)&DAT_06aa1340), cVar1 == '\0')) {
      PlantAnimRig::onPopAnimCommand(param_1,param_2,param_3);
    }
    else {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn
                ((RtInvokeVariant *)(param_2 + 0x268));
    }
  }
  else {
    this = (RtMixedPtrBase *)(param_2 + 0x3d0);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar1 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      (**(code **)(*plVar4 + 0x48))();
    }
    Board::AddEffect<Effect_ZoybeanPodSmoke>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
                    /* WARNING: Load size is inaccurate */
    pEVar6._0_4_ = *(Effect_ZoybeanPodSmoke **)(param_2 + 0x3c8);
    uVar5 = *(undefined4 *)(param_2 + 0x3cc);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(param_2 + 0x3c0));
    Effect_ZoybeanPodSmoke::StartSmoke(pEVar6._0_4_,uVar5,uVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

