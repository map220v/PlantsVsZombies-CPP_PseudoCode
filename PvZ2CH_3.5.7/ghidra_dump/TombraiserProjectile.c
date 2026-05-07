// Class: TombraiserProjectile


/* TombraiserProjectile::SetGridTarget(Sexy::Point const&) */

void __thiscall TombraiserProjectile::SetGridTarget(TombraiserProjectile *this,Point *param_1)

{
  *(undefined8 *)(this + 0x1a8) = *(undefined8 *)param_1;
  return;
}


/* TombraiserProjectile::~TombraiserProjectile() */

void __thiscall TombraiserProjectile::~TombraiserProjectile(TombraiserProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068b6990;
  *(undefined ***)(this + 0x10) = &PTR__TombraiserProjectile_068b6b80;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to TombraiserProjectile::~TombraiserProjectile() */

void __thiscall TombraiserProjectile::~TombraiserProjectile(TombraiserProjectile *this)

{
  ~TombraiserProjectile(this + -0x10);
  return;
}


/* TombraiserProjectile::~TombraiserProjectile() */

void __thiscall TombraiserProjectile::~TombraiserProjectile(TombraiserProjectile *this)

{
  ~TombraiserProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TombraiserProjectile::~TombraiserProjectile() */

void __thiscall TombraiserProjectile::~TombraiserProjectile(TombraiserProjectile *this)

{
  ~TombraiserProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TombraiserProjectile::StaticClassInit() */

void TombraiserProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"TombraiserProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_046d7e88,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TombraiserProjectile::StaticGetClass() */

long * TombraiserProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"TombraiserProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TombraiserProjectile::GetClass() const */

long * TombraiserProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"TombraiserProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TombraiserProjectile::TombraiserProjectile() */

void __thiscall TombraiserProjectile::TombraiserProjectile(TombraiserProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068b6990;
  *(undefined ***)(this + 0x10) = &PTR__TombraiserProjectile_068b6b80;
  Sexy::Point::Point((Point *)(this + 0x1a8));
  this[0x1b0] = (TombraiserProjectile)0x0;
  *(undefined4 *)(this + 0x1b4) = 0;
  return;
}


/* TombraiserProjectile::StaticNew() */

TombraiserProjectile * TombraiserProjectile::StaticNew(void)

{
  TombraiserProjectile *this;
  
  this = ::operator_new(0x1b8);
  TombraiserProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TombraiserProjectile::OnCollideGround() */

void __thiscall TombraiserProjectile::OnCollideGround(TombraiserProjectile *this)

{
  char cVar1;
  int iVar2;
  GridItemGravestone *this_00;
  long lVar3;
  GridItemGravestone *this_01;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar4;
  char *pcVar5;
  Board *pBVar6;
  int local_40;
  int local_3c;
  TPoint<int> aTStack_38 [8];
  Point aPStack_30 [8];
  TPoint<int> aTStack_28 [8];
  Point aPStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::CanAddGraveStoneAt
                    (*(Board **)(gLawnApp + 0x9f0),*(int *)(this + 0x1a8),*(int *)(this + 0x1ac),
                     false);
  if (cVar1 == '\0') {
    if ((this[0x1b0] != (TombraiserProjectile)0x0) &&
       (this_00 = (GridItemGravestone *)
                  Board::GetGridItemGravestone
                            (*(Board **)(gLawnApp + 0x9f0),*(int *)(this + 0x1a8),
                             *(int *)(this + 0x1ac)), this_00 != (GridItemGravestone *)0x0)) {
      GridItemGravestone::FinishEatingAndDestroy(this_00);
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_18,"pvp_change");
      lVar3 = Board::AddZombie(pBVar6,asStack_18,1,*(undefined4 *)(this + 0x1a8),
                               *(undefined4 *)(this + 0x1ac));
      std::string::~string(asStack_18);
      nop();
      FUN_046d79bc(lVar3 + 0x59b);
    }
  }
  else {
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    iVar2 = 1;
    if (cVar1 != '\0') {
      iVar2 = *(int *)(this + 0x70);
    }
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_18,"gravestone_egypt");
    Board::AddGridItem(pBVar6,asStack_18,*(int *)(this + 0x1a8),*(int *)(this + 0x1ac),iVar2);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (this_01 != (GridItemGravestone *)0x0) {
      GridItemGravestone::SetRiseDelay(this_01,0.0);
    }
    if (0.0 < *(float *)(this + 0x1b4)) {
      FUN_046d7544(this_01 + 300);
      FUN_046d754c(*(undefined4 *)(this + 0x1b4),this_01 + 0x128);
    }
    BoardTransforms::GridToBoardSpace((Point *)(this + 0x1a8));
    Sexy::Point::Point(aPStack_30,0,-0x1e);
    Sexy::TPoint<int>::operator+(aTStack_38,(TPoint *)aPStack_30);
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 == '\0') {
      Sexy::Point::Point(aPStack_20,0,0);
    }
    else {
      Sexy::Point::Point(aPStack_20,0x10,0x10);
    }
    Sexy::TPoint<int>::operator+(aTStack_28,(TPoint *)aPStack_20);
    Sexy::Point::Point((Point *)&local_40,(TPoint *)asStack_18);
    this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)aPStack_20,"POPANIM_EFFECTS_ZOMBIE_EGYPT_TOMBRAISER_BONE_HIT");
    GetPAMByName((string *)aPStack_20);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string((string *)aPStack_20);
    nop();
    Effect_PopAnim::SetCentered(this_02,true);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)local_40,(float)local_3c,0.0);
    iVar2 = (**(code **)(*(long *)this_01 + 0x170))(this_01);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_02,(SexyVector3 *)asStack_18,iVar2 + 2);
    std::string::string(asStack_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_02,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_Zomb_Egypt_TombRaiser_Grave_Rise");
  }
  (**(code **)(*(long *)this + 0x168))(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

