// Class: PlantDragonCane


/* PlantDragonCane::ApplyPlantfood() */

void __thiscall PlantDragonCane::ApplyPlantfood(PlantDragonCane *this)

{
  undefined4 uVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xe;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


/* PlantDragonCane::CancelPlantfood() */

void __thiscall PlantDragonCane::CancelPlantfood(PlantDragonCane *this)

{
  undefined4 uVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  return;
}


/* PlantDragonCane::GetPlantAttackRect(PlantWeapon) */

long __thiscall PlantDragonCane::GetPlantAttackRect(long param_1,PlantDragonCane *this)

{
  int iVar1;
  
  PlantFramework::GetPlantAttackRect();
  iVar1 = FUN_04141dc4(*(undefined8 *)(this + 0x10));
  if (2 < iVar1) {
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar1;
  }
  return param_1;
}


/* PlantDragonCane::PlantDragonCane() */

void __thiscall PlantDragonCane::PlantDragonCane(PlantDragonCane *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067ee090;
  return;
}


/* PlantDragonCane::StaticNew() */

PlantDragonCane * PlantDragonCane::StaticNew(void)

{
  PlantDragonCane *this;
  
  this = ::operator_new(0x48);
  PlantDragonCane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::StaticClassInit() */

void PlantDragonCane::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDragonCane");
    (*pcVar2)(plVar1,asStack_10,FUN_041426cc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonCane::StaticGetClass() */

long * PlantDragonCane::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDragonCane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDragonCane::GetClass() const */

long * PlantDragonCane::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDragonCane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDragonCane::IsValidZombieTarget(Zombie*) */

byte __thiscall PlantDragonCane::IsValidZombieTarget(PlantDragonCane *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  if (((param_1 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnTeam(param_1,1), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) {
    bVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    return bVar2 ^ 1;
  }
  return 0;
}


/* PlantDragonCane::GetParticleOffsetX() */

void __thiscall PlantDragonCane::GetParticleOffsetX(PlantDragonCane *this)

{
  RandRangeFloat(*(float *)(this + 0x3c) * 0.5,*(float *)(this + 0x3c) * 1.75);
  return;
}


/* PlantDragonCane::GetParticleOffsetY() */

void __thiscall PlantDragonCane::GetParticleOffsetY(PlantDragonCane *this)

{
  RandRangeFloat(*(float *)(this + 0x40) * -1.5,*(float *)(this + 0x40) * 1.25);
  return;
}


/* PlantDragonCane::GetParticleTimeInterval() */

void PlantDragonCane::GetParticleTimeInterval(void)

{
  RandRangeFloat(0.15,0.25);
  return;
}


/* PlantDragonCane::~PlantDragonCane() */

void __thiscall PlantDragonCane::~PlantDragonCane(PlantDragonCane *this)

{
  *(undefined ***)this = &PTR_GetClass_067ee090;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDragonCane::~PlantDragonCane() */

void __thiscall PlantDragonCane::~PlantDragonCane(PlantDragonCane *this)

{
  ~PlantDragonCane(this);
  AK::FreeHook(this);
  return;
}


/* PlantDragonCane::WouldKillTarget(Sexy::RtWeakPtr<Zombie>, DamageInfo const&) */

bool __thiscall
PlantDragonCane::WouldKillTarget
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,long param_3)

{
  Zombie *this;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_3 + 8);
  this = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  fVar1 = (float)Zombie::GetHitpointsUntilBleedout(this);
  return fVar1 <= fVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::GeneratePfAttackEffect() */

void PlantDragonCane::GeneratePfAttackEffect(void)

{
  undefined4 uVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  Point *extraout_x1;
  float fVar3;
  BoardTransforms aBStack_40 [4];
  undefined4 local_3c;
  int local_38;
  int local_34;
  string asStack_30 [8];
  RtWeakPtr aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpaceRect(aBStack_40,extraout_x1);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_38,(TPoint *)aRStack_28);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_30,"POPANIM_EFFECTS_DRAGONCANE_EFFECT");
  GetPAMByName(asStack_30);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  std::string::~string(asStack_30);
  nop();
  std::string::string((string *)aRStack_28,"ani01");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_28,0);
  std::string::~string((string *)aRStack_28);
  nop();
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0') {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)Board::calculateRoofOffsetZ((float)local_38 + 80.0);
  }
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,(float)local_38 + 80.0,(float)local_34,fVar3);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_28,-1);
  uVar1 = Board::MakeRenderOrder(0x64960,local_3c,0);
  FUN_04141db4(this + 0x1c,uVar1);
  Effect_PopAnim::SetCentered(this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::GenerateParticleEffect(float, float) */

void PlantDragonCane::GenerateParticleEffect(float param_1,float param_2)

{
  undefined4 uVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  Point *extraout_x1;
  BoardTransforms aBStack_40 [4];
  undefined4 local_3c;
  int local_38;
  int local_34;
  string asStack_30 [8];
  float local_28;
  float local_24;
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpaceRect(aBStack_40,extraout_x1);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_38,(TPoint *)&local_28);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_30,"POPANIM_EFFECTS_DRAGONCANE_EFFECT");
  GetPAMByName(asStack_30);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_28);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  std::string::~string(asStack_30);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  std::string::string((string *)&local_28,"ani02");
  Effect_PopAnim::PlaySingleAnimation(this,(RtWeakPtr *)&local_28,0);
  std::string::~string((string *)&local_28);
  nop();
  (**(code **)(*(long *)this + 0x80))(0x3fa00000,this);
  DVec3::DVec3((DVec3 *)&local_28);
  local_20 = 0;
  local_28 = param_1 + (float)local_38;
  local_24 = param_2 + (float)local_34;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    local_20 = Board::calculateRoofOffsetZ(local_28);
  }
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_28,-1);
  uVar1 = Board::MakeRenderOrder(0x64960,local_3c,1);
  FUN_04141db4(this + 0x1c,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::SearchNearZombies(PlantWeapon) */

void PlantDragonCane::SearchNearZombies
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               undefined8 param_2,uint param_3)

