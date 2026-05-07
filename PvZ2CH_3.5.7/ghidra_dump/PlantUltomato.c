// Class: PlantUltomato


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::getPositionForTarget(BoardEntity*) */

void __thiscall PlantUltomato::getPositionForTarget(PlantUltomato *this,BoardEntity *param_1)

{
  Insets *pIVar1;
  FastCurve local_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar1 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
  Sexy::Insets::Insets((Insets *)&local_18,pIVar1);
  Sexy::FastCurve::SetOutRange
            (local_20,(float)(local_18 + local_10 / 2),(float)(local_14 + local_c / 2));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_20._0_4_,local_20._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::GetFireSoundEvent() const */

void PlantUltomato::GetFireSoundEvent(void)

{
  long lVar1;
  char cVar2;
  long *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = (**(code **)(*in_x0 + 0x180))();
  if (cVar2 == '\0') {
    PlantFramework::GetFireSoundEvent();
  }
  else {
    std::string::string(in_x8,"Play_PeaPod_Fire_PF");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantUltomato::DisplayAvatar() */

void __thiscall PlantUltomato::DisplayAvatar(PlantUltomato *this)

{
  (**(code **)(*(long *)this + 0x4c0))();
  (**(code **)(*(long *)this + 0x220))(this);
  return;
}


/* PlantUltomato::CanApplyPlantfood() */

bool __thiscall PlantUltomato::CanApplyPlantfood(PlantUltomato *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  bVar1 = false;
  if (cVar2 == '\0') {
    bVar1 = *(int *)(*(long *)(this + 0x10) + 200) != 10;
  }
  return bVar1;
}


/* PlantUltomato::GetRefundSunAmount() */

float __thiscall PlantUltomato::GetRefundSunAmount(PlantUltomato *this)

{
  char cVar1;
  int iVar2;
  Plant *this_00;
  float fVar3;
  
  this_00 = *(Plant **)(this + 0x10);
  cVar1 = FUN_04150584(this_00[0x18a]);
  fVar3 = 0.0;
  if (cVar1 == '\0') {
    iVar2 = Plant::GetActualCost(this_00);
    fVar3 = (float)iVar2;
  }
  return fVar3;
}


/* PlantUltomato::GetDamageFlags(PlantWeapon) */

undefined8 __thiscall PlantUltomato::GetDamageFlags(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 1) {
    return 0x2000000000000;
  }
  uVar1 = operator|(0x2000,0x2000000000000);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::StaticClassInit() */

void PlantUltomato::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantUltomato");
    (*pcVar2)(plVar1,asStack_10,FUN_0415374c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantUltomato::StaticGetClass() */

long * PlantUltomato::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantUltomato",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantUltomato::GetClass() const */

long * PlantUltomato::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantUltomato",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantUltomato::CanUpgrade() */

bool __thiscall PlantUltomato::CanUpgrade(PlantUltomato *this)

{
  char cVar1;
  
  if ((*(int *)(this + 0x28) < 2) && (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 == '\0')
     ) {
    return *(int *)(*(long *)(this + 0x10) + 200) != 10;
  }
  return false;
}


/* PlantUltomato::TriggerBoost() */

void __thiscall PlantUltomato::TriggerBoost(PlantUltomato *this)

{
  char cVar1;
  
  cVar1 = CanUpgrade(this);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x4c0))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::getLaserAnimationName(UltomatoEffectType) */

void PlantUltomato::getLaserAnimationName(string *param_1,long param_2,int param_3)

{
  long lVar1;
  char cVar2;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(param_2 + 0x28) == 1) {
    if ((param_3 != 2) && (param_3 != 0)) {
      std::string::string(param_1,"animation2");
      nop();
      goto LAB_04150bf0;
    }
    cVar2 = FUN_041505e8(*(undefined8 *)(param_2 + 0x10));
    if (cVar2 == '\0') {
      __s = "animation2";
    }
    else {
      __s = "animation2_lv5";
    }
  }
  else if (*(int *)(param_2 + 0x28) == 2) {
    if (((param_3 != 2) && (param_3 != 0)) && (param_3 != 1)) {
      std::string::string(param_1,"animation3");
      nop();
      goto LAB_04150bf0;
    }
    cVar2 = FUN_041505e8(*(undefined8 *)(param_2 + 0x10));
    if (cVar2 == '\0') {
      __s = "animation3";
    }
    else {
      __s = "animation3_lv5";
    }
  }
  else {
    if (param_3 != 2) {
      std::string::string(param_1,"animation1");
      nop();
      goto LAB_04150bf0;
    }
    cVar2 = FUN_041505e8(*(undefined8 *)(param_2 + 0x10));
    if (cVar2 == '\0') {
      __s = "animation1";
    }
    else {
      __s = "animation1_lv5";
    }
  }
  std::string::string(param_1,__s);
  nop();
LAB_04150bf0:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantUltomato::canSpawnChild() */

bool __thiscall PlantUltomato::canSpawnChild(PlantUltomato *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  bVar1 = false;
  if (cVar2 != '\0') {
    bVar1 = *(int *)(this + 0x28) - 1U < 2;
  }
  return bVar1;
}


/* PlantUltomato::calcLaserRenderLayer() */

void PlantUltomato::calcLaserRenderLayer(void)

{
  Board::MakeRenderOrder(0x64960,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1,0);
  return;
}


/* PlantUltomato::getHitEffectOffset() */

undefined1  [16] __thiscall PlantUltomato::getHitEffectOffset(PlantUltomato *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*(int *)(this + 0x28) == 1) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = DAT_06aeec20 & 0xffffffff;
    return auVar3;
  }
  if (*(int *)(this + 0x28) != 2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = DAT_06aeec00 & 0xffffffff;
    return auVar1;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = DAT_06aeec40 & 0xffffffff;
  return auVar2;
}


/* PlantUltomato::getStartEffectOffset() */

undefined1  [16] __thiscall PlantUltomato::getStartEffectOffset(PlantUltomato *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*(int *)(this + 0x28) == 1) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = DAT_06aeebd8 & 0xffffffff;
    return auVar3;
  }
  if (*(int *)(this + 0x28) != 2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = DAT_06aeec68 & 0xffffffff;
    return auVar1;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = DAT_06aeebe8 & 0xffffffff;
  return auVar2;
}


/* PlantUltomato::getHitEffectYScale() */

undefined1  [16] __thiscall PlantUltomato::getHitEffectYScale(PlantUltomato *this)

{
  if (*(int *)(this + 0x28) == 1) {
    return ZEXT816(0x3fc00000);
  }
  if (*(int *)(this + 0x28) == 2) {
    return ZEXT816(0x40000000);
  }
  return ZEXT816(0x3f800000);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::getMainAttackHitEffect() */

void __thiscall PlantUltomato::getMainAttackHitEffect(PlantUltomato *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"POPANIM_EFFECTS_ULTOMATO_HIT_FX");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::getMainAttackStartEffect() */

void __thiscall PlantUltomato::getMainAttackStartEffect(PlantUltomato *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"POPANIM_EFFECTS_ULTOMATO_PROJECTILE_LASER_START");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantUltomato::getMainBeamYScale() */

undefined4 __thiscall PlantUltomato::getMainBeamYScale(PlantUltomato *this)

{
  if (*(int *)(this + 0x28) == 1) {
    return 0x3f800000;
  }
  if (*(int *)(this + 0x28) == 2) {
    return 0x3fc00000;
  }
  return 0x3f19999a;
}


/* PlantUltomato::getMainBeamYOffset() */

undefined1  [16] __thiscall PlantUltomato::getMainBeamYOffset(PlantUltomato *this)

{
  if (*(int *)(this + 0x28) == 1) {
    return ZEXT816(0xc1300000);
  }
  if (*(int *)(this + 0x28) == 2) {
    return ZEXT816(0);
  }
  return ZEXT816(0x40c00000);
}


/* PlantUltomato::getMainBeamXOffset() */

undefined1  [16] __thiscall PlantUltomato::getMainBeamXOffset(PlantUltomato *this)

{
  if (*(int *)(this + 0x28) == 1) {
    return ZEXT816(0);
  }
  if (*(int *)(this + 0x28) == 2) {
    return ZEXT816(0x41700000);
  }
  return ZEXT816(0x40400000);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::trySpawnChild(Sexy::RtWeakPtr<PlantType const>, int, int) */

void __thiscall
PlantUltomato::trySpawnChild(undefined8 param_1,RtWeakPtrBase *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  Board *pBVar3;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_18,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  cVar1 = Board::CanPlantAt(pBVar3,aPStack_18,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 != '\0') {
    uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    Board::AddPlant((Board *)0x0,uVar2,param_3,param_4,aRStack_10,1,1,0xffffffff,0,1,0,0,1,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::OnAnimCommand(std::string const&, std::string const&) */

void PlantUltomato::OnAnimCommand(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::operator==(param_2,"use_action");
  if ((bool)cVar1) {
    cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (cVar1 != '\0') {
      Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Plant::DoSpecial(*(Plant **)(param_1 + 0x10));
      goto LAB_04151664;
    }
  }
  else {
    bVar2 = std::operator==(param_2,"use_action2");
    if ((bVar2) && (cVar3 = canSpawnChild((PlantUltomato *)param_1), cVar3 != '\0')) {
      uVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_1 + 0x10));
      uVar5 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
      Plant::GetType();
      Plant::KillPlant(*(Plant **)(param_1 + 0x10),1,0,1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      trySpawnChild((PlantUltomato *)param_1,aRStack_10,uVar4,uVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_04151664;
    }
  }
  cVar1 = '\0';
LAB_04151664:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantUltomato::PlantUltomato() */

void __thiscall PlantUltomato::PlantUltomato(PlantUltomato *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067eff60;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x34));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  return;
}


/* PlantUltomato::StaticNew() */

PlantUltomato * PlantUltomato::StaticNew(void)

{
  PlantUltomato *this;
  
  this = ::operator_new(0x60);
  PlantUltomato(this);
  return this;
}


/* PlantUltomato::~PlantUltomato() */

void __thiscall PlantUltomato::~PlantUltomato(PlantUltomato *this)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_02;
  
  this_02 = (RtWeakPtr *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_067eff60;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_00 = (RtWeakPtr *)(this + 0x50);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_01 = (RtWeakPtr *)(this + 0x58);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantUltomato::~PlantUltomato() */

void __thiscall PlantUltomato::~PlantUltomato(PlantUltomato *this)

{
  ~PlantUltomato(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::playUpgradeEffect() */

void __thiscall PlantUltomato::playUpgradeEffect(PlantUltomato *this)

{
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  PopAnim *pPVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_18,"upgrade");
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_20,"POPANIM_EFFECTS_ULTOMATO_TRANSITION_FX");
  GetPAMByName(asStack_20);
  pPVar1 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  AttachedEffect::InitializeWithAnimation(this_01,pPVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_18,"ANIMATION");
  AttachedEffect::PlayAnimAndDestroy(this_01,asStack_18,2);
  std::string::~string(asStack_18);
  nop();
  uVar2 = *(undefined8 *)(this + 0x10);
  pcVar3 = *(code **)(*(long *)this_01 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,20.0);
  (*pcVar3)(this_01,uVar2,asStack_18,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::ApplyPlantfood() */

void __thiscall PlantUltomato::ApplyPlantfood(PlantUltomato *this)

{
  int iVar1;
  char cVar2;
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = CanUpgrade(this);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(this + 0x3c);
  }
  else {
    playUpgradeEffect(this);
    iVar1 = *(int *)(this + 0x3c);
  }
  if (iVar1 == 1) {
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Play_Plant_MagGrass_Nitro_End");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  *(undefined4 *)(this + 0x3c) = 0;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantUltomato::UpdateUnconditionally() */

void __thiscall PlantUltomato::UpdateUnconditionally(PlantUltomato *this)

{
  float fVar1;
  
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 10) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x2c) <= fVar1)) {
    Plant::KillPlant(*(Plant **)(this + 0x10),1,0,1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::drawLaserFromToScreenSpace(Sexy::Graphics*, Sexy::SexyVector2 const&,
   Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, Effect_PopAnim*,
   float) */

void PlantUltomato::drawLaserFromToScreenSpace
               (Graphics *param_1,SexyVector2 *param_2,SexyVector2 *param_3,SexyVector2 *param_4,
               SexyVector2 *param_5,Effect_PopAnim *param_6,float param_7)

{
  PopAnimRig *this;
  undefined1 uVar1;
  UIWidget *in_x6;
  float fVar2;
  float fVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38 [2];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar1 = SUB81(param_5,0);
  local_8 = ___stack_chk_guard;
  local_48[0] = Sexy::SexyVector2::operator-(param_4,param_3);
  fVar2 = (float)DVec2::getLength((DVec2 *)local_48);
  local_38[0] = Sexy::SexyVector2::operator-((SexyVector2 *)param_6,param_5);
  fVar3 = (float)DVec2::getLength((DVec2 *)local_38);
  CalcAngleForVectorRepg((SexyVector2 *)local_48);
  local_40 = *(undefined8 *)param_3;
  Sexy::FastCurve::SetOutRange((FastCurve *)local_38,fVar2 / fVar3,param_7);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyTransform2D *)&local_40,(SexyVector2 *)local_38,0.0,param_5,(SexyVector2 *)0x1,
             (bool)uVar1);
  this = (PopAnimRig *)UIWidget::GetAtlasImage(in_x6);
  PopAnimRig::SetRenderTransform(this,aSStack_30);
  StandaloneEffect::SetVisibility((StandaloneEffect *)in_x6,true);
  StandaloneEffect::Draw((StandaloneEffect *)in_x6,(Graphics *)param_2);
  StandaloneEffect::SetVisibility((StandaloneEffect *)in_x6,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::drawLaserFromTo(Sexy::Graphics*, Sexy::SexyVector3 const&, Sexy::SexyVector3
   const&, Sexy::Point const&, Sexy::Point const&, Effect_PopAnim*, float) */

void __thiscall
PlantUltomato::drawLaserFromTo
          (PlantUltomato *this,Graphics *param_1,SexyVector3 *param_2,SexyVector3 *param_3,
          Point *param_4,Point *param_5,Effect_PopAnim *param_6,float param_7)

{
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = boardToScreenSpace(param_2);
  local_20[0] = boardToScreenSpace(param_3);
  local_18[0] = artPointToScreenPoint(param_4);
  local_10[0] = artPointToScreenPoint(param_5);
  drawLaserFromToScreenSpace
            ((Graphics *)this,(SexyVector2 *)param_1,(SexyVector2 *)local_28,(SexyVector2 *)local_20
             ,(SexyVector2 *)local_18,(Effect_PopAnim *)local_10,param_7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::fireBaseWeapon(Sexy::RtWeakPtr<BoardEntity>) */

void PlantUltomato::fireBaseWeapon(long param_1)

{
  Effect_PopAnim *pEVar1;
  undefined8 uVar2;
  UIWidget *this;
  PopAnimRig *this_00;
  StandaloneEffect *pSVar3;
  RealObject *this_01;
  float fVar4;
  float fVar5;
  Effect_PopAnim *pEVar6;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(param_1 + 0x40));
  getLaserAnimationName(asStack_28,param_1,0);
  getLaserAnimationName(asStack_20,param_1,1);
  getLaserAnimationName(asStack_18,param_1,2);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x48));
  pEVar6._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_28,0);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x50));
  Effect_PopAnim::PlayLoopingAnimation(pEVar6._0_4_,uVar2,asStack_18,0);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x58));
  Effect_PopAnim::PlayLoopingAnimation(pEVar6._0_4_,uVar2,asStack_20,0);
  this = (UIWidget *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x48))
  ;
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage(this);
  fVar4 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_28);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x50));
  StandaloneEffect::SetVisibility(pSVar3,true);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x58));
  StandaloneEffect::SetVisibility(pSVar3,true);
  fVar5 = (float)PVZ_T();
  this_01 = *(RealObject **)(param_1 + 0x10);
  *(float *)(param_1 + 0x30) = fVar5 + fVar4;
  std::string::string(asStack_10,"Play_Plant_MagGrass_Nitro_Start");
  RealObject::PlayPositionalSound(this_01,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::fireMahLazer() */

void PlantUltomato::fireMahLazer(void)

{
  char cVar1;
  undefined4 uVar2;
  wchar16 *in_x0;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined8 uVar3;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  wchar16 *local_8;
  
  uVar3 = *(undefined8 *)(in_x0 + 8);
  local_8 = ___stack_chk_guard;
  uVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (in_x0,___stack_chk_guard,in_x2,in_x3,in_x4);
  Plant::FindTarget(aRStack_18,uVar3,uVar2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    fireBaseWeapon();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::AddToRenderQueue(RenderQueue*) */

void __thiscall PlantUltomato::AddToRenderQueue(PlantUltomato *this,RenderQueue *param_1)

{
  undefined4 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = calcLaserRenderLayer();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawMainBeamAndOrigin);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<PlantUltomato,void(PlantUltomato::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,uVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::createLaserEffects() */

void PlantUltomato::createLaserEffects(void)

{
  int iVar1;
  PlantUltomato *in_x0;
  Effect_PopAnim *pEVar2;
  PopAnim *pPVar3;
  StandaloneEffect *pSVar4;
  long lVar5;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  Effect_PopAnim *pEVar10;
  float in_s1;
  float fVar9;
  string asStack_28 [8];
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getLaserAnimationName(asStack_28,in_x0,2);
  iVar1 = calcLaserRenderLayer();
  pEVar2 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  getMainAttackHitEffect(in_x0);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pEVar10._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_28,0);
  local_18 = getHitEffectOffset(in_x0);
  fVar7 = (float)Sexy::SexyVector2::operator+
                           ((SexyVector2 *)(in_x0 + 0x34),(SexyVector2 *)&local_18);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar7,in_s1,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar2,(SexyVector3 *)&local_18,iVar1 + 1);
  pcVar6 = *(code **)(*(long *)pEVar2 + 0xb8);
  uVar8 = getHitEffectYScale(in_x0);
  (*pcVar6)(0x3f800000,uVar8,pEVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x50),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x50))
  ;
  StandaloneEffect::SetVisibility(pSVar4,false);
  getLaserAnimationName((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  FUN_05474278(asStack_28,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string((string *)&local_18);
  pEVar2 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  getMainAttackStartEffect(in_x0);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Effect_PopAnim::PlayLoopingAnimation(pEVar10._0_4_,pEVar2,asStack_28,0);
  lVar5 = *(long *)(in_x0 + 0x10);
  fVar9 = *(float *)(lVar5 + 0x1c);
  local_20 = FUN_04150618(*(undefined4 *)(lVar5 + 0x18),fVar9,*(undefined4 *)(lVar5 + 0x20));
  local_1c = fVar9;
  local_18 = getStartEffectOffset(in_x0);
  local_14 = fVar9;
  fVar7 = (float)Sexy::SexyVector2::operator+((SexyVector2 *)&local_20,(SexyVector2 *)&local_18);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar7,fVar9,0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar2,(SexyVector3 *)&local_18,iVar1 + 1);
  pcVar6 = *(code **)(*(long *)pEVar2 + 0xb8);
  uVar8 = getHitEffectYScale(in_x0);
  (*pcVar6)(0x3f800000,uVar8,pEVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x58),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x58))
  ;
  StandaloneEffect::SetVisibility(pSVar4,false);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::CancelPlantfood() */

void __thiscall PlantUltomato::CancelPlantfood(PlantUltomato *this)

{
  char cVar1;
  PopAnimRig *this_00;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
    this_00 = (PopAnimRig *)FUN_04152e64(*(undefined8 *)(this + 0x10));
    Sexy::Insets::Insets(aIStack_18,0,0,0,0);
    PopAnimRig::SetPAMColor(this_00,(Color *)aIStack_18);
    fVar3 = (float)PVZ_T();
    lVar2 = *(long *)(this + 0x10);
    *(float *)(this + 0x2c) = fVar3 + 1.0;
    *(undefined4 *)(lVar2 + 200) = 10;
    uVar4 = PVZ_EOT();
    Plant::ApplyCondition(uVar4,0,lVar2,0xf);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantUltomato::GetReducedLaunchDelay() */

undefined1  [16] __thiscall PlantUltomato::GetReducedLaunchDelay(PlantUltomato *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  uVar3 = *(undefined8 *)(this + 0x10);
  iVar1 = FUN_041505e0(uVar3);
  if ((1 < iVar1) && (lVar2 = FUN_04152fbc(uVar3), lVar2 != 0)) {
    iVar1 = FUN_041505e0(*(undefined8 *)(this + 0x10));
    if (2 < iVar1) {
      return ZEXT416((uint)((*(float *)(lVar2 + 0x2f0) + 1.0) * *(float *)(lVar2 + 0x2ec)));
    }
    return ZEXT416(*(uint *)(lVar2 + 0x2ec));
  }
  PlantFramework::GetReducedLaunchDelay();
  auVar4._4_4_ = extraout_var;
  auVar4._0_4_ = extraout_s0;
  auVar4._8_8_ = extraout_var_00;
  return auVar4;
}


/* PlantUltomato::GetMaxHitpoints() */

int __thiscall PlantUltomato::GetMaxHitpoints(PlantUltomato *this)

{
  long lVar1;
  
  lVar1 = FUN_04152fbc(*(undefined8 *)(this + 0x10));
  if (*(int *)(this + 0x28) == 1) {
    return *(int *)(lVar1 + 0x2c4);
  }
  if (*(int *)(this + 0x28) != 2) {
    return (int)*(float *)(lVar1 + 0x24);
  }
  return *(int *)(lVar1 + 0x2c8);
}


/* PlantUltomato::getMainBeamDPS() */

undefined4 __thiscall PlantUltomato::getMainBeamDPS(PlantUltomato *this)

{
  long lVar1;
  
  lVar1 = FUN_04152fbc(*(undefined8 *)(this + 0x10));
  if (*(int *)(this + 0x28) == 1) {
    return *(undefined4 *)(lVar1 + 700);
  }
  if (*(int *)(this + 0x28) != 2) {
    return *(undefined4 *)(lVar1 + 0x2b8);
  }
  return *(undefined4 *)(lVar1 + 0x2c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::PlayAttackAnimation() */

void __thiscall PlantUltomato::PlayAttackAnimation(PlantUltomato *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtMixedPtrBase aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (cVar1 != '\0') {
    plVar2 = (long *)FUN_04152e64(*(undefined8 *)(this + 0x10));
    pcVar3 = *(code **)(*plVar2 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               aRStack_58);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantUltomato::onAnimStoppedCallback(PlantUltomato *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  PlantAnimRig_Ultomato *pPVar3;
  long *plVar4;
  long lVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack1_start");
  if (((bVar1) || (bVar1 = std::operator==(param_1,"attack2_start"), bVar1)) ||
     (bVar1 = std::operator==(param_1,"attack3_start"), bVar1)) {
    cVar2 = fireMahLazer();
    if (cVar2 == '\0') goto LAB_041532e8;
    lVar5 = *(long *)(this + 0x10);
    *(float *)(lVar5 + 300) = *(float *)(lVar5 + 300) + 2.0;
    pPVar3 = (PlantAnimRig_Ultomato *)FUN_04152e64(lVar5);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_Ultomato::PlayAttackLoop(pPVar3,aRStack_50);
  }
  else {
    bVar1 = std::operator==(param_1,"attack1_loop");
    if (((!bVar1) && (bVar1 = std::operator==(param_1,"attack2_loop"), !bVar1)) &&
       (bVar1 = std::operator==(param_1,"attack3_loop"), !bVar1)) {
      bVar1 = std::operator==(param_1,"attack1_end");
      if (((bVar1) || (bVar1 = std::operator==(param_1,"attack2_end"), bVar1)) ||
         (bVar1 = std::operator==(param_1,"attack3_end"), bVar1)) {
        plVar4 = (long *)FUN_04152e64(*(undefined8 *)(this + 0x10));
        (**(code **)(*plVar4 + 0x118))();
      }
      goto LAB_04153388;
    }
LAB_041532e8:
    pPVar3 = (PlantAnimRig_Ultomato *)FUN_04152e64(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_Ultomato::PlayAttackEnd(pPVar3,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_04153388:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::damageSubBeamTarget(Sexy::RtWeakPtr<BoardEntity>, DamageInfo&) */

void __thiscall
PlantUltomato::damageSubBeamTarget
          (PlantUltomato *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  BoardEntity *this_00;
  SharkMinion *this_01;
  undefined8 *puVar6;
  Zombie *pZVar7;
  RtObject *this_02;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtrBase aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04152fbc(*(undefined8 *)(this + 0x10));
  *(float *)(param_3 + 8) = *(float *)(param_3 + 8) * *(float *)(lVar5 + 0x2f4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this_00 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  uVar3 = BoardEntity::CalcColumnPosition(this_00);
  this_01 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  uVar4 = SharkMinion::getRow(this_01);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,uVar3,uVar4);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    this_02 = (RtObject *)*puVar6;
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtWeakPtrBase::operator==(aRStack_28,(RtWeakPtrBase *)param_2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    if (((cVar2 == '\0') &&
        (pZVar7 = Sexy::RtObject::Cast<Zombie>(this_02), pZVar7 != (Zombie *)0x0)) &&
       (cVar2 = (**(code **)(*(long *)pZVar7 + 0x328))(), cVar2 == '\0')) {
      (**(code **)(*(long *)pZVar7 + 0x110))(pZVar7,param_3);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::damageMainBeamTarget() */

void __thiscall PlantUltomato::damageMainBeamTarget(PlantUltomato *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  Plant *this_01;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    this_01 = *(Plant **)(this + 0x10);
    fVar7 = (float)FUN_041505c4(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                                *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
    fVar8 = (float)FUN_041505d4(*(undefined4 *)(this_01 + 0x3bc));
    fVar9 = (float)Plant::GetExtraDPSmodifier(this_01);
    fVar10 = (float)FUN_041505d8(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
    iVar3 = getMainBeamDPS(this);
    fVar11 = (float)PVZ_Dt();
    uVar4 = operator|(0x2000000000000,0x1000);
    uVar6 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar8 * fVar7 * fVar9 * fVar10 * fVar11 * (float)iVar3),local_70,
               local_6c,aDStack_68,uVar4,uVar6,aPStack_78,0);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar5 + 0x110))(plVar5,aDStack_68);
    cVar1 = FUN_041505e8(*(undefined8 *)(this + 0x10));
    if (((cVar1 != '\0') &&
        (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00), bVar2)) &&
       (cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00), cVar1 != '\0')) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)this_00);
      damageSubBeamTarget(this,(FastCurve *)&local_70,aDStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    }
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::updateMainBeamTarget() */

void PlantUltomato::updateMainBeamTarget(void)

{
  RtMixedPtrBase *this;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  PlantUltomato *in_x0;
  BoardEntity *pBVar5;
  long lVar6;
  StandaloneEffect *pSVar7;
  long *plVar8;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined8 uVar9;
  code *pcVar10;
  float fVar11;
  float in_s1;
  float fVar12;
  RtWeakPtr aRStack_28 [8];
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  wchar16 *local_8;
  
  uVar9 = *(undefined8 *)(in_x0 + 0x10);
  local_8 = ___stack_chk_guard;
  uVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)in_x0,___stack_chk_guard,in_x2,in_x3,in_x4);
  Plant::FindTarget(aRStack_28,uVar9,uVar3);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    this = (RtMixedPtrBase *)(in_x0 + 0x50);
    pBVar5 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar3 = getPositionForTarget(in_x0,pBVar5);
    lVar6 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(in_x0 + 0x10));
    *(ulong *)(in_x0 + 0x34) = CONCAT44(*(undefined4 *)(lVar6 + 4),uVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      iVar4 = calcLaserRenderLayer();
      local_18 = getHitEffectOffset(in_x0);
      fVar11 = (float)Sexy::SexyVector2::operator+
                                ((SexyVector2 *)(in_x0 + 0x34),(SexyVector2 *)&local_18);
      pSVar7 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar11,in_s1,0.0);
      StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)&local_18,iVar4 + 1);
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pcVar10 = *(code **)(*plVar8 + 0xb8);
      uVar3 = getHitEffectYScale(in_x0);
      (*pcVar10)(0x3f800000,uVar3,plVar8);
      lVar6 = *(long *)(in_x0 + 0x10);
      fVar12 = *(float *)(lVar6 + 0x1c);
      local_20 = FUN_04150618(*(undefined4 *)(lVar6 + 0x18),fVar12,*(undefined4 *)(lVar6 + 0x20));
      local_1c = fVar12;
      local_18 = getStartEffectOffset(in_x0);
      local_14 = fVar12;
      fVar11 = (float)Sexy::SexyVector2::operator+
                                ((SexyVector2 *)&local_20,(SexyVector2 *)&local_18);
      pSVar7 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x58));
      EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar11,fVar12,0.0);
      StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)&local_18,iVar4 + 1);
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x58));
      pcVar10 = *(code **)(*plVar8 + 0xb8);
      uVar3 = getHitEffectYScale(in_x0);
      (*pcVar10)(0x3f800000,uVar3,plVar8);
    }
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(in_x0 + 0x40),aRStack_28);
    damageMainBeamTarget(in_x0);
  }
  else {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(in_x0 + 0x40));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::drawMainBeamAndOrigin(Sexy::Graphics*) */

