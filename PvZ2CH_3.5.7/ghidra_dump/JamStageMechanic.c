// Class: JamStageMechanic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::onZombieAddedToBoard(Zombie*) */

void __thiscall JamStageMechanic::onZombieAddedToBoard(JamStageMechanic *this,Zombie *param_1)

{
  undefined **local_10;
  long local_8;
  
  local_10 = &PTR_nop_0690b760;
  local_8 = ___stack_chk_guard;
  JamApplier::ApplyMusicConditionsTo((JamApplier *)&local_10,(string *)(this + 0x18),param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::onJammableGridItemAddedToBoard(GridItemJammable*) */

void __thiscall
JamStageMechanic::onJammableGridItemAddedToBoard(JamStageMechanic *this,GridItemJammable *param_1)

{
  undefined **local_10;
  long local_8;
  
  local_10 = &PTR_nop_0690b760;
  local_8 = ___stack_chk_guard;
  JamApplier::ApplyJamToJammableGridItem
            ((JamApplier *)&local_10,param_1,(string *)&DAT_06b2be28,(string *)(this + 0x18));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::onZombieHypnotized(Zombie*) */

void __thiscall JamStageMechanic::onZombieHypnotized(JamStageMechanic *this,Zombie *param_1)

{
  undefined **local_10;
  long local_8;
  
  local_10 = &PTR_nop_0690b760;
  local_8 = ___stack_chk_guard;
  JamApplier::RemoveMusicConditionsFrom((JamApplier *)&local_10,(string *)(this + 0x18),param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::StaticClassInit() */

void JamStageMechanic::StaticClassInit(void)

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
    std::string::string(asStack_10,"JamStageMechanic");
    (*pcVar2)(plVar1,asStack_10,FUN_04850cc4,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JamStageMechanic::StaticGetClass() */

long * JamStageMechanic::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"JamStageMechanic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JamStageMechanic::GetClass() const */

long * JamStageMechanic::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"JamStageMechanic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JamStageMechanic::~JamStageMechanic() */

void __thiscall JamStageMechanic::~JamStageMechanic(JamStageMechanic *this)

{
  *(undefined ***)this = &PTR_GetClass_0690b780;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* JamStageMechanic::~JamStageMechanic() */

void __thiscall JamStageMechanic::~JamStageMechanic(JamStageMechanic *this)

{
  ~JamStageMechanic(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::JamStageMechanic() */

void __thiscall JamStageMechanic::JamStageMechanic(JamStageMechanic *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_0690b780;
  std::string::string((string *)(this + 0x10),"");
  nop();
  std::string::string((string *)(this + 0x18),"");
  nop();
  *(undefined4 *)(this + 0x20) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JamStageMechanic::StaticNew() */

JamStageMechanic * JamStageMechanic::StaticNew(void)

{
  JamStageMechanic *this;
  
  this = ::operator_new(0x38);
  JamStageMechanic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::onTransitionStopped(std::string const&) */

void JamStageMechanic::onTransitionStopped(string *param_1)

{
  bool bVar1;
  UIWidget *pUVar2;
  PopAnimRig *pPVar3;
  ulong uVar4;
  undefined8 uVar5;
  string *psVar6;
  ulong uVar7;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar6 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x20) < 1) {
    psVar6 = param_1 + 0x18;
  }
  FUN_05475d88(asStack_50,psVar6);
  pUVar2 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar2);
  uVar7 = 0;
  while( true ) {
    uVar5 = DAT_06b2bde0;
    uVar4 = FUN_0484f7e4(DAT_06b2bde0,DAT_06b2bde8);
    if (uVar4 <= uVar7) break;
    uVar5 = FUN_0484f7f0(uVar5,uVar7);
    FUN_031f5e7c(asStack_48,"_main_",uVar5);
    std::operator+(asStack_48,"_loop");
    psVar6 = (string *)FUN_0484f7f0(DAT_06b2bde0,uVar7);
    bVar1 = (bool)std::operator==(asStack_50,psVar6);
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_40,bVar1);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    uVar7 = uVar7 + 1;
  }
  std::string::string(asStack_40,"animation_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  pUVar2 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30));
  pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar2);
  uVar7 = 0;
  while( true ) {
    uVar5 = DAT_06b2bde0;
    uVar4 = FUN_0484f7e4(DAT_06b2bde0,DAT_06b2bde8);
    if (uVar4 <= uVar7) break;
    uVar5 = FUN_0484f7f0(uVar5,uVar7);
    FUN_031f5e7c(asStack_48,"_main_",uVar5);
    std::operator+(asStack_48,"_loop");
    psVar6 = (string *)FUN_0484f7f0(DAT_06b2bde0,uVar7);
    bVar1 = (bool)std::operator==(asStack_50,psVar6);
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_40,bVar1);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    uVar7 = uVar7 + 1;
  }
  std::string::string(asStack_40,"animation_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::onLoadComplete() */

void __thiscall JamStageMechanic::onLoadComplete(JamStageMechanic *this)

{
  PopAnim *pPVar1;
  Effect_PopAnim *pEVar2;
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  Vec3 aVStack_28 [16];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,-470.5,-61.5,0.0);
  EATextSquish::Vec3::Vec3(aVStack_18,-470.5,-61.5,0.0);
  std::string::string(asStack_38,"POPANIM_BACKGROUNDS_BACKGROUND_EIGHTIES_ENVIRONMENTAL_EFFECTS_TOP"
                     );
  GetPAMByName(asStack_38);
  pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  nop();
  pEVar2 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::CreatePopAnimRig(pEVar2,pPVar1,(RtClass *)0x0);
  (**(code **)(*(long *)pEVar2 + 0x80))(0x3f84cccd,pEVar2);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar2,(SexyVector3 *)aVStack_28,-1);
  FUN_0484f7cc(pEVar2 + 0x1c,0x24dd8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar2,false);
  std::string::string(asStack_38,"POPANIM_BACKGROUNDS_BACKGROUND_EIGHTIES_ENVIRONMENTAL_EFFECTS_BTM"
                     );
  GetPAMByName(asStack_38);
  pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  nop();
  pEVar2 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::CreatePopAnimRig(pEVar2,pPVar1,(RtClass *)0x0);
  (**(code **)(*(long *)pEVar2 + 0x80))(0x3f84cccd,pEVar2);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar2,(SexyVector3 *)aVStack_18,-1);
  FUN_0484f7cc(pEVar2 + 0x1c,500000);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar2,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::doEffectTransition(std::string const&, std::string const&) const */

void __thiscall
JamStageMechanic::doEffectTransition(JamStageMechanic *this,string *param_1,string *param_2)

{
  bool bVar1;
  StandaloneEffect *pSVar2;
  UIWidget *pUVar3;
  PopAnimRig *pPVar4;
  ulong uVar5;
  undefined8 uVar6;
  string *psVar7;
  ulong uVar8;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  StandaloneEffect::SetVisibility(pSVar2,true);
  pSVar2 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  StandaloneEffect::SetVisibility(pSVar2,true);
  pUVar3 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar3);
  uVar8 = 0;
  while( true ) {
    uVar6 = DAT_06b2bde0;
    uVar5 = FUN_0484f7e4(DAT_06b2bde0,DAT_06b2bde8);
    if (uVar5 <= uVar8) break;
    uVar6 = FUN_0484f7f0(uVar6,uVar8);
    FUN_031f5e7c(asStack_60,"_main_",uVar6);
    std::operator+(asStack_60,"_intro");
    psVar7 = (string *)FUN_0484f7f0(DAT_06b2bde0,uVar8);
    bVar1 = (bool)std::operator==(param_2,psVar7);
    PopAnimRig::SetLayerVisibility(pPVar4,asStack_58,bVar1);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    uVar6 = FUN_0484f7f0(DAT_06b2bde0,uVar8);
    FUN_031f5e7c(asStack_60,"_main_",uVar6);
    std::operator+(asStack_60,"_outro");
    psVar7 = (string *)FUN_0484f7f0(DAT_06b2bde0,uVar8);
    bVar1 = (bool)std::operator==(param_1,psVar7);
    PopAnimRig::SetLayerVisibility(pPVar4,asStack_58,bVar1);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    uVar8 = uVar8 + 1;
  }
  std::string::string(asStack_58,"transition");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_50);
  std::string::~string(asStack_58);
  nop();
  pUVar3 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar3);
  uVar8 = 0;
  while( true ) {
    uVar6 = DAT_06b2bde0;
    uVar5 = FUN_0484f7e4(DAT_06b2bde0,DAT_06b2bde8);
    if (uVar5 <= uVar8) break;
    uVar6 = FUN_0484f7f0(uVar6,uVar8);
    FUN_031f5e7c(asStack_60,"_main_",uVar6);
    std::operator+(asStack_60,"_intro");
    psVar7 = (string *)FUN_0484f7f0(DAT_06b2bde0,uVar8);
    bVar1 = (bool)std::operator==(param_2,psVar7);
    PopAnimRig::SetLayerVisibility(pPVar4,asStack_58,bVar1);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    uVar6 = FUN_0484f7f0(DAT_06b2bde0,uVar8);
    FUN_031f5e7c(asStack_60,"_main_",uVar6);
    std::operator+(asStack_60,"_outro");
    psVar7 = (string *)FUN_0484f7f0(DAT_06b2bde0,uVar8);
    bVar1 = (bool)std::operator==(param_1,psVar7);
    PopAnimRig::SetLayerVisibility(pPVar4,asStack_58,bVar1);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    uVar8 = uVar8 + 1;
  }
  std::string::string(asStack_68,"transition");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onTransitionStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,asStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar4,asStack_68,0,aDStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aDStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::applyNewJam(std::string const&) */

void __thiscall JamStageMechanic::applyNewJam(JamStageMechanic *this,string *param_1)

{
  string *psVar1;
  bool bVar2;
  undefined **local_10;
  long local_8;
  
  local_10 = &PTR_nop_0690b760;
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator!=(param_1,(string *)&DAT_06b2be28);
  if (bVar2) {
    psVar1 = (string *)(this + 0x18);
    if (*(int *)(this + 0x20) < 1) {
      JamApplier::ApplyMusicConditionsToAllZombies((JamApplier *)&local_10,psVar1,param_1);
      JamApplier::ApplyJamToAllJammableGridItems((JamApplier *)&local_10,psVar1,param_1);
      JamApplier::ChangeMusicGenre((JamApplier *)&local_10,param_1);
      JamApplier::PlayMusicGenreEnterEvent((JamApplier *)&local_10,param_1);
      doEffectTransition(this,psVar1,param_1);
    }
    thunk_FUN_05475e00(psVar1,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::applyOverridingJam(std::string const&) */

void __thiscall JamStageMechanic::applyOverridingJam(JamStageMechanic *this,string *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,this + 0x18);
  thunk_FUN_05475e00((string *)(this + 0x10),param_1);
  applyNewJam(this,(string *)(this + 0x10));
  thunk_FUN_05475e00(this + 0x18,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JamStageMechanic::onOverrideJamsWith(std::string const&) */

void __thiscall JamStageMechanic::onOverrideJamsWith(JamStageMechanic *this,string *param_1)

{
  if (0 < *(int *)(this + 0x20)) {
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    return;
  }
  applyOverridingJam(this,param_1);
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  return;
}


/* JamStageMechanic::onPostLoad() */

void __thiscall JamStageMechanic::onPostLoad(JamStageMechanic *this)

{
  char cVar1;
  
  if (0 < *(int *)(this + 0x20)) {
    applyOverridingJam(this,(string *)(this + 0x10));
    return;
  }
  cVar1 = FUN_0547419c((string *)(this + 0x18));
  if (cVar1 != '\0') {
    return;
  }
  applyNewJam(this,(string *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::onRestoreOriginalJam() */

void __thiscall JamStageMechanic::onRestoreOriginalJam(JamStageMechanic *this)

{
  uint uVar1;
  uint *puVar2;
  size_t __n;
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x20)) {
    local_10[0] = *(int *)(this + 0x20) + -1;
    local_14 = 0;
    puVar2 = (uint *)eastl::max_alt<int>(&local_14,local_10);
    uVar1 = *puVar2;
    __n = (size_t)uVar1;
    *(uint *)(this + 0x20) = uVar1;
    if ((int)uVar1 < 1) {
      FUN_05475d88((string *)local_10,this + 0x18);
      thunk_FUN_05475e00(this + 0x18,(string *)(this + 0x10));
      applyNewJam(this,(string *)local_10);
      std::string::append((string *)(this + 0x10),"",__n);
      std::string::~string((string *)local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::getJamForEvents(std::vector<std::string, std::allocator<std::string > > const&)
   const */

void __thiscall JamStageMechanic::getJamForEvents(JamStageMechanic *this,vector *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0485031c(*(undefined8 *)param_1);
  uVar3 = FUN_0485036c(*(undefined8 *)(param_1 + 8));
  local_18 = FUN_04851320(uVar2,uVar3);
  local_10 = FUN_0485036c(*(undefined8 *)(param_1 + 8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06b2be28;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* JamStageMechanic::onWaveNotificationEvent(std::vector<std::string, std::allocator<std::string > >
   const&) */

void __thiscall JamStageMechanic::onWaveNotificationEvent(JamStageMechanic *this,vector *param_1)

{
  char cVar1;
  string *psVar2;
  
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)param_1);
  if (cVar1 != '\0') {
    return;
  }
  psVar2 = (string *)getJamForEvents(this,param_1);
  applyNewJam(this,psVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JamStageMechanic::registerForEvents() */

void __thiscall JamStageMechanic::registerForEvents(JamStageMechanic *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  CBMemberTranslatorX aCStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieAddedToBoard);
  local_f0 = local_b8;
  local_100 = local_c8;
  uStack_f8 = uStack_c0;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<JamStageMechanic,void(JamStageMechanic::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieAddedToBoard);
  local_100 = local_b0;
  uStack_f8 = uStack_a8;
  local_f0 = local_a0;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<JamStageMechanic,void(JamStageMechanic::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieReaddedToBoard,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWaveNotificationEvent);
  local_110 = local_88;
  local_120 = local_98;
  uStack_118 = uStack_90;
  MessageRouter::
  Subscribe<std::vector<std::string,std::allocator<std::string>>const&,Sexy::CBMemberTranslatorX<JamStageMechanic,void(JamStageMechanic::*)(std::vector<std::string,std::allocator<std::string>>const&)>>
            ((MessageRouter *)puVar1,Message::SendWaveNotificationEvents,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieHypnotized);
  local_100 = local_80;
  uStack_f8 = uStack_78;
  local_f0 = local_70;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<JamStageMechanic,void(JamStageMechanic::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieHypnotized,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJammableGridItemAddedToBoard);
  local_130 = local_58;
  local_140 = local_68;
  uStack_138 = uStack_60;
  MessageRouter::
  Subscribe<GridItemJammable*,Sexy::CBMemberTranslatorX<JamStageMechanic,void(JamStageMechanic::*)(GridItemJammable*)>>
            ((MessageRouter *)puVar1,Message::JammableGridItemAddedToBoard,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOverrideJamsWith);
  local_160 = local_50;
  uStack_158 = uStack_48;
  local_150 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<JamStageMechanic,void(JamStageMechanic::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OverrideJamsWith,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRestoreOriginalJam);
  Sexy::Delegate0::Delegate0<JamStageMechanic,void(JamStageMechanic::*)()>(aDStack_38,aCStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RestoreOriginalJam,aDStack_38);
  pLVar2 = (LevelModuleManager *)FUN_0484f7d4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<JamStageMechanic,void(JamStageMechanic::*)()>(aDStack_38,aCStack_e0);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

