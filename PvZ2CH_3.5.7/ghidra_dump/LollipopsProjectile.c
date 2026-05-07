// Class: LollipopsProjectile


/* LollipopsProjectile::~LollipopsProjectile() */

void __thiscall LollipopsProjectile::~LollipopsProjectile(LollipopsProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06939d80;
  *(undefined ***)(this + 0x10) = &PTR__LollipopsProjectile_06939f70;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to LollipopsProjectile::~LollipopsProjectile() */

void __thiscall LollipopsProjectile::~LollipopsProjectile(LollipopsProjectile *this)

{
  ~LollipopsProjectile(this + -0x10);
  return;
}


/* LollipopsProjectile::~LollipopsProjectile() */

void __thiscall LollipopsProjectile::~LollipopsProjectile(LollipopsProjectile *this)

{
  ~LollipopsProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LollipopsProjectile::~LollipopsProjectile() */

void __thiscall LollipopsProjectile::~LollipopsProjectile(LollipopsProjectile *this)

{
  ~LollipopsProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LollipopsProjectile::StaticClassInit() */

void LollipopsProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"LollipopsProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04a72938,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LollipopsProjectile::StaticGetClass() */

long * LollipopsProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LollipopsProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LollipopsProjectile::GetClass() const */

long * LollipopsProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"LollipopsProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LollipopsProjectile::LollipopsProjectile() */

void __thiscall LollipopsProjectile::LollipopsProjectile(LollipopsProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06939d80;
  *(undefined ***)(this + 0x10) = &PTR__LollipopsProjectile_06939f70;
  Sexy::Point::Point((Point *)(this + 0x1ac));
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* LollipopsProjectile::StaticNew() */

LollipopsProjectile * LollipopsProjectile::StaticNew(void)

{
  LollipopsProjectile *this;
  
  this = ::operator_new(0x1b8);
  LollipopsProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LollipopsProjectile::OnCollideGround() */

void __thiscall LollipopsProjectile::OnCollideGround(LollipopsProjectile *this)

{
  char cVar1;
  int iVar2;
  GridItemGravestone *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar3;
  char *pcVar4;
  Board *this_02;
  int local_30;
  int local_2c;
  TPoint<int> aTStack_28 [8];
  Point aPStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::CanAddGraveStoneAt
                    (*(Board **)(gLawnApp + 0x9f0),*(int *)(this + 0x1ac),*(int *)(this + 0x1b0),
                     false);
  if (cVar1 != '\0') {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_18,"lollipops");
    Board::AddGridItem(this_02,asStack_18,*(int *)(this + 0x1ac),*(int *)(this + 0x1b0),1);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (this_00 != (GridItemGravestone *)0x0) {
      GridItemGravestone::SetRiseDelay(this_00,0.0);
    }
    if (0.0 < *(float *)(this + 0x1a8)) {
      FUN_04a7213c(this_00 + 300);
      FUN_04a72144(*(undefined4 *)(this + 0x1a8),this_00 + 0x128);
    }
    BoardTransforms::GridToBoardSpace((Point *)(this + 0x1ac));
    Sexy::Point::Point(aPStack_20,0,-0x1e);
    Sexy::TPoint<int>::operator+(aTStack_28,(TPoint *)aPStack_20);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)asStack_18);
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)aPStack_20,"POPANIM_EFFECTS_ZOMBIE_CHILDREN_LOLLIPOPS_HIT");
    GetPAMByName((string *)aPStack_20);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar3,(RtClass *)0x0);
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
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_Zomb_Egypt_TombRaiser_Grave_Rise");
  }
  (**(code **)(*(long *)this + 0x168))(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