{
  int iVar1;
  ResourceInfo *pRVar2;
  ulong uVar3;
  RtWeakPtr aRStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  Plant::GetProps();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar3 = FUN_04141e0c(*(undefined8 *)(pRVar2 + 0x70),*(undefined8 *)(pRVar2 + 0x78));
  if (param_3 < uVar3) {
    PlantFramework::GetPlantAttackRect(aRStack_18,param_2,param_3);
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    local_10 = local_10 - iVar1;
    EntityFinder::GetEntitiesTouchingRectangle(param_1,2,aRStack_18,0xffffffff,0xffffffff);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::Initialize() */

void __thiscall PlantDragonCane::Initialize(PlantDragonCane *this)

{
  long lVar1;
  PopAnimRig *this_00;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar1 + 200) = 10;
  *(undefined4 *)(this + 0x3c) = 0x42c80000;
  *(undefined4 *)(this + 0x40) = 0x42700000;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x34) = uVar2;
  this_00 = (PopAnimRig *)FUN_04143750(lVar1);
  if (this_00 != (PopAnimRig *)0x0) {
    std::string::string(asStack_10,"plantfood");
    uVar2 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
    *(undefined4 *)(this + 0x30) = uVar2;
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonCane::shouldKnockback(BoardEntity*) */

undefined8 __thiscall PlantDragonCane::shouldKnockback(PlantDragonCane *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Zombie *this_00;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  cVar1 = FUN_04141dcc(uVar4);
  if (cVar1 == '\0') {
    fVar6 = 0.0;
    iVar2 = FUN_04141dc4(uVar4);
    if (1 < iVar2) {
      lVar3 = FUN_041438ac(uVar4);
      fVar6 = *(float *)(lVar3 + 0x2b8);
    }
  }
  else {
    lVar3 = FUN_041438ac(uVar4);
    fVar6 = *(float *)(lVar3 + 700);
  }
  fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  if (((param_1 != (BoardEntity *)0x0) &&
      (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
     (fVar5 < fVar6)) {
    uVar4 = Zombie::CanBeLaunchedByPlants(this_00);
    return uVar4;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::knockbackZombie(BoardEntity*) */

void PlantDragonCane::knockbackZombie(BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Zombie *this;
  long lVar4;
  float *pfVar5;
  ZombieTosserSubSystem *pZVar6;
  float fVar7;
  ZombieTosserSubSystem *pZVar9;
  undefined4 uVar8;
  float local_60 [4];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (this != (Zombie *)0x0) {
    lVar4 = FUN_041438ac(*(undefined8 *)(param_1 + 0x10));
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    if (cVar1 == '\0') {
      iVar2 = FUN_04141dc4(*(undefined8 *)(param_1 + 0x10));
      if (iVar2 < 2) {
        iVar2 = 0;
        iVar3 = 0;
      }
      else {
        iVar2 = *(int *)(lVar4 + 0x2c8);
        iVar3 = *(int *)(lVar4 + 0x2cc);
      }
    }
    else {
      iVar2 = *(int *)(lVar4 + 0x2d0);
      iVar3 = *(int *)(lVar4 + 0x2d4);
    }
    iVar2 = RandRangeInt(iVar2,iVar3);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar7 = (float)ZombieTosserSubSystem::CaculateTargetButNotOffScreen(this,(float)(iVar3 * iVar2))
    ;
    local_60[0] = fVar7;
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*pfVar5 < fVar7) {
      pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
      pZVar9._0_4_ = *(ZombieTosserSubSystem **)(lVar4 + 0x2c4);
      uVar8 = *(undefined4 *)(lVar4 + 0x2c0);
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie(pZVar9._0_4_,uVar8,pZVar6,this,local_60,aRStack_50,1);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::ApplyDamageToEntities(PlantWeapon, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
PlantDragonCane::ApplyDamageToEntities(PlantDragonCane *this,ulong param_2,undefined8 *param_3)

{
  ResourceInfo *pRVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  ulong uVar6;
  long *extraout_x0;
  undefined8 uVar7;
  float fVar8;
  RtWeakPtr aRStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  param_2 = param_2 & 0xffffffff;
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  uVar7 = *(undefined8 *)(pRVar1 + 0x70);
  uVar2 = FUN_04141e0c(uVar7,*(undefined8 *)(pRVar1 + 0x78));
  if (param_2 < uVar2) {
    FUN_04141e20(uVar7,param_2);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
      uVar7 = PlantFramework::GetDamageFlags();
    }
    else {
      uVar7 = (**(code **)(*(long *)this + 0x198))(this,param_2);
    }
    operator|=(auStack_58,uVar7);
    if (*(int *)(*(long *)(this + 0x10) + 200) == 0xe) {
      uVar7 = operator|(0x2000,0x4000000000);
      operator|=(auStack_58,uVar7);
      if (0.0 < *(float *)(this + 0x30)) {
        fVar8 = (float)PVZ_Dt();
        local_60 = (fVar8 / *(float *)(this + 0x30)) * local_60;
      }
    }
    uVar7 = *param_3;
    uVar2 = 0;
    lVar3 = FUN_04141df8(uVar7,param_3[1]);
    if (lVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_04141e30(uVar7,uVar2);
        if ((RtObject *)*puVar4 == (RtObject *)0x0) {
LAB_04143d40:
          nop();
          (**(code **)(*extraout_x0 + 0x110))();
        }
        else {
          pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
          if (pZVar5 == (Zombie *)0x0) {
            FUN_04141e30(*param_3,uVar2);
            goto LAB_04143d40;
          }
          (**(code **)(*(long *)pZVar5 + 0x110))(pZVar5,aRStack_68);
        }
        uVar2 = uVar2 + 1;
        uVar7 = *param_3;
        uVar6 = FUN_04141df8(uVar7,param_3[1]);
      } while (uVar2 < uVar6);
    }
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonCane::filterTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> > const&,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> >*) */

void __thiscall
PlantDragonCane::filterTargets(PlantDragonCane *this,vector *param_1,vector *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  ulong uVar5;
  BoardEntity **ppBVar6;
  long *extraout_x0;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  
  uVar7 = 0;
  uVar8 = *(undefined8 *)param_1;
  lVar3 = FUN_04141df8(uVar8,*(undefined8 *)(param_1 + 8));
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_04141e04(uVar8,uVar7);
      if ((RtObject *)*puVar4 == (RtObject *)0x0) {
LAB_04143f78:
        nop();
        cVar1 = (**(code **)(*extraout_x0 + 0x200))();
        if (cVar1 != '\0') {
LAB_04143f48:
          ppBVar6 = (BoardEntity **)FUN_04141e04(*(undefined8 *)param_1,uVar7);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_2,ppBVar6);
        }
      }
      else {
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
        if (this_00 == (Zombie *)0x0) {
          FUN_04141e04(*(undefined8 *)param_1,uVar7);
          goto LAB_04143f78;
        }
        uVar8 = operator|(1,4);
        uVar8 = operator|(uVar8,0x80);
        uVar8 = operator|(uVar8,0x200);
        uVar8 = operator|(uVar8,0x800);
        uVar2 = operator|(uVar8,0x2000);
        cVar1 = Zombie::MatchesAny(this_00,uVar2,*(undefined8 *)(this + 0x10));
        if ((((cVar1 == '\0') &&
             (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
           ((cVar1 = RealObject::IsOnTeam(this_00,1), cVar1 == '\0' &&
            (cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0')))) {
          pcVar9 = *(code **)(*(long *)this_00 + 0xb8);
          if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
            uVar2 = PlantFramework::GetCollisionFlags();
          }
          else {
            uVar2 = (**(code **)(*(long *)this + 400))(this);
          }
          cVar1 = (*pcVar9)(this_00,uVar2);
          if (cVar1 == '\0') goto LAB_04143e8c;
          goto LAB_04143f48;
        }
      }
LAB_04143e8c:
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)param_1;
      uVar5 = FUN_04141df8(uVar8,*(undefined8 *)(param_1 + 8));
    } while (uVar7 < uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::FindTargetsAndPlayAttackAnim() */

void __thiscall PlantDragonCane::FindTargetsAndPlayAttackAnim(PlantDragonCane *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  PlantAnimRig_DragonCane *this_00;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  (**(code **)(*(long *)this + 0x2b8))(auStack_48,this,0);
  uVar2 = operator|(4,2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_38,uVar2,auStack_48,0xffffffff,0xffffffff);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  filterTargets(this,(vector *)avStack_38,(vector *)&local_20);
  lVar4 = FUN_04141df8(local_20,local_18);
  if (lVar4 != 0) {
    this_00 = (PlantAnimRig_DragonCane *)FUN_04143750(*(undefined8 *)(this + 0x10));
    lVar4 = *(long *)(this + 0x10);
    iVar3 = FUN_04141dc4(lVar4);
    cVar1 = FUN_04141dcc(lVar4);
    if (cVar1 == '\0') {
      if (iVar3 < 2) {
        *(undefined4 *)(lVar4 + 200) = 0xb;
        PlantAnimRig_DragonCane::PlayNormalAttack(this_00);
      }
      else {
        *(undefined4 *)(lVar4 + 200) = 0xc;
        if (iVar3 == 2) {
          PlantAnimRig_DragonCane::PlayAdvancedAttack(this_00);
        }
        else {
          PlantAnimRig_DragonCane::PlayAdvancedExtAttack(this_00);
        }
      }
    }
    else {
      *(undefined4 *)(lVar4 + 200) = 0xd;
      PlantAnimRig_DragonCane::PlaySpecialAttack(this_00);
    }
    uVar5 = 1;
    PlantAnimRig::SetState((PlantAnimRig *)this_00,0xe);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* PlantDragonCane::UpdateActions() */

void __thiscall PlantDragonCane::UpdateActions(PlantDragonCane *this)

{
  uint uVar1;
  char cVar2;
  PopAnimRig *this_00;
  long *plVar3;
  
  uVar1 = *(uint *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  if (uVar1 == 10) {
    cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar2 == '\0') {
      FindTargetsAndPlayAttackAnim(this);
      return;
    }
  }
  else if ((9 < uVar1) && (uVar1 < 0xe)) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar2 == '\0') {
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar3 + 0x118))();
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::PfAttackHandler() */

void __thiscall PlantDragonCane::PfAttackHandler(PlantDragonCane *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  ResourceInfo *pRVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 local_48 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  int local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar4 == '\0') {
    uVar9 = 2;
    uVar10 = 2;
  }
  else {
    uVar9 = 4;
    uVar10 = 4;
  }
  Plant::GetProps();
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  uVar7 = FUN_04141e0c(*(undefined8 *)(pRVar6 + 0x70),*(undefined8 *)(pRVar6 + 0x78));
  if (uVar9 < uVar7) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
    local_48[0] = BoardConstants::NUMBER_OF_COLUMNS();
    lVar11 = *(long *)(this + 0x10);
    local_20 = *(int *)(lVar11 + 0x114) + 3;
    piVar8 = eastl::min_alt<int>((int *)local_48,&local_20);
    iVar2 = *piVar8;
    local_48[0] = 0;
    local_20 = *(int *)(lVar11 + 0x110) + -1;
    piVar8 = eastl::max_alt<int>((int *)local_48,&local_20);
    iVar3 = *piVar8;
    local_48[0] = BoardConstants::NUMBER_OF_ROWS();
    local_20 = *(int *)(*(long *)(this + 0x10) + 0x110) + 1;
    piVar8 = eastl::min_alt<int>((int *)local_48,&local_20);
    Sexy::Insets::Insets((Insets *)local_48,iVar1,iVar3,(iVar2 - iVar1) + 1,(*piVar8 - iVar3) + 1);
    uVar5 = operator|(4,2);
    EntityFinder::GetEntitiesInGridSquares(avStack_38,uVar5,(Insets *)local_48);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    filterTargets(this,(vector *)avStack_38,(vector *)&local_20);
    lVar11 = FUN_04141df8(CONCAT44(uStack_1c,local_20),local_18);
    if (lVar11 == 0) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
    }
    else {
      ApplyDamageToEntities(this,uVar10,(RtWeakPtr *)&local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonCane::UpdatePlantfood() */

void __thiscall PlantDragonCane::UpdatePlantfood(PlantDragonCane *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x34) <= fVar1) {
    fVar1 = (float)GetParticleOffsetX(this);
    fVar2 = (float)GetParticleOffsetY(this);
    GenerateParticleEffect(fVar1,fVar2);
    fVar1 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    if (fVar1 <= 0.25) {
      fVar1 = (float)GetParticleOffsetX(this);
      fVar2 = (float)GetParticleOffsetY(this);
      GenerateParticleEffect(fVar1,fVar2);
    }
    fVar1 = (float)GetParticleTimeInterval();
    *(float *)(this + 0x34) = *(float *)(this + 0x34) + fVar1;
  }
  fVar1 = (float)PVZ_T();
  if ((*(float *)(this + 0x2c) <= fVar1) &&
     (fVar1 <= *(float *)(this + 0x2c) + *(float *)(this + 0x30))) {
    PfAttackHandler(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::ApplyDamageToEntities(PlantWeapon) */

void __thiscall PlantDragonCane::ApplyDamageToEntities(PlantDragonCane *this,uint param_2)

{
  undefined4 uVar1;
  ResourceInfo *pRVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  uVar3 = FUN_04141e0c(*(undefined8 *)(pRVar2 + 0x70),*(undefined8 *)(pRVar2 + 0x78));
  if (param_2 < uVar3) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    (**(code **)(*(long *)this + 0x2b8))(auStack_48,this,param_2);
    uVar1 = operator|(4,2);
    EntityFinder::GetEntitiesTouchingRectangle(avStack_38,uVar1,auStack_48,0xffffffff,0xffffffff);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    filterTargets(this,(vector *)avStack_38,(vector *)&local_20);
    lVar4 = FUN_04141df8(local_20,local_18);
    if (lVar4 == 0) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
    }
    else {
      ApplyDamageToEntities(this,param_2,(RtWeakPtr *)&local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonCane::NormalAttackHandler() */

void __thiscall PlantDragonCane::NormalAttackHandler(PlantDragonCane *this)

{
  ApplyDamageToEntities(this,0);
  return;
}


/* PlantDragonCane::TurnStickAttackHandler() */

void __thiscall PlantDragonCane::TurnStickAttackHandler(PlantDragonCane *this)

{
  ApplyDamageToEntities(this,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::PunchAttackHandler() */

void __thiscall PlantDragonCane::PunchAttackHandler(PlantDragonCane *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ResourceInfo *pRVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  Zombie *this_00;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 local_e0;
  undefined1 auStack_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b0 [24];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  FUN_04141e20(*(undefined8 *)(pRVar5 + 0x70),1);
  SearchNearZombies((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_c8,this,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b0);
  (**(code **)(*(long *)this + 0x2b8))(auStack_d8,this,1);
  uVar3 = operator|(4,2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_b0,uVar3,auStack_d8,0xffffffff,0xffffffff);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  lVar6 = FUN_04141df8(local_c8,local_c0);
  if (lVar6 == 0) {
LAB_041446c8:
    uVar12 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
    filterTargets(this,(vector *)&local_c8,(vector *)&local_98);
    uVar9 = local_98;
    uVar7 = FUN_04141df8(local_98,local_90);
    if (uVar7 != 0) {
      do {
        puVar8 = (undefined8 *)FUN_04141e30(uVar9,uVar12);
        if ((RtObject *)*puVar8 != (RtObject *)0x0) {
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
          if (this_00 != (Zombie *)0x0) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)&local_e0);
            cVar1 = WouldKillTarget(this,(RtWeakPtr<Sexy::SoundResource> *)&local_80,aRStack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
            if (((cVar1 == '\0') ||
                (cVar1 = (**(code **)(*(long *)this_00 + 0x3f0))(this_00), cVar1 == '\0')) ||
               (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0')) {
              cVar1 = shouldKnockback(this,(BoardEntity *)this_00);
              if (cVar1 != '\0') {
                knockbackZombie((BoardEntity *)this);
              }
              (**(code **)(*(long *)this_00 + 0x110))(this_00,aRStack_68);
            }
            else {
              iVar4 = PlantFramework::Rand((PlantFramework *)this,600);
              EATextSquish::Vec3::Vec3((Vec3 *)&local_80,1000.0,(float)iVar4,0.0);
              Zombie::FlickOff(this_00,(SexyVector3 *)&local_80);
            }
          }
          uVar9 = local_98;
          uVar7 = FUN_04141df8(local_98,local_90);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar7);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    filterTargets(this,(vector *)avStack_b0,(vector *)&local_80);
    lVar6 = FUN_04141df8(local_80,local_78);
    if (lVar6 != 0) {
      ApplyDamageToEntities(this,1,(RtWeakPtr<Sexy::SoundResource> *)&local_80);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_98);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_b0);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_c8);
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_e0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_b0);
  do {
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_b0);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_e0,(__normal_iterator *)&local_80);
    while( true ) {
      if (!bVar2) goto LAB_041446c8;
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_c8);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_c8);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e0);
      local_98 = std::
                 find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                           (uVar9,uVar10,uVar11);
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_c8);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)&local_80);
      if (!bVar2) break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_80,(__normal_iterator *)&local_e0);
      local_e0 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                           ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_b0,local_80
                           );
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_b0);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_e0,(__normal_iterator *)&local_80);
    }
    FUN_04143204((__normal_iterator *)&local_e0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonCane::ExtraAttackHandler() */

void __thiscall PlantDragonCane::ExtraAttackHandler(PlantDragonCane *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ResourceInfo *pRVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  Zombie *this_00;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 local_e0;
  Insets aIStack_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b0 [24];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    uVar14 = 5;
    uVar13 = 5;
  }
  else {
    uVar14 = 6;
    uVar13 = 6;
  }
  Plant::GetProps();
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  uVar7 = FUN_04141e0c(*(undefined8 *)(pRVar6 + 0x70),*(undefined8 *)(pRVar6 + 0x78));
  if (uVar14 < uVar7) {
    SearchNearZombies((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_c8,this,uVar13);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b0);
    iVar5 = *(int *)(*(long *)(this + 0x10) + 0x110);
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    Sexy::Insets::Insets
              (aIStack_d8,*(int *)(*(long *)(this + 0x10) + 0x114),iVar5,
               iVar3 - *(int *)(*(long *)(this + 0x10) + 0x114),1);
    uVar4 = operator|(4,2);
    EntityFinder::GetEntitiesTouchingRectangle(avStack_b0,uVar4,aIStack_d8,0xffffffff,0xffffffff);
    FUN_04141e20(*(undefined8 *)(pRVar6 + 0x70),uVar14);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    lVar8 = FUN_04141df8(local_c8,local_c0);
    if (lVar8 != 0) {
      local_e0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_b0);
      do {
        local_80 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_b0);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_e0,(__normal_iterator *)&local_80)
        ;
        while( true ) {
          if (!bVar2) goto LAB_04144b0c;
          uVar10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_c8);
          uVar11 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_c8);
          uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e0);
          local_98 = std::
                     find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                               (uVar10,uVar11,uVar12);
          local_80 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_c8);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_98,(__normal_iterator *)&local_80);
          if (!bVar2) break;
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_80,(__normal_iterator *)&local_e0);
          local_e0 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                               ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_b0,
                                local_80);
          local_80 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_b0);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_e0,(__normal_iterator *)&local_80);
        }
        FUN_04143204((__normal_iterator *)&local_e0);
      } while( true );
    }
