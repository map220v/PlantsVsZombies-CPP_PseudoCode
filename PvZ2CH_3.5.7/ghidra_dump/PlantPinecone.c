// Class: PlantPinecone


/* PlantPinecone::PlayAttackAnimation() */

void PlantPinecone::PlayAttackAnimation(void)

{
  long in_x0;
  
  Plant::PlayAttackAnimation(*(Plant **)(in_x0 + 0x10));
  return;
}


/* PlantPinecone::IsLaserInLevel(LaserShooter) */

bool __thiscall PlantPinecone::IsLaserInLevel(PlantPinecone *this,int param_2)

{
  if (*(int *)(this + 0x30) != param_2) {
    return param_2 + 3 == *(int *)(this + 0x30);
  }
  return true;
}


/* PlantPinecone::LaserLevelUp() */

void __thiscall PlantPinecone::LaserLevelUp(PlantPinecone *this)

{
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  return;
}


/* PlantPinecone::DoSpecial(int) */

void PlantPinecone::DoSpecial(int param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(ulong)(uint)param_1;
  *(undefined4 *)(plVar1 + 0xf) = 0;
  (**(code **)(*plVar1 + 0x150))(plVar1,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::StaticClassInit() */

void PlantPinecone::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPinecone");
    (*pcVar2)(plVar1,asStack_10,FUN_04283f7c,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPinecone::StaticGetClass() */

long * PlantPinecone::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPinecone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPinecone::GetClass() const */

long * PlantPinecone::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPinecone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::PlantPinecone() */

void __thiscall PlantPinecone::PlantPinecone(PlantPinecone *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_068242a0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x48));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  this[0x70] = (PlantPinecone)0x0;
  this[0x71] = (PlantPinecone)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x7c] = (PlantPinecone)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x58),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x60),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPinecone::StaticNew() */

PlantPinecone * PlantPinecone::StaticNew(void)

