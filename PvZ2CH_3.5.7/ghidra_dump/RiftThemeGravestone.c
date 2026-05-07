// Class: RiftThemeGravestone


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeGravestone::StaticClassInit() */

void RiftThemeGravestone::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeGravestone");
    (*pcVar2)(plVar1,asStack_10,FUN_036fcaa0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeGravestone::StaticGetClass() */

long * RiftThemeGravestone::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeGravestone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeGravestone::GetClass() const */

long * RiftThemeGravestone::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeGravestone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeGravestone::~RiftThemeGravestone() */

void __thiscall RiftThemeGravestone::~RiftThemeGravestone(RiftThemeGravestone *this)

{
  *(undefined ***)this = &PTR_GetClass_06687b40;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeGravestone::~RiftThemeGravestone() */

void __thiscall RiftThemeGravestone::~RiftThemeGravestone(RiftThemeGravestone *this)

{
  ~RiftThemeGravestone(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeGravestone::RiftThemeGravestone() */

void __thiscall RiftThemeGravestone::RiftThemeGravestone(RiftThemeGravestone *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06687b40;
  return;
}


/* RiftThemeGravestone::StaticNew() */

RiftThemeGravestone * RiftThemeGravestone::StaticNew(void)

{
  RiftThemeGravestone *this;
  
  this = ::operator_new(0x20);
  RiftThemeGravestone(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeGravestone::TrySpawnGravestone(Zombie*) */

void __thiscall RiftThemeGravestone::TrySpawnGravestone(RiftThemeGravestone *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItemGravestone *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  char *pcVar5;
  Board *this_02;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  TPoint<int> aTStack_28 [8];
  Point aPStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
  Sexy::Point::Point((Point *)&local_38,iVar2,iVar3);
  cVar1 = Board::CanAddGraveStoneAt(*(Board **)(gLawnApp + 0x9f0),local_38,local_34,false);
  if (cVar1 != '\0') {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_18,"gravestone_theme");
    Board::AddGridItem(this_02,asStack_18,local_38,local_34,1);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (this_00 != (GridItemGravestone *)0x0) {
      GridItemGravestone::SetRiseDelay(this_00,0.0);
    }
    BoardTransforms::GridToBoardSpace((Point *)&local_38);
    Sexy::Point::Point(aPStack_20,0,-0x1e);
    Sexy::TPoint<int>::operator+(aTStack_28,(TPoint *)aPStack_20);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)asStack_18);
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)aPStack_20,"POPANIM_EFFECTS_ZOMBIE_EGYPT_TOMBRAISER_BONE_HIT");
    GetPAMByName((string *)aPStack_20);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string((string *)aPStack_20);
    nop();
    Effect_PopAnim::SetCentered(this_01,true);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)local_30,(float)local_2c,0.0);
    iVar2 = (**(code **)(*(long *)this_00 + 0x170))(this_00);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_01,(SexyVector3 *)asStack_18,iVar2 + 2);
    std::string::string(asStack_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_01,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_Zomb_Egypt_TombRaiser_Grave_Rise");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeGravestone::onZombieDied(Zombie*, DamageInfo const*) */

void RiftThemeGravestone::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (DamageInfo *)0x0) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = ZombieRestrictionSet::IsIncluded
                      ((ZombieRestrictionSet *)(extraout_x0 + 0x20),(Zombie *)param_2);
    if (cVar1 != '\0') {
      TrySpawnGravestone((RiftThemeGravestone *)param_1,(Zombie *)param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeGravestone::Activate() */

void __thiscall RiftThemeGravestone::Activate(RiftThemeGravestone *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  RiftTheme::Activate((RiftTheme *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<RiftThemeGravestone,void(RiftThemeGravestone::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}