LAB_04144b0c:
    uVar14 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
    filterTargets(this,(vector *)&local_c8,(vector *)&local_98);
    uVar10 = local_98;
    uVar7 = FUN_04141df8(local_98,local_90);
    if (uVar7 != 0) {
      do {
        puVar9 = (undefined8 *)FUN_04141e30(uVar10,uVar14);
        if ((RtObject *)*puVar9 != (RtObject *)0x0) {
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
          if (this_00 != (Zombie *)0x0) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)&local_e0);
            cVar1 = WouldKillTarget(this,(RtWeakPtr<Sexy::SoundResource> *)&local_80,aRStack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
            if (((cVar1 == '\0') ||
                (cVar1 = (**(code **)(*(long *)this_00 + 0x3f0))(this_00), cVar1 == '\0')) ||
               (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0')) {
              cVar1 = shouldKnockback(this,(BoardEntity *)this_00);
              if (cVar1 != '\0') {
                knockbackZombie((BoardEntity *)this);
              }
              (**(code **)(*(long *)this_00 + 0x110))(this_00,aRStack_68);
            }
            else {
              iVar5 = PlantFramework::Rand((PlantFramework *)this,600);
              EATextSquish::Vec3::Vec3((Vec3 *)&local_80,1000.0,(float)iVar5,0.0);
              Zombie::FlickOff(this_00,(SexyVector3 *)&local_80);
            }
          }
          uVar10 = local_98;
          uVar7 = FUN_04141df8(local_98,local_90);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar7);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    filterTargets(this,(vector *)avStack_b0,(vector *)&local_80);
    lVar8 = FUN_04141df8(local_80,local_78);
    if (lVar8 != 0) {
      ApplyDamageToEntities(this,uVar13,(RtWeakPtr<Sexy::SoundResource> *)&local_80);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_98);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_b0);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonCane::OnAnimCommand(std::string const&, std::string const&) */