{
  PlantPinecone *this;
  
  this = ::operator_new(0x80);
  PlantPinecone(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::Initialize() */

void __thiscall PlantPinecone::Initialize(PlantPinecone *this)

{
  char cVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x58),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x60),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  cVar1 = PlantFramework::IsArenaBattle();
  if (cVar1 != '\0') {
    *(undefined1 *)(*(long *)(this + 0x10) + 0x119) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::~PlantPinecone() */

void __thiscall PlantPinecone::~PlantPinecone(PlantPinecone *this)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_02;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = (RtWeakPtr *)(this + 0x58);
  *(undefined ***)this = &PTR_GetClass_068242a0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    (**(code **)(*plVar2 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_02,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  this_00 = (RtWeakPtr *)(this + 0x60);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  this_01 = (RtWeakPtr *)(this + 0x68);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPinecone::~PlantPinecone() */

void __thiscall PlantPinecone::~PlantPinecone(PlantPinecone *this)

{
  ~PlantPinecone(this);
  AK::FreeHook(this);
  return;
}


/* PlantPinecone::OnAnimCommand(std::string const&, std::string const&) */

void PlantPinecone::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==("use_special",param_2);
  if (bVar1) {
    cVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (cVar2 != '\0') {
      return;
    }
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* PlantPinecone::UpdateLaserShooterLayer() */

void __thiscall PlantPinecone::UpdateLaserShooterLayer(PlantPinecone *this)

{
  int iVar1;
  ulong uVar2;
  PopAnimRig *pPVar3;
  string *psVar4;
  ulong uVar5;
  
  iVar1 = *(int *)(this + 0x30);
  uVar5 = 0;
  while( true ) {
    uVar2 = FUN_0427fdcc(DAT_06af5258,DAT_06af5260);
    if (uVar2 <= uVar5) break;
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    psVar4 = (string *)FUN_0427fdd8(DAT_06af5258,uVar5);
    PopAnimRig::SetLayerVisibility(pPVar3,psVar4,false);
    uVar5 = uVar5 + 1;
  }
  if (*(int *)(this + 0x30) == 0) {
    return;
  }
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  psVar4 = (string *)FUN_0427fdd8(DAT_06af5258,(long)(iVar1 + -1));
  PopAnimRig::SetLayerVisibility(pPVar3,psVar4,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::LoadLaserEffect(std::string, LaserType) */

void PlantPinecone::LoadLaserEffect(undefined8 param_1,long param_2,string *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  char *__s;
  Effect_PopAnim *this;
  ResourceInfo *pRVar4;
  size_t __n;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Plant::GetAvatarEnable(*(Plant **)(param_2 + 0x10));
  std::string::string(asStack_20,"");
  nop();
  __n = 0;
  iVar2 = Board::MakeRenderOrder(0x64d48,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1);
  if (param_4 == 1) {
    iVar2 = iVar2 + -2;
    puVar3 = &DAT_06af51f8;
  }
  else if (param_4 == 0) {
    iVar2 = iVar2 + -1;
    puVar3 = &DAT_06af5208;
  }
  else {
    if (param_4 != 2) goto LAB_04282314;
    iVar2 = iVar2 + -3;
    puVar3 = &DAT_06af5270;
  }
  __s = (char *)FUN_0547429c(puVar3 + (long)(int)(uVar1 & 0xff) * 8);
  std::string::append(asStack_20,__s,__n);
LAB_04282314:
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_3);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  FUN_0427fd7c(this + 0x1c,iVar2);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this,asStack_20,0);
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  ToolPacketData::GetProps();
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::GetLaserRig() */

void PlantPinecone::GetLaserRig(void)

{
  RtWeakPtr *this;
  long in_x0;
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x58);
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  if (pRVar1 == (ResourceInfo *)0x0) {
    FUN_05475d88(asStack_18,&DAT_06af5340);
    LoadLaserEffect(aRStack_10);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::GetLaserImapctRig() */

void PlantPinecone::GetLaserImapctRig(void)

{
  RtWeakPtr *this;
  long in_x0;
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x60);
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  if (pRVar1 == (ResourceInfo *)0x0) {
    FUN_05475d88(asStack_18,&DAT_06af5340);
    LoadLaserEffect(aRStack_10);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::GetLaserSplashRig() */

void PlantPinecone::GetLaserSplashRig(void)

{
  RtWeakPtr *this;
  long in_x0;
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x68);
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  if (pRVar1 == (ResourceInfo *)0x0) {
    FUN_05475d88(asStack_18,&DAT_06af5340);
    LoadLaserEffect(aRStack_10);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::AddToRenderQueue(RenderQueue*) */

void __thiscall PlantPinecone::AddToRenderQueue(PlantPinecone *this,RenderQueue *param_1)

{
  int iVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Board::MakeRenderOrder(0x64d48,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1,0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RenderLaser);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<PlantPinecone,void(PlantPinecone::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,iVar1 + -1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::LaserNeedLevelUp() */

void __thiscall PlantPinecone::LaserNeedLevelUp(PlantPinecone *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0x34) < 0.001) goto LAB_04282f34;
  if ((*(int *)(this + 0x30) != 0) && (cVar1 = IsLaserInLevel(this,3), cVar1 == '\0')) {
    FUN_04282e80(*(undefined8 *)(this + 0x10));
    FUN_0427fd98(aRStack_10,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    FUN_0427fd98(aRStack_10,*(undefined8 *)(this + 0x10));
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    fVar5 = *(float *)(lVar2 + 0x38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = IsLaserInLevel(this,2);
    if ((cVar1 != '\0') &&
       (fVar4 = (float)PVZ_T(), *(float *)(this + 0x34) + fVar5 * 0.6666667 < fVar4)) {
      uVar3 = 1;
      goto LAB_04282f34;
    }
    cVar1 = IsLaserInLevel(this,1);
    if ((cVar1 != '\0') &&
       (fVar4 = (float)PVZ_T(), *(float *)(this + 0x34) + fVar5 * 0.33333334 < fVar4)) {
      uVar3 = 1;
      goto LAB_04282f34;
    }
  }
  uVar3 = 0;
LAB_04282f34:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::GetLaserShooterPos() */

void __thiscall PlantPinecone::GetLaserShooterPos(PlantPinecone *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  PopAnimRig *this_00;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_30;
  float local_2c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  ulong local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  lVar4 = *(long *)(this + 0x10);
  fVar7 = *(float *)(lVar4 + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar5 = (float)FUN_0427fdfc(*(undefined4 *)(lVar4 + 0x18),fVar7,*(undefined4 *)(lVar4 + 0x20));
  Sexy::Insets::Insets((Insets *)&local_18,0,0,0,0);
  if (0 < *(int *)(this + 0x30)) {
    uVar3 = FUN_0427fdd8(DAT_06af5258,(long)(*(int *)(this + 0x30) + -1));
    FUN_05475d88((string *)&local_20,uVar3);
    this_00 = (PopAnimRig *)FUN_042830a4(*(undefined8 *)(this + 0x10));
    PopAnimRig::CalcSymbolRect(this_00,(string *)&local_20,(TRect *)&local_18);
    std::string::~string((string *)&local_20);
  }
  FUN_0427fd98(aRStack_28,*(undefined8 *)(this + 0x10));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  fVar6 = *(float *)(lVar4 + 0x9c);
  FUN_0427fd98((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,*(undefined8 *)(this + 0x10));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,fVar6,*(float *)(lVar4 + 0xa0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  iVar1 = FUN_0427ffb8(local_18 + local_10 / 2);
  iVar2 = FUN_0427ffb8(local_14 + local_c / 2);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_20,(fVar5 - local_30) + (float)iVar1,
             (fVar7 - local_2c) + (float)iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_20 & 0xffffffff,(int)(local_20 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::LaserHitBlasting(BoardEntity*, Sexy::SexyVector2 const&) */

void PlantPinecone::LaserHitBlasting(BoardEntity *param_1,SexyVector2 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  UIWidget *pUVar4;
  PopAnimRig *pPVar5;
  StandaloneEffect *pSVar6;
  long *extraout_x0;
  SexyVector2 *in_x2;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined4 local_88 [2];
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60 [2];
  SexyTransform2D aSStack_58 [40];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04282e80(*(undefined8 *)(param_1 + 0x10));
  fVar8 = (float)FUN_0427ffa8(0x3f800000);
  local_88[0] = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0x48),fVar8);
  Sexy::SexyVector2::operator-((SexyVector2 *)local_88,in_x2);
  fVar8 = (float)FUN_0427ffa8(0x3f800000);
  local_80[0] = Sexy::SexyVector2::operator*((SexyVector2 *)(lVar3 + 0x2fc),fVar8);
  local_60[0] = GetLaserShooterPos((PlantPinecone *)param_1);
  fVar8 = (float)FUN_0427ffa8(0x3f800000);
  local_78[0] = Sexy::SexyVector2::operator*((SexyVector2 *)local_60,fVar8);
  fVar9 = *(float *)(param_1 + 0x4c);
  Sexy::FastCurve::SetOutRange((FastCurve *)local_60,*(float *)(param_1 + 0x48),fVar9);
  fVar8 = (float)FUN_0427ffa8(0x3f800000);
  local_70 = Sexy::SexyVector2::operator*((SexyVector2 *)local_60,fVar8);
  local_6c = fVar9;
  local_68 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_70,(SexyVector2 *)local_78);
  iVar7 = *(int *)(param_1 + 0x30);
  local_64 = fVar9;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  if (cVar1 == '\0') {
    iVar7 = iVar7 + -1;
  }
  else {
    iVar7 = iVar7 + -4;
  }
  fVar8 = (float)CalcAngleForVectorRepg((SexyVector2 *)&local_68);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyVector2 *)local_88,fVar8,((float)iVar7 * 0.5 + 1.0) * 0.8,(SexyVector2 *)local_80,
             true);
  GetLaserImapctRig();
  pUVar4 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar4);
  PopAnimRig::SetRenderTransform(pPVar5,aSStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  GetLaserImapctRig();
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  StandaloneEffect::SetVisibility(pSVar6,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  if ((cVar1 != '\0') ||
     ((((param_2 != (SexyVector2 *)0x0 &&
        (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_2), bVar2)) &&
       (nop(), extraout_x0 != (long *)0x0)) &&
      ((cVar1 = (**(code **)(*extraout_x0 + 0x328))(), cVar1 != '\0' ||
       (cVar1 = (**(code **)(*extraout_x0 + 0x330))(extraout_x0), cVar1 != '\0')))))) {
    fVar8 = (float)CalcAngleForVectorRepg((SexyVector2 *)&local_68);
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyVector2 *)local_88,fVar8,1.5,(SexyVector2 *)local_80,true);
    GetLaserSplashRig();
    pUVar4 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
    pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar4);
    PopAnimRig::SetRenderTransform(pPVar5,aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
    GetLaserSplashRig();
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
    StandaloneEffect::SetVisibility(pSVar6,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  }
  else {
    GetLaserSplashRig();
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
    StandaloneEffect::SetVisibility(pSVar6,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::RenderLaser(Sexy::Graphics*) */

void PlantPinecone::RenderLaser(Graphics *param_1)

{
  char cVar1;
  long lVar2;
  UIWidget *this;
  PopAnimRig *this_00;
  StandaloneEffect *pSVar3;
  Graphics *in_x1;
  undefined1 in_w4;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  GraphicsAutoState aGStack_78 [8];
  undefined4 local_70 [2];
  FastCurve aFStack_68 [8];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,in_x1);
  if (1 < *(uint *)(param_1 + 0x28)) {
    lVar2 = FUN_04282e80(*(undefined8 *)(param_1 + 0x10));
    local_70[0] = GetLaserShooterPos((PlantPinecone *)param_1);
    fVar7 = *(float *)(param_1 + 0x4c);
    Sexy::FastCurve::SetOutRange(aFStack_68,*(float *)(param_1 + 0x48),fVar7);
    fVar5 = (float)FUN_0427ffa8(0x3f800000);
    local_60 = Sexy::SexyVector2::operator*((SexyVector2 *)local_70,fVar5);
    local_5c = fVar7;
    fVar5 = (float)FUN_0427ffa8(0x3f800000);
    local_58 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_68,fVar5);
    local_54 = fVar7;
    fVar5 = (float)FUN_0427ffa8(0x3f800000);
    local_50 = Sexy::SexyVector2::operator*((SexyVector2 *)(lVar2 + 0x304),fVar5);
    local_4c = fVar7;
    fVar5 = (float)FUN_0427ffa8(0x3f800000);
    local_48 = Sexy::SexyVector2::operator*((SexyVector2 *)(lVar2 + 0x30c),fVar5);
    local_44 = fVar7;
    local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_58,(SexyVector2 *)&local_60);
    local_3c = fVar7;
    fVar5 = (float)DVec2::getLength((DVec2 *)&local_40);
    local_38 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_50);
    local_34 = fVar7;
    fVar7 = (float)DVec2::getLength((DVec2 *)&local_38);
    iVar4 = *(int *)(param_1 + 0x30);
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    if (cVar1 == '\0') {
      iVar4 = iVar4 + -1;
    }
    else {
      iVar4 = iVar4 + -4;
    }
    fVar6 = (float)CalcAngleForVectorRepg((SexyVector2 *)&local_40);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,fVar5 / fVar7,(float)iVar4 * 0.6 + 1.0);
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyTransform2D *)&local_60,(SexyVector2 *)&local_38,fVar6,(SexyVector2 *)&local_50,
               (SexyVector2 *)0x1,(bool)in_w4);
    GetLaserRig();
    this = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    this_00 = (PopAnimRig *)UIWidget::GetAtlasImage(this);
    PopAnimRig::SetRenderTransform(this_00,aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    GetLaserRig();
    pSVar3 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    StandaloneEffect::SetVisibility(pSVar3,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    GetLaserRig();
    pSVar3 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    StandaloneEffect::Draw(pSVar3,in_x1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    GetLaserRig();
    pSVar3 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    StandaloneEffect::SetVisibility(pSVar3,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::setLaserState(NTLaserState) */

void PlantPinecone::setLaserState
               (undefined1 param_1 [16],undefined4 param_2,PlantPinecone *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  StandaloneEffect *pSVar3;
  RealObject *this;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_3 + 0x28) == param_4) goto switchD_04283850_default;
  uVar4 = GetLaserShooterPos(param_3);
  *(int *)(param_3 + 0x28) = param_4;
  *(undefined4 *)(param_3 + 0x48) = uVar4;
  *(undefined4 *)(param_3 + 0x4c) = param_2;
  switch(param_4) {
  case 0:
    *(undefined4 *)(param_3 + 0x30) = 0;
    *(undefined4 *)(param_3 + 0x34) = 0;
    GetLaserRig();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    StandaloneEffect::SetVisibility(pSVar3,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    GetLaserImapctRig();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    StandaloneEffect::SetVisibility(pSVar3,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_3 + 0x68));
    if (bVar2) {
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x68));
      StandaloneEffect::SetVisibility(pSVar3,false);
    }
    break;
  case 1:
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_3 + 0x10));
    uVar4 = 4;
    if (cVar1 == '\0') {
      uVar4 = 1;
    }
    *(undefined4 *)(param_3 + 0x30) = uVar4;
    UpdateLaserShooterLayer(param_3);
    break;
  case 2:
    GetLaserRig();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    StandaloneEffect::SetVisibility(pSVar3,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar4 = PVZ_T();
    this = *(RealObject **)(param_3 + 0x10);
    *(undefined4 *)(param_3 + 0x34) = uVar4;
    std::string::string((string *)aRStack_10,"Play_Plant_MagGrass_Nitro_Start");
    goto LAB_042838ac;
  case 3:
    this = *(RealObject **)(param_3 + 0x10);
    *(undefined4 *)(param_3 + 0x34) = 0;
    std::string::string((string *)aRStack_10,"Play_Plant_MagGrass_Nitro_End");
LAB_042838ac:
    RealObject::PlayPositionalSound(this,(string *)aRStack_10,0.0);
    std::string::~string((string *)aRStack_10);
    nop();
  }
switchD_04283850_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantPinecone::ApplyPlantfood() */

void __thiscall PlantPinecone::ApplyPlantfood(PlantPinecone *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setLaserState(this,1);
  return;
}


/* PlantPinecone::CancelPlantfood() */

void __thiscall PlantPinecone::CancelPlantfood(PlantPinecone *this)

{
  setLaserState(this,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::CanBeTarget(BoardEntity*) */

void __thiscall PlantPinecone::CanBeTarget(PlantPinecone *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  long *extraout_x0;
  GridItem *pGVar4;
  string *psVar5;
  code *pcVar6;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      nop();
      if (extraout_x0 != (long *)0x0) {
        cVar2 = (**(code **)(*extraout_x0 + 0x328))();
        if (cVar2 == '\0') {
          pcVar6 = *(code **)(*extraout_x0 + 0x3d0);
          psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          std::string::string(asStack_20,"pinecone");
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
          cVar2 = (*pcVar6)(extraout_x0,aRStack_10,0);
          bVar3 = 0;
          if ((cVar2 != '\0') && (cVar2 = Zombie::HasCondition(extraout_x0,0x27), cVar2 == '\0')) {
            bVar3 = Zombie::HasCondition(extraout_x0,0x25);
            bVar3 = bVar3 ^ 1;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          std::string::~string(asStack_20);
          nop();
          goto LAB_042848c8;
        }
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if ((bVar1) &&
         (pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar4 != (GridItem *)0x0))
      {
        bVar3 = (**(code **)(*(long *)pGVar4 + 0x200))();
        goto LAB_042848c8;
      }
    }
  }
  bVar3 = 0;
LAB_042848c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::FindTargetAndFire(PlantWeapon) */

void PlantPinecone::FindTargetAndFire(PlantPinecone *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  PlantAnimRig_Pinecone *this;
  undefined4 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  uVar5 = 2;
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  Plant::FindTarget(aRStack_10,*(undefined8 *)(param_1 + 0x10),uVar5);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar2) {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    cVar1 = CanBeTarget(param_1,(BoardEntity *)pRVar4);
    if (cVar1 != '\0') {
      lVar6 = *(long *)(param_1 + 0x10);
      param_1[0x7c] = (PlantPinecone)0x0;
      iVar3 = FUN_0427fd90(*(undefined4 *)(lVar6 + 0x50));
      if (iVar3 == 5) {
        lVar6 = FUN_04282e80(lVar6);
        fVar7 = *(float *)(lVar6 + 0x2f8);
        fVar8 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
        if (fVar7 <= fVar8) {
          if (param_1[0x7c] == (PlantPinecone)0x0) goto LAB_04284ac0;
        }
        else {
          param_1[0x7c] = (PlantPinecone)0x1;
        }
      }
      else {
LAB_04284ac0:
        if (param_1[0x71] == (PlantPinecone)0x0) {
          lVar6 = FUN_04282e80(*(undefined8 *)(param_1 + 0x10));
          fVar8 = *(float *)(lVar6 + 0x2f4);
          iVar3 = FUN_0427fd90(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x50));
          if (iVar3 == 2) {
            fVar7 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
            if (fVar7 < fVar8) goto LAB_04284b84;
LAB_04284b1c:
            if (param_1[0x71] == (PlantPinecone)0x0) goto LAB_04284ac8;
          }
          else {
            if ((iVar3 < 3) ||
               (fVar7 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0),
               fVar8 + fVar8 <= fVar7)) goto LAB_04284b1c;
LAB_04284b84:
            *(undefined4 *)(param_1 + 0x74) = 0;
            param_1[0x71] = (PlantPinecone)0x1;
          }
          Sexy::CurvedVal::SetMode((CurvedVal *)param_1,0);
        }
      }
LAB_04284ac8:
      if (param_1[0x70] != (PlantPinecone)0x0) {
        this = (PlantAnimRig_Pinecone *)FUN_042830a4(*(undefined8 *)(param_1 + 0x10));
        PlantAnimRig_Pinecone::SetElec(this,true);
      }
      (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
      goto LAB_04284a54;
    }
  }
  cVar1 = '\0';
LAB_04284a54:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::FindLaserTargetByType(BoardEntityTypeFlag, float&) */

void __thiscall
PlantPinecone::FindLaserTargetByType(PlantPinecone *this,undefined4 param_2,float *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  BoardEntity *pBVar7;
  BoardEntity *pBVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  ResistenceValueInfo aRStack_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  FastCurve aFStack_38 [8];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_58);
  lVar2 = *(long *)(this + 0x10);
  uVar5 = 0;
  uVar12 = *(undefined4 *)(lVar2 + 0x1c);
  pBVar8 = (BoardEntity *)0x0;
  local_50 = FUN_0427fdfc(*(undefined4 *)(lVar2 + 0x18),uVar12,*(undefined4 *)(lVar2 + 0x20));
  local_4c = uVar12;
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114),0,10,
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,param_2,
             aIStack_30);
  lVar2 = FUN_04282e80(*(undefined8 *)(this + 0x10));
  fVar13 = *(float *)(lVar2 + 0x2d8);
  fVar9 = (float)Sexy::SexyMath::DegToRad(85.0);
  uVar6 = local_20;
  lVar2 = FUN_0427fde0(local_20,local_18);
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_0427fdec(uVar6,uVar5);
      pBVar7 = (BoardEntity *)*puVar3;
      cVar1 = CanBeTarget(this,pBVar7);
      if (cVar1 != '\0') {
        fVar10 = (float)FUN_0427fdfc(*(undefined4 *)(pBVar7 + 0x18),*(undefined4 *)(pBVar7 + 0x1c),
                                     *(undefined4 *)(pBVar7 + 0x20));
        lVar2 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
        if (fVar10 <= *(float *)(lVar2 + 0x10)) {
          local_48 = CollsionTargetCenterRg(pBVar7);
          local_44 = fVar10;
          local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_50)
          ;
          local_3c = fVar10;
          fVar10 = (float)VectorNorm((FPoint *)&local_40);
          if (fVar10 <= fVar13 * fVar13) {
            Sexy::FastCurve::SetOutRange(aFStack_38,1.0,0.0);
            fVar11 = (float)Sexy::SexyVector2::AngleBetween
                                      ((SexyVector2 *)aFStack_38,(SexyVector2 *)&local_40);
            if ((fVar11 <= fVar9) && ((pBVar8 == (BoardEntity *)0x0 || (fVar10 < *param_3)))) {
              *param_3 = fVar10;
              pBVar8 = pBVar7;
            }
          }
        }
      }
      uVar6 = local_20;
      uVar5 = uVar5 + 1;
      uVar4 = FUN_0427fde0(local_20,local_18);
    } while (uVar5 < uVar4);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pBVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::FindLaserTarget() */

void __thiscall PlantPinecone::FindLaserTarget(PlantPinecone *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  ResourceInfo *pRVar5;
  float fVar6;
  undefined4 uVar7;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  lVar3 = *(long *)(this + 0x10);
  uVar7 = *(undefined4 *)(lVar3 + 0x1c);
  local_8 = ___stack_chk_guard;
  local_20 = FUN_0427fdfc(*(undefined4 *)(lVar3 + 0x18),uVar7,*(undefined4 *)(lVar3 + 0x20));
  local_24 = 0.0;
  local_1c = uVar7;
  pRVar4 = (ResourceInfo *)FindLaserTargetByType(this,2,&local_24);
  if ((pRVar4 != (ResourceInfo *)0x0) ||
     (pRVar4 = (ResourceInfo *)FindLaserTargetByType(this,4,&local_24),
     pRVar4 != (ResourceInfo *)0x0)) {
    this_00 = (RtWeakPtr *)(this + 0x40);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      cVar2 = CanBeTarget(this,(BoardEntity *)pRVar5);
      if (cVar2 != '\0') {
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        local_18 = CollsionTargetCenterRg((BoardEntity *)pRVar5);
        local_14 = uVar7;
        local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_18,(SexyVector2 *)&local_20);
        local_c = uVar7;
        fVar6 = (float)VectorNorm((FPoint *)&local_10);
        if (15.0 < ABS(fVar6 - local_24)) {
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::ApplyAvatarLaserSplashDamage(BoardEntity*) */

void __thiscall
PlantPinecone::ApplyAvatarLaserSplashDamage(PlantPinecone *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  undefined8 *puVar9;
  Zombie *pZVar10;
  ulong uVar11;
  undefined8 uVar12;
  BoardEntity *pBVar13;
  float fVar14;
  float fVar15;
  DamageInfo *pDVar16;
  uint local_9c;
  FastCurve aFStack_98 [4];
  float local_94;
  Point aPStack_90 [4];
  int local_8c;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') && (cVar1 = CanBeTarget(this,param_1), cVar1 != '\0')) {
    lVar6 = FUN_04282e80(*(undefined8 *)(this + 0x10));
    fVar15 = *(float *)(lVar6 + 0x2ec);
    fVar14 = (float)PVZ_Dt();
    pDVar16._0_4_ = (DamageInfo *)(fVar14 * fVar15);
    fVar14 = *(float *)(lVar6 + 0x2f0);
    if ((0.0 < (float)pDVar16._0_4_) && (0.0 < fVar14)) {
      uVar12 = *(undefined8 *)(this + 0x10);
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
      iVar4 = 0;
      DamageInfo::DamageInfo(pDVar16._0_4_,local_80,uStack_7c,aDStack_68,0x2000,uVar12,aPStack_90);
      iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      Sexy::FastCurve::SetOutRange(aFStack_98,*pfVar7,pfVar7[1]);
      BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,iVar2,1,1,iVar4);
      local_94 = (float)(local_8c + local_84 / 2);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      uVar3 = operator|(2,4);
      local_9c = uVar3;
      iVar4 = FUN_0427fce0(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
      if (iVar4 == 2) {
        operator|=(&local_9c,1);
        uVar3 = local_9c;
      }
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      EntityFinder::GetEntitiesTouchingCircle2D
                ((float)iVar4 * SQRT(fVar14),(FastCurve *)&local_80,uVar3,aFStack_98,
                 iVar2 - (int)(fVar14 * 0.5),iVar2 + (int)(fVar14 * 0.5));
      uVar12 = CONCAT44(uStack_7c,local_80);
      uVar8 = FUN_0427fde0(uVar12,local_78);
      for (uVar11 = 0; uVar11 < uVar8; uVar11 = uVar11 + 1) {
        puVar9 = (undefined8 *)FUN_0427fdec(uVar12,uVar11);
        pBVar13 = (BoardEntity *)*puVar9;
        if (param_1 != pBVar13) {
          uVar5 = FUN_0427fce0(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
          cVar1 = RealObject::IsOnOpposingTeam(pBVar13,uVar5);
          if (cVar1 != '\0') {
            puVar9 = (undefined8 *)FUN_0427fdec(CONCAT44(uStack_7c,local_80),uVar11);
            pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
            if (pZVar10 != (Zombie *)0x0) {
              cVar1 = (**(code **)(*(long *)pZVar10 + 0xb8))(pZVar10,7);
              if ((cVar1 == '\0') || (cVar1 = Zombie::HasCondition(pZVar10,0x27), cVar1 != '\0'))
              goto LAB_04285170;
              cVar1 = Zombie::HasCondition(pZVar10,0);
              if (cVar1 != '\0') {
                Zombie::EndCondition(pZVar10,0);
              }
            }
            puVar9 = (undefined8 *)FUN_0427fdec(CONCAT44(uStack_7c,local_80),uVar11);
            (**(code **)(*(long *)*puVar9 + 0x110))((long *)*puVar9,aDStack_68);
          }
LAB_04285170:
          uVar12 = CONCAT44(uStack_7c,local_80);
          uVar8 = FUN_0427fde0(uVar12,local_78);
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      DamageInfo::~DamageInfo(aDStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::ApplyLaserDamage(BoardEntity*) */

void __thiscall PlantPinecone::ApplyLaserDamage(PlantPinecone *this,BoardEntity *param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04282e80(*(undefined8 *)(this + 0x10));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    iVar3 = *(int *)(this + 0x30) + -1;
  }
  else {
    iVar3 = *(int *)(this + 0x30) + -4;
    ApplyAvatarLaserSplashDamage(this,param_1);
  }
  fVar8 = *(float *)(lVar2 + 0x2cc);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    fVar6 = *(float *)(lVar2 + 0x2c4);
  }
  else {
    fVar6 = *(float *)(lVar2 + 0x2c8);
  }
  fVar7 = (float)PVZ_Dt();
  uVar5 = *(undefined8 *)(this + 0x10);
  pcVar4 = *(code **)(*(long *)param_1 + 0x110);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)((fVar6 + (float)iVar3 * fVar8) * fVar7),local_70,local_6c,aDStack_68,
             0x2000,uVar5,aPStack_78,0);
  (*pcVar4)(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::UpdateUnconditionally() */

void PlantPinecone::UpdateUnconditionally(void)

{
  bool bVar1;
  char cVar2;
  PlantPinecone *in_x0;
  long lVar3;
  BoardEntity *pBVar4;
  float *pfVar5;
  StandaloneEffect *pSVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  float local_24;
  undefined4 local_20;
  float fStack_1c;
  undefined4 local_18 [2];
  undefined4 local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)in_x0 + 0x180))();
  if ((cVar2 != '\0') && (1 < *(uint *)(in_x0 + 0x28))) {
    lVar3 = FUN_04282e80(*(undefined8 *)(in_x0 + 0x10));
    cVar2 = LaserNeedLevelUp(in_x0);
    if (cVar2 != '\0') {
      LaserLevelUp(in_x0);
    }
    UpdateLaserShooterLayer(in_x0);
    local_20 = GetLaserShooterPos(in_x0);
    fStack_1c = in_s1;
    if ((*(int *)(in_x0 + 0x28) == 3) ||
       (pBVar4 = (BoardEntity *)FindLaserTarget(in_x0), pBVar4 == (BoardEntity *)0x0)) {
      pBVar4 = (BoardEntity *)0x0;
      *(ulong *)(in_x0 + 0x50) = CONCAT44(fStack_1c,local_20);
      bVar1 = true;
    }
    else {
      fVar7 = (float)CollsionTargetCenterRg(pBVar4);
      bVar1 = false;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x40),(RtWeakPtrBase *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar7,in_s1);
      *(ulong *)(in_x0 + 0x50) = CONCAT44(uStack_c,local_10);
    }
    local_18[0] = Sexy::SexyVector2::operator-
                            ((SexyVector2 *)(in_x0 + 0x50),(SexyVector2 *)(in_x0 + 0x48));
    fVar7 = (float)DVec2::getLength((DVec2 *)local_18);
    fVar9 = *(float *)(lVar3 + 0x2dc);
    fVar8 = (float)PVZ_Dt();
    local_10 = 0x3f800000;
    local_24 = (fVar8 * fVar9) / fVar7;
    pfVar5 = eastl::min_alt<float>(&local_24,(float *)&local_10);
    local_10 = Sexy::SexyVector2::operator*((SexyVector2 *)local_18,*pfVar5);
    Sexy::TPoint<float>::operator+=((TPoint<float> *)(in_x0 + 0x48),(TPoint *)&local_10);
    if ((5.0 <= fVar7) || (!bVar1)) {
      GetLaserRig();
      pSVar6 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      StandaloneEffect::SetVisibility(pSVar6,true);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if (5.0 <= fVar7) {
        GetLaserImapctRig();
        pSVar6 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        StandaloneEffect::SetVisibility(pSVar6,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        GetLaserSplashRig();
        pSVar6 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        StandaloneEffect::SetVisibility(pSVar6,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        goto LAB_0428558c;
      }
    }
    else {
      GetLaserRig();
      pSVar6 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      StandaloneEffect::SetVisibility(pSVar6,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    }
    if (*(int *)(in_x0 + 0x28) == 3) {
      setLaserState();
      PlantFramework::ManualCancelPlantfood((PlantFramework *)in_x0);
    }
    else if ((pBVar4 != (BoardEntity *)0x0) && (*(int *)(in_x0 + 0x28) == 2)) {
      LaserHitBlasting((BoardEntity *)in_x0,(SexyVector2 *)pBVar4);
      ApplyLaserDamage(in_x0,pBVar4);
    }
  }
LAB_0428558c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPinecone::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantPinecone::Fire(PlantPinecone *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  RtWeakPtr *this_00;
  PlantPinecone PVar1;
  char cVar2;
  int iVar3;
  RtObject *this_01;
  GridItemVase *this_02;
  undefined8 *puVar4;
  PineconePlantfoodProjectile *this_03;
  ResourceInfo *pRVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_04;
  DVec3 *this_05;
  float *pfVar6;
  ActionSubSystem *pAVar7;
  PineconeProjectile *this_06;
  PineconeSpecialProjectile *this_07;
  PlantAnimRig_Pinecone *this_08;
  long lVar8;
  Plant *this_09;
  undefined4 uVar9;
  RealObject *pRVar10;
  float fVar11;
  float fVar12;
  float local_b8;
  float fStack_b4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  RtMixedPtr aRStack_a8 [8];
  RtId aRStack_a0 [8];
  string asStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 == '\0') {
    if (this[0x7c] == (PlantPinecone)0x0) {
      if (this[0x71] == (PlantPinecone)0x0) {
        lVar8 = *(long *)(this + 0x10);
        PVar1 = this[0x70];
        *(undefined4 *)(lVar8 + 0x150) = 0;
        if (PVar1 != (PlantPinecone)0x0) {
          *(undefined4 *)(lVar8 + 0x150) = 1;
        }
      }
      else {
        iVar3 = *(int *)(this + 0x74);
        *(int *)(*(long *)(this + 0x10) + 0x150) = iVar3;
        if (iVar3 == 1) {
          this[0x71] = (PlantPinecone)0x0;
        }
      }
    }
    else {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 4;
    }
LAB_04285870:
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68);
    this_01 = (RtObject *)
              PlantFramework::Fire
                        ((PlantFramework *)this,
                         (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68
                         ,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 == '\0') {
      if (this[0x7c] == (PlantPinecone)0x0) {
        pRVar10 = *(RealObject **)(this + 0x10);
        std::string::string((string *)&local_68,"Play_Plant_Pinecone_Attack");
        RealObject::PlayPositionalSound(pRVar10,(string *)&local_68,0.0);
        std::string::~string((string *)&local_68);
        nop();
        if (this[0x71] == (PlantPinecone)0x0) {
          if (this[0x70] == (PlantPinecone)0x0) {
            this_06 = Sexy::RtObject::Cast<PineconeProjectile>(this_01);
            if (this_06 != (PineconeProjectile *)0x0) {
              PineconeProjectile::SetOwnerPlant(this_06,this);
            }
          }
          else {
            this_07 = Sexy::RtObject::Cast<PineconeSpecialProjectile>(this_01);
            if (this_07 != (PineconeSpecialProjectile *)0x0) {
              PineconeSpecialProjectile::SetOwnerPlant(this_07,this);
            }
          }
        }
        else {
          *(undefined4 *)(this + 0x74) = 1;
          this_08 = (PlantAnimRig_Pinecone *)FUN_042830a4(*(undefined8 *)(this + 0x10));
          PlantAnimRig_Pinecone::SetElec(this_08,true);
          Sexy::CurvedVal::SetMode((CurvedVal *)this,1);
          (**(code **)(*(long *)this + 0x1a0))(this);
        }
      }
      else {
        pRVar10 = *(RealObject **)(this + 0x10);
        std::string::string((string *)&local_68,"Play_Plant_Pinecone_LV5");
        RealObject::PlayPositionalSound(pRVar10,(string *)&local_68,0.0);
        std::string::~string((string *)&local_68);
        nop();
        nop();
        if (this_02 != (GridItemVase *)0x0) {
          GridItemVase::SetAllowPreGameplayInteraction(this_02,true);
        }
      }
    }
    else {
      pRVar10 = *(RealObject **)(this + 0x10);
      std::string::string((string *)&local_68,"Play_Plant_Pinecone_Attack");
      RealObject::PlayPositionalSound(pRVar10,(string *)&local_68,0.0);
      std::string::~string((string *)&local_68);
      nop();
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(this + 0x10));
      local_88 = *puVar4;
      local_80 = *(undefined4 *)(puVar4 + 1);
      nop();
      if (this_03 != (PineconePlantfoodProjectile *)0x0) {
        this_00 = (RtWeakPtr *)(this + 0x38);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        cVar2 = CanBeTarget(this,(BoardEntity *)pRVar5);
        if (cVar2 == '\0') {
          lVar8 = PineconePlantfoodProjectile::FindNewTarget(this_03);
          if (lVar8 == 0) {
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)&local_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          }
          else {
            PineconePlantfoodProjectile::FindNewTarget(this_03);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)&local_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          }
        }
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        if (pRVar5 == (ResourceInfo *)0x0) {
          PineconePlantfoodProjectile::SetTargetLocked(this_03,true);
        }
        else {
          this_04 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          puVar4 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_04);
          local_78 = *puVar4;
          local_70 = *(undefined4 *)(puVar4 + 1);
          PineconePlantfoodProjectile::SetTargetLocked(this_03,true);
          Sexy::SexyMath::DegToRad(0.0);
          FUN_0427fd88(this_03 + 0xc4);
          this_05 = (DVec3 *)Projectile::GetVelocity((Projectile *)this_03);
          fVar11 = (float)DVec3::getLength(this_05);
          PineconePlantfoodProjectile::SetRotatedVelocity(this_03,fVar11);
          _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_68);
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)&local_b8);
          fVar11 = (float)local_78;
          local_b8 = (float)local_88 + ((float)local_78 - (float)local_88) * 0.5;
          pfVar6 = eastl::min_alt<float>
                             ((float *)((long)&local_88 + 4),(float *)((long)&local_78 + 4));
          fVar12 = *pfVar6;
          iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
          fStack_b4 = fVar12 - (float)iVar3 * 0.5;
          local_60 = CONCAT44(fStack_b4,local_b8);
          local_58 = local_60;
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,fVar11,local_78._4_4_);
          local_68 = local_90;
          pAVar7 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)aRStack_b0);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
          std::string::string(asStack_98,"onFlyToTargetDone");
          RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
                    (aRStack_50,aRStack_a0,asStack_98);
          ActionSubSystem::AddActionBezierTo
                    ((ActionSubSystem *)0x3fcccccd,pAVar7,(FastCurve *)&local_90,
                     (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_68,
                     aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          std::string::~string(asStack_98);
          nop();
          Sexy::RtId::~RtId(aRStack_a0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
          pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
          cVar2 = CanBeTarget(this,(BoardEntity *)pRVar5);
          if (cVar2 == '\0') {
            PineconePlantfoodProjectile::FindNewTarget(this_03);
            goto LAB_04285918;
          }
        }
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        PineconePlantfoodProjectile::SetOverrideTarget(this_03,(BoardEntity *)pRVar5);
      }
    }
  }
  else {
    this_09 = *(Plant **)(this + 0x10);
    *(undefined4 *)(this_09 + 0x150) = 2;
    cVar2 = Plant::GetAvatarEnable(this_09);
    if (cVar2 == '\0') {
      lVar8 = *(long *)(this + 0x10);
      uVar9 = *(undefined4 *)(lVar8 + 0x150);
    }
    else {
      lVar8 = *(long *)(this + 0x10);
      uVar9 = 3;
      *(undefined4 *)(lVar8 + 0x150) = 3;
    }
    Plant::FindTarget((RtMixedPtrBase *)&local_68,lVar8,uVar9);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_68);
    if (cVar2 != '\0') {
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
      cVar2 = CanBeTarget(this,(BoardEntity *)pRVar5);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        goto LAB_04285870;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    this_01 = (RtObject *)0x0;
  }
LAB_04285918:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_01);
  }
  return;
}