void __thiscall PlantUltomato::drawMainBeamAndOrigin(PlantUltomato *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  SexyVector3 *pSVar5;
  StandaloneEffect *pSVar6;
  RealObject *this_00;
  float fVar7;
  float fVar8;
  GraphicsAutoState aGStack_60 [8];
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38 [2];
  float local_30;
  DVec3 aDStack_28 [16];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  lVar4 = FUN_04152fbc(*(undefined8 *)(this + 0x10));
  DVec3::DVec3((DVec3 *)local_38);
  DVec3::DVec3(aDStack_28);
  if (*(int *)(this + 0x3c) == 0) {
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
    StandaloneEffect::SetVisibility(pSVar6,false);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x50));
    if (cVar3 == '\0') {
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
    }
    else {
      pSVar6 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
      StandaloneEffect::SetVisibility(pSVar6,false);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
    }
    if (cVar3 != '\0') {
      pSVar6 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
      StandaloneEffect::SetVisibility(pSVar6,false);
    }
  }
  else {
    updateMainBeamTarget();
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    Sexy::SexyVector3::operator=((SexyVector3 *)local_38,pSVar5);
    iVar1 = *(int *)(lVar4 + 0x2d4);
    fVar7 = (float)getMainBeamXOffset(this);
    iVar2 = *(int *)(lVar4 + 0x2d8);
    local_38[0] = (float)iVar1 + local_38[0] + fVar7;
    fVar7 = (float)getMainBeamYOffset(this);
    fVar8 = *(float *)(this + 0x38);
    local_30 = (local_30 - (float)iVar2) - fVar7;
    EATextSquish::Vec3::Vec3(aVStack_18,*(float *)(this + 0x34),fVar8,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_28,(SexyVector3 *)aVStack_18);
    local_58 = boardToScreenSpace((SexyVector3 *)local_38);
    local_54 = fVar8;
    local_50 = boardToScreenSpace((SexyVector3 *)aDStack_28);
    local_4c = fVar8;
    local_48 = artPointToScreenPoint((Point *)(lVar4 + 0x2dc));
    local_44 = fVar8;
    local_40 = artPointToScreenPoint((Point *)(lVar4 + 0x2e4));
    local_3c = fVar8;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
    fVar7 = (float)getMainBeamYScale(this);
    drawLaserFromToScreenSpace
              ((Graphics *)this,(SexyVector2 *)param_1,(SexyVector2 *)&local_58,
               (SexyVector2 *)&local_50,(SexyVector2 *)&local_48,(Effect_PopAnim *)&local_40,fVar7);
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x30) < fVar7) {
      this_00 = *(RealObject **)(this + 0x10);
      std::string::string((string *)aVStack_18,"Play_Plant_MagGrass_Nitro_End");
      RealObject::PlayPositionalSound(this_00,(string *)aVStack_18,0.0);
      std::string::~string((string *)aVStack_18);
      nop();
      *(undefined4 *)(this + 0x3c) = 0;
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::GetRefundSunAmountForShovel() */

void __thiscall PlantUltomato::GetRefundSunAmountForShovel(PlantUltomato *this)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  PlantTypeUltomato *this_01;
  int iVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_01 = Sexy::RtObject::Cast<PlantTypeUltomato>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (this_01 == (PlantTypeUltomato *)0x0) {
    fVar4 = 0.0;
  }
  else {
    iVar1 = PlantTypeUltomato::GetExistingLevelCount(this_01);
    fVar4 = 0.0;
    if (-1 < *(int *)(this + 0x28)) {
      iVar3 = 0;
      do {
        iVar1 = iVar1 - (uint)(0 < iVar1);
        iVar3 = iVar3 + 1;
        iVar2 = PlantTypeUltomato::CalcCostForLevelCount(this_01,iVar1,0xfffffffe);
        fVar4 = fVar4 + (float)iVar2;
      } while (iVar3 <= *(int *)(this + 0x28));
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUltomato::Initialize() */

void PlantUltomato::Initialize(void)

{
  PlantFramework *in_x0;
  PlantAnimRig_Ultomato *this;
  ulong uVar1;
  string *in_x3;
  undefined4 uVar2;
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize(in_x0);
  *(undefined4 *)(in_x0 + 0x28) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(in_x0 + 0x3c) = 0;
  *(undefined4 *)(in_x0 + 0x2c) = uVar2;
  *(undefined4 *)(in_x0 + 0x30) = uVar2;
  this = (PlantAnimRig_Ultomato *)FUN_04152e64(*(undefined8 *)(in_x0 + 0x10));
  PlantAnimRig_Ultomato::SetLevel(this,*(int *)(in_x0 + 0x28));
  getLaserAnimationName(asStack_20);
  std::string::string(asStack_18,"POPANIM_EFFECTS_ULTOMATO_PROJECTILE_LASER");
  uVar1 = calcLaserRenderLayer();
  BoardHelpers::LoadPopanimEffect
            ((BoardHelpers *)asStack_18,(string *)(uVar1 & 0xffffffff),(int)asStack_20,in_x3);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x48),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  createLaserEffects();
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantUltomato::UpgradePlant() */

void __thiscall PlantUltomato::UpgradePlant(PlantUltomato *this)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  PlantAnimRig_Ultomato *this_00;
  long lVar4;
  Plant *pPVar5;
  Plant *this_01;
  float fVar6;
  
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_Plant");
  this_00 = (PlantAnimRig_Ultomato *)FUN_04152e64(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(this + 0x28);
  *(int *)(this + 0x28) = iVar1 + 1;
  PlantAnimRig_Ultomato::SetLevel(this_00,iVar1 + 1);
  Plant::Heal(*(Plant **)(this + 0x10));
  iVar2 = (**(code **)(*(long *)this + 0x120))(this);
  this_01 = *(Plant **)(this + 0x10);
  fVar6 = (float)Plant::GetExtraHitPointsmodifier(this_01);
  pPVar5 = *(Plant **)(this + 0x10);
  iVar1 = *(int *)(this + 0x28);
  *(float *)(this_01 + 0xd8) = (float)iVar2 * fVar6;
  MessageRouter::Broadcast<Plant*,int,Plant*,int>
            ((MessageRouter *)gMessageRouter,Message::PlantUpgraded,pPVar5,iVar1);
  playUpgradeEffect(this);
  if (*(int *)(*(long *)(this + 0x10) + 200) != 4) {
    return;
  }
  lVar4 = FUN_04152fbc();
  Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),*(float *)(lVar4 + 0x2d0));
  return;
}