ulong PlantDragonCane::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  undefined4 uVar4;
  float fVar5;
  
  switch(*(undefined4 *)(*(long *)(param_1 + 0x10) + 200)) {
  case 0xb:
    bVar1 = std::operator==(param_2,"use_action");
    if (!bVar1) {
      return 1;
    }
    break;
  case 0xc:
    bVar1 = std::operator==(param_2,"use_action");
    if (!bVar1) {
LAB_04144e5c:
      bVar1 = std::operator==(param_2,"punch");
      if (!bVar1) {
        return 1;
      }
      PunchAttackHandler((PlantDragonCane *)param_1);
      return 1;
    }
    break;
  case 0xd:
    bVar1 = std::operator==(param_2,"use_action");
    if (!bVar1) {
      bVar1 = std::operator==(param_2,"turnstick");
      if (bVar1) {
        TurnStickAttackHandler((PlantDragonCane *)param_1);
        return 1;
      }
      goto LAB_04144e5c;
    }
    break;
  case 0xe:
    bVar1 = std::operator==(param_2,"use_action");
    if (!bVar1) {
      return 1;
    }
    uVar4 = PVZ_T();
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    GeneratePfAttackEffect();
    bVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    if (bVar2 == 0) {
      return 1;
    }
    fVar5 = (float)PVZ_T();
    *(float *)(param_1 + 0x34) = fVar5 + 0.02;
    return (ulong)bVar2;
  default:
    bVar1 = std::operator==(param_2,"extra_attack");
    if (bVar1) {
      ExtraAttackHandler((PlantDragonCane *)param_1);
    }
    uVar3 = PlantFramework::OnAnimCommand(param_1,param_2);
    return uVar3;
  }
  NormalAttackHandler((PlantDragonCane *)param_1);
  return 1;
}

