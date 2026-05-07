// Class: LightningCloud


/* LightningCloud::onDieFinished(std::string const&) */

void LightningCloud::onDieFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningCloud::onStateChanged(unsigned int) */

void __thiscall LightningCloud::onStateChanged(LightningCloud *this,uint param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 3) {
    std::string::string(asStack_10,"Play_Plant_LightningReed_Nitro_Storm");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningCloud::StaticClassInit() */

void LightningCloud::StaticClassInit(void)

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
    std::string::string(asStack_10,"LightningCloud");
    (*pcVar2)(plVar1,asStack_10,FUN_03e8062c,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LightningCloud::StaticGetClass() */

long * LightningCloud::StaticGetClass(void)

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
  uVar2 = CloudBase::StaticGetClass();
  (*pcVar3)(plVar1,"LightningCloud",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LightningCloud::GetClass() const */

long * LightningCloud::GetClass(void)

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
  uVar2 = CloudBase::StaticGetClass();
  (*pcVar3)(plVar1,"LightningCloud",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LightningCloud::~LightningCloud() */

void __thiscall LightningCloud::~LightningCloud(LightningCloud *this)

{
  *(undefined ***)this = &PTR_GetClass_0678e170;
  *(undefined ***)(this + 0x10) = &PTR__LightningCloud_0678e398;
  CloudBase::~CloudBase((CloudBase *)this);
  return;
}


/* non-virtual thunk to LightningCloud::~LightningCloud() */

void __thiscall LightningCloud::~LightningCloud(LightningCloud *this)

{
  ~LightningCloud(this + -0x10);
  return;
}


/* LightningCloud::~LightningCloud() */

void __thiscall LightningCloud::~LightningCloud(LightningCloud *this)

{
  ~LightningCloud(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LightningCloud::~LightningCloud() */

void __thiscall LightningCloud::~LightningCloud(LightningCloud *this)

{
  ~LightningCloud(this + -0x10);
  return;
}


/* LightningCloud::LightningCloud() */

void __thiscall LightningCloud::LightningCloud(LightningCloud *this)

{
  undefined4 uVar1;
  
  CloudBase::CloudBase((CloudBase *)this);
  this[0xfc] = (LightningCloud)0x0;
  *(undefined ***)this = &PTR_GetClass_0678e170;
  *(undefined ***)(this + 0x10) = &PTR__LightningCloud_0678e398;
  uVar1 = operator|(2,4);
  FUN_03e7fdd4(this + 0xb0,uVar1);
  return;
}


/* LightningCloud::StaticNew() */

LightningCloud * LightningCloud::StaticNew(void)

{
  LightningCloud *this;
  
  this = ::operator_new(0x100);
  LightningCloud(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningCloud::onAttack(BoardEntity*) */

void LightningCloud::onAttack(BoardEntity *param_1)

{
  int iVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  float fVar3;
  float fVar4;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_LIGHTNINGREED_PLANTFOOD_CLOUD_ATTACK");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  iVar1 = Sexy::Rand(2);
  if (iVar1 == 0) {
    std::string::string((string *)aRStack_18,"attack2");
  }
  else {
    std::string::string((string *)aRStack_18,"attack");
  }
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  fVar3 = (float)FUN_03e7fe78(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                              *(undefined4 *)(param_1 + 0x20));
  fVar4 = *(float *)(param_1 + 0x1c);
  FUN_03e7fe78(*(undefined4 *)(param_1 + 0x18),fVar4,*(undefined4 *)(param_1 + 0x20));
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar3 - 95.0,fVar4 - 130.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_03e7fdcc(this + 0x1c,iVar1 + 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningCloud::onInitialized() */

void __thiscall LightningCloud::onInitialized(LightningCloud *this)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06adfc90);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(pPVar1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  pPVar3 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  std::string::string(asStack_68,"plant");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aRStack_58,"onPlantFinished");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             aRStack_58);
  PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  CloudBase::setState((CloudBase *)this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningCloud::onPlantFinished(std::string const&) */

void LightningCloud::onPlantFinished(string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string *psVar3;
  ResourceInfo *pRVar4;
  long extraout_x0;
  float fVar5;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  param_1[0xfc] = (string)0x1;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_48,"lightningreed");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  std::string::~string(asStack_48);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar4 + 0x28));
  nop();
  fVar5 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0xf8) = fVar5 + *(float *)(extraout_x0 + 0x2d8);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningCloud::onUpdateCloud() */

void __thiscall LightningCloud::onUpdateCloud(LightningCloud *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  undefined4 uVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xfc] != (LightningCloud)0x0) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0xf8) <= fVar2) {
      pPVar1 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      std::string::string(asStack_68,"die");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onDieFinished");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      uVar3 = PVZ_EOT();
      this[0xfc] = (LightningCloud)0x0;
      *(undefined4 *)(this + 0xf8) = uVar3;
    }
    else {
      CloudBase::onUpdateCloud();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

