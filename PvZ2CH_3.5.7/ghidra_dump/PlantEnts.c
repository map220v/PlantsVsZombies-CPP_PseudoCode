// Class: PlantEnts


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::DoSpecialForAvatarNormal() */

void __thiscall PlantEnts::DoSpecialForAvatarNormal(PlantEnts *this)

{
  float fVar1;
  
  fVar1 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  this[0x4f] = (PlantEnts)(fVar1 < _FUN_04007920);
  return;
}


/* PlantEnts::CancelPlantfood() */

void __thiscall PlantEnts::CancelPlantfood(PlantEnts *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[0x2c] = (PlantEnts)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  this[0x4c] = (PlantEnts)0x0;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  return;
}


/* PlantEnts::PlantEnts() */

void __thiscall PlantEnts::PlantEnts(PlantEnts *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x2c] = (PlantEnts)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x4c] = (PlantEnts)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x4d] = (PlantEnts)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x54] = (PlantEnts)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x55] = (PlantEnts)0x1;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x68] = (PlantEnts)0x1;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR_GetClass_067b4520;
  *(undefined4 *)(this + 0x5c) = 0x40400000;
  return;
}


/* PlantEnts::StaticNew() */

PlantEnts * PlantEnts::StaticNew(void)

{
  PlantEnts *this;
  
  this = ::operator_new(0x78);
  PlantEnts(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::StaticClassInit() */

void PlantEnts::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantEnts");
    (*pcVar2)(plVar1,asStack_10,FUN_040089d4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEnts::StaticGetClass() */

long * PlantEnts::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantEnts",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEnts::GetClass() const */

long * PlantEnts::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantEnts",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEnts::StunZombies() */

void __thiscall PlantEnts::StunZombies(PlantEnts *this)

{
  BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  return;
}


/* PlantEnts::CheckSupercut() */

void __thiscall PlantEnts::CheckSupercut(PlantEnts *this)

{
  char cVar1;
  
  cVar1 = FUN_04007a5c(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
  }
  return;
}


/* PlantEnts::~PlantEnts() */

void __thiscall PlantEnts::~PlantEnts(PlantEnts *this)

{
  *(undefined ***)this = &PTR_GetClass_067b4520;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantEnts::~PlantEnts() */

void __thiscall PlantEnts::~PlantEnts(PlantEnts *this)

{
  ~PlantEnts(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::WouldKillTarget(GridItem*) */

void __thiscall PlantEnts::WouldKillTarget(PlantEnts *this,GridItem *param_1)

{
  int iVar1;
  long lVar2;
  Plant *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_04007ac8(*(undefined8 *)(lVar2 + 0x70));
  this_00 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_04007a0c(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar4 = (float)FUN_04007a1c(*(undefined4 *)(this_00 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar6 = (float)FUN_04007a28(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar7 = (float)GridItem::GetHitpoints(param_1);
  }
  else {
    fVar7 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)fVar7 <= (int)(fVar3 * fVar4 * (float)iVar1 * fVar5 * fVar6));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::MayUppercutTarget(GridItem*) */

void __thiscall PlantEnts::MayUppercutTarget(PlantEnts *this,GridItem *param_1)

{
  int iVar1;
  long lVar2;
  Plant *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_04007ac8(*(undefined8 *)(lVar2 + 0x70));
  this_00 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_04007a0c(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar4 = (float)FUN_04007a1c(*(undefined4 *)(this_00 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar6 = (float)FUN_04007a28(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar7 = (float)GridItem::GetHitpoints(param_1);
  }
  else {
    fVar7 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)fVar7 <= (int)(fVar3 * fVar4 * (float)iVar1 * fVar5 * fVar6));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::GetZombieTarget(bool) */

void PlantEnts::GetZombieTarget(bool param_1)

{
  undefined1 in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  *(undefined1 *)((ulong)param_1 + 0x4e) = in_w1;
  PlantFramework::FindTargetZombie(aRStack_10,(ulong)param_1,0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::WouldKillTarget(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantEnts::WouldKillTarget(PlantEnts *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  long lVar2;
  Zombie *this_00;
  Plant *this_01;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_04007ac8(*(undefined8 *)(lVar2 + 0x70));
  this_01 = *(Plant **)(this + 0x10);
  fVar3 = (float)FUN_04007a0c(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                              *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar4 = (float)FUN_04007a1c(*(undefined4 *)(this_01 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_01);
  fVar6 = (float)FUN_04007a28(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  fVar7 = (float)Zombie::GetHitpointsUntilBleedout(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar7 <= (float)(int)(fVar3 * fVar4 * (float)iVar1 * fVar5 * fVar6));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::Initialize() */

void __thiscall PlantEnts::Initialize(PlantEnts *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long extraout_x0;
  long lVar4;
  Plant *this_00;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  fVar5 = 1.0;
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x4e] = (PlantEnts)0x0;
  lVar4 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar4 + 200) = 10;
  *(undefined4 *)(this + 0x60) = 0;
  this[0x69] = (PlantEnts)0x0;
  this[0x6a] = (PlantEnts)0x0;
  this[0x4f] = (PlantEnts)0x0;
  *(undefined4 *)(this + 0x6c) = 0;
  this[0x70] = (PlantEnts)0x0;
  FUN_04007a30(aRStack_10,lVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = *(Plant **)(this + 0x10);
  fVar6 = *(float *)(extraout_x0 + 0x2cc);
  if (*(float *)(this_00 + 0xd0) != fVar6) {
    fVar5 = *(float *)(this_00 + 0xd0) / fVar6;
  }
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(extraout_x0 + 0x2fc);
  iVar3 = FUN_04007a54(this_00);
  if (iVar3 == 1) {
    uVar1 = *(undefined4 *)(extraout_x0 + 0x2e8);
    fVar5 = fVar5 * fVar6;
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(extraout_x0 + 700);
    *(undefined4 *)(this + 0x34) = uVar1;
    *(float *)(this + 0x40) = fVar5;
  }
  else if (iVar3 == 2) {
    uVar1 = *(undefined4 *)(extraout_x0 + 0x2ec);
    fVar5 = fVar5 * *(float *)(extraout_x0 + 0x2d0);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(extraout_x0 + 0x2c0);
    *(undefined4 *)(this + 0x34) = uVar1;
    *(float *)(this + 0x40) = fVar5;
  }
  else if (iVar3 == 3) {
    uVar1 = *(undefined4 *)(extraout_x0 + 0x2f0);
    fVar5 = fVar5 * *(float *)(extraout_x0 + 0x2d4);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(extraout_x0 + 0x2c4);
    *(undefined4 *)(this + 0x34) = uVar1;
    *(float *)(this + 0x40) = fVar5;
  }
  else if (iVar3 == 4) {
    uVar1 = *(undefined4 *)(extraout_x0 + 0x2f4);
    fVar5 = fVar5 * *(float *)(extraout_x0 + 0x2d8);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(extraout_x0 + 0x2c4);
    *(undefined4 *)(this + 0x34) = uVar1;
    *(float *)(this + 0x40) = fVar5;
  }
  else if (iVar3 == 5) {
    fVar6 = *(float *)(extraout_x0 + 0x2dc);
    uVar1 = *(undefined4 *)(extraout_x0 + 0x2c8);
    uVar2 = *(undefined4 *)(extraout_x0 + 0x2f8);
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(extraout_x0 + 0x2e0);
    fVar5 = fVar5 * fVar6;
    *(undefined4 *)(this + 0x44) = uVar1;
    *(undefined4 *)(this + 0x34) = uVar2;
    *(float *)(this + 0x40) = fVar5;
  }
  else {
    fVar5 = *(float *)(this + 0x40);
  }
  iVar3 = Plant::GetMaxHitpoints(this_00);
  FUN_04007a20(fVar5 / (float)iVar3,this_00 + 0x3c4);
  Plant::Heal(*(Plant **)(this + 0x10));
  lVar4 = FUN_04009264(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(lVar4 + 0x3b8) = 2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEnts::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantEnts::onAnimStoppedCallback(PlantEnts *this,string *param_1)

{
  bool bVar1;
  
  FUN_040094c0(*(undefined8 *)(this + 0x10));
  bVar1 = std::operator==(param_1,"fall01");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"fall02"), !bVar1)) {
    return;
  }
  this[0x2c] = (PlantEnts)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantEnts::TakeSmashAttack(PlantEnts *this,RtWeakPtrBase *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  PlantAnimRig *pPVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04007a54(*(undefined8 *)(this + 0x10));
  if (iVar3 == 5) {
    if (this[0x2c] != (PlantEnts)0x0) goto LAB_04009640;
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 != '\0') goto LAB_04009640;
    iVar3 = *(int *)(this + 0x3c);
    *(int *)(this + 0x3c) = iVar3 + -1;
    if (-1 < iVar3 + -1) {
      this[0x4d] = (PlantEnts)0x0;
      this[0x2c] = (PlantEnts)0x1;
      pPVar4 = (PlantAnimRig *)FUN_04009264(*(undefined8 *)(this + 0x10));
      uVar1 = *(undefined4 *)(this + 0x3c);
      *(undefined4 *)(pPVar4 + 0x3b8) = uVar1;
      pcVar5 = *(code **)(*(long *)pPVar4 + 0x260);
      PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
      (*pcVar5)(pPVar4,uVar1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      PlantAnimRig::SetState(pPVar4,0xe);
      goto LAB_04009640;
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,param_2);
  PlantTupistraStalker::TakeSmashAttack(this,aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
LAB_04009640:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::TossZombieByAttackUppercut(Zombie*) */

void __thiscall PlantEnts::TossZombieByAttackUppercut(PlantEnts *this,Zombie *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  float *pfVar6;
  ProfileMgr *this_00;
  BoardTransforms *this_01;
  ZombieTosserSubSystem *pZVar7;
  uint uVar8;
  TPoint *pTVar9;
  Board *this_02;
  float fVar10;
  float fVar11;
  undefined4 local_80;
  undefined4 local_7c;
  TPoint<int> aTStack_78 [8];
  Point aPStack_70 [8];
  TPoint aTStack_68 [8];
  undefined4 local_60 [4];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  lVar5 = FUN_04009808(local_80,local_7c);
  if (lVar5 == 0) {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar11 = *pfVar6;
    fVar10 = pfVar6[1];
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    EATextSquish::Vec3::Vec3((Vec3 *)local_60,fVar11,fVar10,0.0);
    bVar2 = (**(code **)(*(long *)param_1 + 0x3f0))(param_1);
    this_01 = (BoardTransforms *)(ulong)bVar2;
    if (bVar2 == 0) {
      local_60[0] = NEON_fminnm(local_60[0],0x44480000);
    }
    else {
      uVar8 = (uint)DAT_06ae7c90 & 1;
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      if (((DAT_06ae7c90 & 1) == 0) &&
         (this_01 = (BoardTransforms *)__cxa_guard_acquire(&DAT_06ae7c90), (int)this_01 != 0)) {
        Sexy::Point::Point((Point *)&DAT_06ae7c70,uVar8,-1);
        Sexy::Point::Point((Point *)&DAT_06ae7c78,uVar8,1);
        Sexy::Point::Point((Point *)&DAT_06ae7c80,1,-1);
        Sexy::Point::Point((Point *)&DAT_06ae7c88,1,1);
        this_01 = (BoardTransforms *)__cxa_guard_release(&DAT_06ae7c90);
      }
      bVar1 = false;
      pTVar9 = (TPoint *)&DAT_06ae7c70;
      BoardTransforms::BoardSpaceToGrid(this_01,fVar11,fVar10);
      do {
        Sexy::TPoint<int>::operator+(aTStack_78,pTVar9);
        Sexy::Point::Point(aPStack_70,aTStack_68);
        cVar3 = Board::IsPitOfDoom(this_02,aPStack_70);
        if ((cVar3 != '\0') &&
           (((bVar4 = Sexy::RtObject::IsA<ZombiePirateSeagull>((RtObject *)param_1), bVar4 ||
             (bVar4 = Sexy::RtObject::IsA<ZombieSwashbuckler>((RtObject *)param_1), bVar4)) ||
            (bVar4 = Sexy::RtObject::IsA<ZombieImp>((RtObject *)param_1), bVar4)))) {
          bVar1 = true;
        }
        pTVar9 = pTVar9 + 8;
      } while (pTVar9 != (TPoint *)&DAT_06ae7c90);
      local_60[0] = NEON_fminnm(local_60[0],0x44480000);
      if (bVar1) goto LAB_0400993c;
    }
    pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
    ZombieTosserSubSystem::LaunchZombie
              ((ZombieTosserSubSystem *)0x43200000,0x3f000000,pZVar7,param_1,(Vec3 *)local_60,
               aRStack_50,0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
LAB_0400993c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::GetGridItemTarget(bool) */

void __thiscall PlantEnts::GetGridItemTarget(PlantEnts *this,bool param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long *extraout_x0;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114) + -1;
  }
  else {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114) + 1;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,iVar1,
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  uVar5 = local_20;
  uVar3 = FUN_04007a8c(local_20,local_18);
  if (uVar3 == 0) {
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,
               *(undefined4 *)(*(long *)(this + 0x10) + 0x114),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
    uVar5 = local_20;
    uVar3 = FUN_04007a8c(local_20,local_18);
  }
  for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
    FUN_04007ac0(uVar5,uVar4);
    nop();
    cVar2 = (**(code **)(*extraout_x0 + 0x200))();
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)(*extraout_x0 + 0x210))(extraout_x0,*(undefined8 *)(this + 0x10)),
       plVar6 = extraout_x0, cVar2 != '\0')) goto LAB_04009c48;
    uVar5 = local_20;
    uVar3 = FUN_04007a8c(local_20,local_18);
  }
  plVar6 = (long *)0x0;
LAB_04009c48:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::MayUppercutTarget(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantEnts::MayUppercutTarget(PlantEnts *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  Zombie *this_00;
  RtWeakPtrBase *this_01;
  string *psVar4;
  ulong uVar5;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = DAT_06ae7d30 & 1;
  if (((DAT_06ae7d30 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae7d30), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ae7c60,"chicken");
    nop();
    __cxa_guard_release(&DAT_06ae7d30);
    __cxa_atexit(FUN_040078e0,uVar6,&DAT_06a88000);
  }
  if (((DAT_06ae7d50 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae7d50), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ae7d60,(string *)&DAT_06ae7c60,(allocator *)&DAT_06ae7c68);
    __cxa_guard_release(&DAT_06ae7d50);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ae7d60,
                 &DAT_06a88000);
  }
  uVar6 = 0;
  do {
    uVar5 = FUN_04007aac(DAT_06ae7d60,DAT_06ae7d68);
    if (uVar5 <= uVar6) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)param_2);
      uVar2 = WouldKillTarget(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_0400a668;
    }
    this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    this_01 = (RtWeakPtrBase *)Zombie::GetType(this_00);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_04007ab8(DAT_06ae7d60,uVar6);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar6 = uVar6 + 1;
  } while (cVar1 == '\0');
  uVar2 = 0;
LAB_0400a668:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::FindTargetsAndPlayAttackAnim() */

void __thiscall PlantEnts::FindTargetsAndPlayAttackAnim(PlantEnts *this)

{
  char cVar1;
  int iVar2;
  GridItem *pGVar3;
  PlantAnimRig *pPVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  RtMixedPtrBase aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x2c] != (PlantEnts)0x0) {
LAB_0400a77c:
    uVar7 = 0;
    goto LAB_0400a780;
  }
  *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
  fVar9 = (float)PVZ_T();
  if (fVar9 - *(float *)(this + 100) <= 0.3) {
    if (this[0x68] == (PlantEnts)0x0) goto LAB_0400a77c;
  }
  else {
    this[0x68] = (PlantEnts)0x1;
  }
  pGVar3 = (GridItem *)GetGridItemTarget(this,false);
  if (pGVar3 != (GridItem *)0x0) {
    MayUppercutTarget(this,pGVar3);
  }
  GetZombieTarget(SUB81(this,0));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    if (cVar1 != '\0') {
LAB_0400a854:
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
      MayUppercutTarget(this,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      goto LAB_0400a874;
    }
    uVar7 = 0;
    if (pGVar3 != (GridItem *)0x0) goto LAB_0400a874;
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
    MayUppercutTarget(this,aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    if (cVar1 != '\0') goto LAB_0400a854;
LAB_0400a874:
    this[0x69] = (PlantEnts)0x1;
    iVar2 = FUN_04007a54(*(undefined8 *)(this + 0x10));
    if (iVar2 < 2) {
      fVar9 = 0.2;
    }
    else {
      fVar9 = 0.4;
    }
    uVar7 = 1;
    fVar10 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar6 = *(long *)(this + 0x10);
    uVar5 = 3;
    if (fVar9 < fVar10) {
      uVar5 = 1;
    }
    this[0x54] = (PlantEnts)(fVar10 <= fVar9);
    *(undefined4 *)(lVar6 + 200) = 0xb;
    pPVar4 = (PlantAnimRig *)FUN_04009264(lVar6);
    pcVar8 = *(code **)(*(long *)pPVar4 + 600);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar8)(pPVar4,uVar5,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    PlantAnimRig::SetState(pPVar4,0xe);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
LAB_0400a780:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::UpdateActions() */

void __thiscall PlantEnts::UpdateActions(PlantEnts *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar5;
  float *pfVar6;
  long lVar7;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar8;
  long extraout_x0;
  ulong uVar9;
  long *plVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  RtMixedPtr aRStack_80 [8];
  string asStack_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar12 = (float)PVZ_T();
  p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  if ((1.0 <= fVar12 - *(float *)(this + 0x48)) &&
     (*(float *)(p_Var11 + 0xd8) != *(float *)(this + 0x40))) {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var11);
    fVar16 = *pfVar6;
    FUN_04007a30((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,p_Var11);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    fVar12 = *(float *)(lVar7 + 0x9c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var11);
    fVar15 = *(float *)(lVar7 + 4);
    fVar17 = *(float *)(lVar7 + 8);
    FUN_04007a30((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,p_Var11);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    fVar14 = *(float *)(lVar7 + 0xa0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    uVar13 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_78,"POPANIM_EFFECTS_HYDROCOTYLEDRUMMER_EFFECT");
    GetPAMByName(asStack_78);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar8,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::string::~string(asStack_78);
    nop();
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_68,(float)(int)(fVar16 - fVar12),
               (float)(int)((fVar15 - fVar17) - fVar14),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_68,-1);
    FUN_04007a00(this_01 + 0x1c,uVar13);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
    std::string::string((string *)&local_68,"onStandaloneEffectFinishedCallback");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_78,
               (RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_01,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_68);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    std::string::string((string *)&local_68,"attack5");
    Effect_PopAnim::PlaySingleAnimation(this_01,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68,0);
    std::string::~string((string *)&local_68);
    nop();
    uVar13 = PVZ_T();
    iVar2 = *(int *)(*(long *)(this + 0x10) + 0x114);
    iVar3 = *(int *)(*(long *)(this + 0x10) + 0x110);
    *(undefined4 *)(this + 0x48) = uVar13;
    Sexy::Insets::Insets((Insets *)asStack_78,iVar2 + 1,iVar3 + -1,3,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    uVar13 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,uVar13,asStack_78);
    FUN_04007a30(aRStack_80,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    uVar9 = FUN_04007a8c(local_68,local_60);
    lVar7 = *(long *)(this + 0x10);
    if (uVar9 < (ulong)(long)*(int *)(extraout_x0 + 0x2e4)) {
      uVar13 = NEON_fminnm(*(float *)(extraout_x0 + 0x2b8) + *(float *)(lVar7 + 0xd8),
                           *(undefined4 *)(this + 0x40));
      *(undefined4 *)(lVar7 + 0xd8) = uVar13;
    }
    else {
      uVar13 = NEON_fminnm(*(float *)(this + 0x44) + *(float *)(lVar7 + 0xd8),
                           *(undefined4 *)(this + 0x40));
      *(undefined4 *)(lVar7 + 0xd8) = uVar13;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
    p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
  }
  FUN_04009264(p_Var11);
  fVar12 = *(float *)(this + 0x40);
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  fVar14 = *(float *)(this_00 + 0xd8);
  if (fVar14 <= fVar12 * 0.66) {
    pPVar5 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string((string *)&local_68,"tree235656");
    PopAnimRig::SetLayerVisibility(pPVar5,(string *)&local_68,true);
    std::string::~string((string *)&local_68);
    nop();
    pPVar5 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string((string *)&local_68,"tree233");
  }
  else {
    pPVar5 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string((string *)&local_68,"tree235656");
    PopAnimRig::SetLayerVisibility(pPVar5,(string *)&local_68,false);
    std::string::~string((string *)&local_68);
    nop();
    pPVar5 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string((string *)&local_68,"tree233");
  }
  PopAnimRig::SetLayerVisibility(pPVar5,(string *)&local_68,fVar12 * 0.66 < fVar14);
  std::string::~string((string *)&local_68);
  nop();
  uVar1 = *(uint *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  if (uVar1 == 10) {
    cVar4 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar4 == '\0') {
      FindTargetsAndPlayAttackAnim(this);
    }
  }
  else if ((9 < uVar1) && (uVar1 < 0xd)) {
    pPVar5 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    cVar4 = PopAnimRig::IsPlayingAnything(pPVar5);
    if (cVar4 == '\0') {
      uVar13 = PVZ_T();
      this[0x68] = (PlantEnts)0x0;
      *(undefined4 *)(this + 100) = uVar13;
      plVar10 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar10 + 0x118))();
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::DoAttackAnim(int) */

void __thiscall PlantEnts::DoAttackAnim(PlantEnts *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  ResourceInfo *pRVar8;
  long *plVar9;
  StandaloneEffect *pSVar10;
  char *__s;
  Effect_PopAnim *pEVar11;
  int iVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  undefined4 unaff_w27;
  float fVar17;
  float fVar18;
  Effect_PopAnim *local_d0;
  Effect_PopAnim *local_c8;
  Effect_PopAnim *local_c0;
  Effect_PopAnim *local_b8;
  Effect_PopAnim *local_b0;
  Effect_PopAnim *local_a8;
  Effect_PopAnim *local_a0;
  Effect_PopAnim *local_98;
  Effect_PopAnim *local_90;
  RtMixedPtr aRStack_88 [8];
  string asStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  uVar15 = 1;
  lVar16 = 0;
  local_d0 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  local_c8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  local_c0 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  local_b8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  local_b0 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  local_a8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  local_a0 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  local_98 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  local_90 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)&local_68,&local_d0);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)&local_68,&local_c8);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)&local_68,&local_c0);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)&local_68,&local_b8);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)&local_68,&local_b0);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)&local_68,&local_a8);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)&local_68,&local_a0);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)&local_68,&local_98);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)&local_68,&local_90);
  do {
    uVar4 = FUN_04007a98(local_68,local_60);
    if (uVar4 < uVar15) {
      std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::~vector
                ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)&local_68);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    p_Var13 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    iVar1 = (int)uVar15;
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var13);
    fVar17 = *pfVar5;
    FUN_04007a30(aRStack_78,p_Var13);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    iVar14 = (int)(fVar17 - *(float *)(lVar6 + 0x9c));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    p_Var13 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    lVar6 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var13);
    fVar17 = *(float *)(lVar6 + 4);
    fVar18 = *(float *)(lVar6 + 8);
    FUN_04007a30(aRStack_78,p_Var13);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    iVar12 = (int)((fVar17 - fVar18) - *(float *)(lVar6 + 0xa0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    if (iVar1 == 1) {
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
LAB_0400b454:
      iVar14 = iVar14 + iVar3;
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar12 = iVar12 - iVar3;
      unaff_w27 = Board::MakeRenderOrder(0x65130,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,0);
    }
    else {
      if (iVar1 == 2) {
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        iVar3 = iVar3 << 1;
        goto LAB_0400b454;
      }
      if (iVar1 == 3) {
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        iVar14 = iVar14 + iVar3 * 3;
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        iVar12 = iVar12 - iVar3;
        unaff_w27 = Board::MakeRenderOrder(0x65130,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,0);
        goto LAB_0400b0f8;
      }
      if (iVar1 == 4) {
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        lVar6 = *(long *)(this + 0x10);
LAB_0400b518:
        iVar14 = iVar14 + iVar3;
        unaff_w27 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(lVar6 + 0x110),0);
      }
      else {
        if (iVar1 == 5) {
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar3 = iVar3 << 1;
          lVar6 = *(long *)(this + 0x10);
          goto LAB_0400b518;
        }
        if (iVar1 == 6) {
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar14 = iVar14 + iVar3 * 3;
          unaff_w27 = Board::MakeRenderOrder
                                (0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
        }
        else {
          if (iVar1 == 7) {
            iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          }
          else {
            if (iVar1 != 8) {
              if (iVar1 == 9) {
                iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
                iVar14 = iVar14 + iVar3 * 3;
                iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
                iVar12 = iVar12 + iVar3;
                unaff_w27 = Board::MakeRenderOrder
                                      (0x65130,*(int *)(*(long *)(this + 0x10) + 0x110) + 1,0);
              }
              goto LAB_0400b0f8;
            }
            iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
            iVar3 = iVar3 << 1;
          }
          iVar14 = iVar14 + iVar3;
          iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar12 = iVar12 + iVar3;
          unaff_w27 = Board::MakeRenderOrder(0x65130,*(int *)(*(long *)(this + 0x10) + 0x110) + 1,0)
          ;
        }
      }
    }
LAB_0400b0f8:
    if (param_1 == 1) {
      puVar7 = (undefined8 *)FUN_04007aa4(local_68,lVar16);
      pEVar11 = (Effect_PopAnim *)*puVar7;
      std::string::string(asStack_80,"POPANIM_EFFECTS_ENTS_E2");
      GetPAMByName(asStack_80);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_78);
      Effect_PopAnim::CreatePopAnimRig(pEVar11,(PopAnim *)pRVar8,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      std::string::~string(asStack_80);
      nop();
      puVar7 = (undefined8 *)FUN_04007aa4(local_68,lVar16);
      pSVar10 = (StandaloneEffect *)*puVar7;
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_78,(float)iVar14,(float)iVar12,0.0);
      StandaloneEffect::SetBoardSpaceOrigin(pSVar10,(SexyVector3 *)aRStack_78,-1);
      plVar9 = (long *)FUN_04007aa4(local_68,lVar16);
      FUN_04007a00(*plVar9 + 0x1c,unaff_w27);
      puVar7 = (undefined8 *)FUN_04007aa4(local_68,lVar16);
      pSVar10 = (StandaloneEffect *)*puVar7;
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
      std::string::string((string *)aRStack_78,"onStandaloneEffectFinishedCallback");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                (aRStack_50,asStack_80,aRStack_78);
      StandaloneEffect::SetCompletionCallback(pSVar10,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string((string *)aRStack_78);
      nop();
      Sexy::RtId::~RtId((RtId *)asStack_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      puVar7 = (undefined8 *)FUN_04007aa4(local_68,lVar16);
      pEVar11 = (Effect_PopAnim *)*puVar7;
      __s = "attack_e2";
LAB_0400b294:
      std::string::string((string *)aRStack_78,__s);
      Effect_PopAnim::PlaySingleAnimation(pEVar11,aRStack_78,0);
      std::string::~string((string *)aRStack_78);
      nop();
    }
    else if (param_1 == 2) {
      if ((iVar1 == 5) && (cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar2 != '\0'))
      {
        puVar7 = (undefined8 *)FUN_04007aa4(local_68,4);
        pEVar11 = (Effect_PopAnim *)*puVar7;
        std::string::string(asStack_80,"POPANIM_EFFECTS_ENTS_E1");
        GetPAMByName(asStack_80);
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_78);
        Effect_PopAnim::CreatePopAnimRig(pEVar11,(PopAnim *)pRVar8,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
        std::string::~string(asStack_80);
        nop();
        puVar7 = (undefined8 *)FUN_04007aa4(local_68,4);
        pSVar10 = (StandaloneEffect *)*puVar7;
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_78,(float)iVar14,(float)iVar12,0.0);
        StandaloneEffect::SetBoardSpaceOrigin(pSVar10,(SexyVector3 *)aRStack_78,-1);
        plVar9 = (long *)FUN_04007aa4(local_68,4);
        FUN_04007a00(*plVar9 + 0x1c,unaff_w27);
        puVar7 = (undefined8 *)FUN_04007aa4(local_68,4);
        pSVar10 = (StandaloneEffect *)*puVar7;
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
        std::string::string((string *)aRStack_78,"onStandaloneEffectFinishedCallback");
        RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                  (aRStack_50,asStack_80,aRStack_78);
        StandaloneEffect::SetCompletionCallback(pSVar10,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        std::string::~string((string *)aRStack_78);
        nop();
        Sexy::RtId::~RtId((RtId *)asStack_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88)
        ;
        puVar7 = (undefined8 *)FUN_04007aa4(local_68,4);
        pEVar11 = (Effect_PopAnim *)*puVar7;
        __s = "attack_e1";
      }
      else {
        puVar7 = (undefined8 *)FUN_04007aa4(local_68,lVar16);
        pEVar11 = (Effect_PopAnim *)*puVar7;
        std::string::string(asStack_80,"POPANIM_EFFECTS_ENTS_E3");
        GetPAMByName(asStack_80);
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_78);
        Effect_PopAnim::CreatePopAnimRig(pEVar11,(PopAnim *)pRVar8,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
        std::string::~string(asStack_80);
        nop();
        puVar7 = (undefined8 *)FUN_04007aa4(local_68,lVar16);
        pSVar10 = (StandaloneEffect *)*puVar7;
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_78,(float)iVar14,(float)iVar12,0.0);
        StandaloneEffect::SetBoardSpaceOrigin(pSVar10,(SexyVector3 *)aRStack_78,-1);
        plVar9 = (long *)FUN_04007aa4(local_68,lVar16);
        FUN_04007a00(*plVar9 + 0x1c,unaff_w27);
        puVar7 = (undefined8 *)FUN_04007aa4(local_68,lVar16);
        pSVar10 = (StandaloneEffect *)*puVar7;
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
        std::string::string((string *)aRStack_78,"onStandaloneEffectFinishedCallback");
        RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                  (aRStack_50,asStack_80,aRStack_78);
        StandaloneEffect::SetCompletionCallback(pSVar10,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        std::string::~string((string *)aRStack_78);
        nop();
        Sexy::RtId::~RtId((RtId *)asStack_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88)
        ;
        puVar7 = (undefined8 *)FUN_04007aa4(local_68,lVar16);
        pEVar11 = (Effect_PopAnim *)*puVar7;
        __s = "attack_e3";
      }
      goto LAB_0400b294;
    }
    lVar16 = lVar16 + 1;
    uVar15 = uVar15 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEnts::DoSpecial(int) */

void PlantEnts::DoSpecial(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PlantEnts *this;
  Zombie *this_00;
  undefined8 *puVar8;
  BoardEntity *this_01;
  Zombie *extraout_x0;
  float *pfVar9;
  long lVar10;
  Effect_PopAnim *pEVar11;
  ResourceInfo *pRVar12;
  BoardEntity *this_02;
  long extraout_x0_00;
  EntsSubsystem *pEVar13;
  undefined8 uVar14;
  Plant *pPVar15;
  RtObject *pRVar16;
  code *pcVar17;
  RealObject *pRVar18;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  DamageInfo *pDVar25;
  code *local_110;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  Point aPStack_e8 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  Insets aIStack_d8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  string asStack_68 [96];
  long local_8;
  
  this = (PlantEnts *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if ((*(float *)(this + 0x58) == 0.0) ||
     (fVar20 = (float)PVZ_T(), *(float *)(this + 0x5c) < fVar20 - *(float *)(this + 0x58))) {
    this[0x55] = (PlantEnts)0x1;
  }
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    if (this[0x4d] == (PlantEnts)0x0) {
      p_Var19 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var19);
      fVar20 = *pfVar9;
      FUN_04007a30((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68,p_Var19);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68)
      ;
      iVar5 = (int)(fVar20 - *(float *)(lVar10 + 0x9c));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      p_Var19 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
      lVar10 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var19);
      fVar21 = *(float *)(lVar10 + 4);
      fVar22 = *(float *)(lVar10 + 8);
      FUN_04007a30((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68,p_Var19);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68)
      ;
      fVar20 = *(float *)(lVar10 + 0xa0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      fVar20 = (float)(int)((fVar21 - fVar22) - fVar20);
      uVar3 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
      pEVar11 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)avStack_c8,"POPANIM_EFFECTS_ENTS_E2");
      GetPAMByName((string *)avStack_c8);
      pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
      Effect_PopAnim::CreatePopAnimRig(pEVar11,(PopAnim *)pRVar12,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      std::string::~string((string *)avStack_c8);
      nop();
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,(float)(iVar4 + iVar5),fVar20,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar11,(SexyVector3 *)asStack_68,-1);
      FUN_04007a00(pEVar11 + 0x1c,uVar3);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aIStack_d8);
      std::string::string(asStack_68,"onStandaloneEffectFinishedCallback");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_b0,
                 (string *)avStack_c8,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar11,aRStack_b0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_b0);
      std::string::~string(asStack_68);
      nop();
      Sexy::RtId::~RtId((RtId *)avStack_c8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_d8);
      std::string::string(asStack_68,"attack_e2");
      Effect_PopAnim::PlaySingleAnimation(pEVar11,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_68,0);
      std::string::~string(asStack_68);
      nop();
      pEVar11 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)avStack_c8,"POPANIM_EFFECTS_ENTS_E2");
      GetPAMByName((string *)avStack_c8);
      pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
      Effect_PopAnim::CreatePopAnimRig(pEVar11,(PopAnim *)pRVar12,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      std::string::~string((string *)avStack_c8);
      nop();
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,(float)(iVar5 + iVar4 * 2),fVar20,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar11,(SexyVector3 *)asStack_68,-1);
      FUN_04007a00(pEVar11 + 0x1c,uVar3);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aIStack_d8);
      std::string::string(asStack_68,"onStandaloneEffectFinishedCallback");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_b0,
                 (string *)avStack_c8,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar11,aRStack_b0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_b0);
      std::string::~string(asStack_68);
      nop();
      Sexy::RtId::~RtId((RtId *)avStack_c8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_d8);
      std::string::string(asStack_68,"attack_e2");
      Effect_PopAnim::PlaySingleAnimation(pEVar11,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_68,0);
      std::string::~string(asStack_68);
      nop();
      pRVar18 = *(RealObject **)(this + 0x10);
      std::string::string(asStack_68,"attack_2");
      RealObject::PlayPositionalSound(pRVar18,asStack_68,0.0);
      std::string::~string(asStack_68);
      nop();
      this[0x4d] = (PlantEnts)0x1;
      goto LAB_0400bc78;
    }
    this[0x4d] = (PlantEnts)0x0;
    GetZombieTarget(SUB41(param_1,0));
    Sexy::Insets::Insets
              (aIStack_d8,*(int *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110),3,1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
    uVar3 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares(avStack_c8,uVar3,aIStack_d8);
    pPVar15 = *(Plant **)(this + 0x10);
    fVar20 = (float)FUN_04007a0c(*(undefined4 *)(pPVar15 + 0xf4),*(undefined4 *)(pPVar15 + 0x100),
                                 *(undefined4 *)(pPVar15 + 0x104),*(undefined4 *)(pPVar15 + 0x3b8));
    fVar21 = (float)FUN_04007a1c(*(undefined4 *)(pPVar15 + 0x3bc));
    fVar24 = *(float *)(this + 0x34);
    fVar22 = (float)Plant::GetExtraDPSmodifier(pPVar15);
    fVar23 = (float)FUN_04007a28(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
    local_f8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_c8);
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
    pDVar25._0_4_ = (DamageInfo *)(float)(int)(fVar20 * fVar21 * fVar24 * fVar22 * fVar23);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar2)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8)
      ;
      pRVar16 = (RtObject *)*puVar8;
      cVar1 = RealObject::IsOnOpposingTeam(pRVar16,1);
      if (cVar1 != '\0') {
        this_00 = Sexy::RtObject::Cast<Zombie>(pRVar16);
        if (this_00 == (Zombie *)0x0) {
          nop();
          if (((extraout_x0 != (Zombie *)0x0) &&
              (cVar1 = (**(code **)(*(long *)extraout_x0 + 0xb8))(), cVar1 != '\0')) &&
             (cVar1 = (**(code **)(*(long *)extraout_x0 + 0x200))(extraout_x0), cVar1 != '\0')) {
            uVar14 = *(undefined8 *)(this + 0x10);
            local_110 = *(code **)(*(long *)extraout_x0 + 0x110);
            Sexy::Point::Point(aPStack_e8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar25._0_4_,local_e0,local_dc,(DamageInfo *)asStack_68,uVar14,aPStack_e8,0)
            ;
            this_00 = extraout_x0;
            goto LAB_0400bd0c;
          }
        }
        else {
          bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this_00);
          if (bVar2) {
            pcVar17 = *(code **)(*(long *)this_00 + 0x120);
            Sexy::Point::Point(aPStack_e8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_e0,local_dc,(DamageInfo *)asStack_68,4,aPStack_e8,0);
            (*pcVar17)(this_00,(DamageInfo *)asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
          }
          else {
            uVar14 = *(undefined8 *)(this + 0x10);
            local_110 = *(code **)(*(long *)this_00 + 0x110);
            Sexy::Point::Point(aPStack_e8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar25._0_4_,local_e0,local_dc,(DamageInfo *)asStack_68,uVar14,aPStack_e8,0)
            ;
LAB_0400bd0c:
            (*local_110)(this_00,(DamageInfo *)asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
    }
  }
  else {
    *(undefined4 *)(this + 0x30) = 0;
    if (this[0x4c] == (PlantEnts)0x0) {
      iVar4 = *(int *)(this + 0x74);
      *(int *)(this + 0x74) = iVar4 + 1;
      if (iVar4 + 1 == 5) {
        DoAttackAnim(this,2);
        pRVar18 = *(RealObject **)(this + 0x10);
        std::string::string(asStack_68,"attack_3");
        RealObject::PlayPositionalSound(pRVar18,asStack_68,0.0);
        std::string::~string(asStack_68);
        nop();
      }
      else {
        pRVar18 = *(RealObject **)(this + 0x10);
        std::string::string(asStack_68,"attack_2");
        RealObject::PlayPositionalSound(pRVar18,asStack_68,0.0);
        std::string::~string(asStack_68);
        nop();
        DoAttackAnim(this,1);
      }
      this[0x4c] = (PlantEnts)0x1;
      goto LAB_0400bc78;
    }
    if (4 < *(int *)(this + 0x74)) {
      *(undefined4 *)(this + 0x74) = 0;
    }
    this[0x4c] = (PlantEnts)0x0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_100);
    Sexy::Insets::Insets
              (aIStack_d8,*(int *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110) + -1,4,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
    uVar3 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares(avStack_c8,uVar3,aIStack_d8);
    pPVar15 = *(Plant **)(this + 0x10);
    fVar20 = (float)FUN_04007a0c(*(undefined4 *)(pPVar15 + 0xf4),*(undefined4 *)(pPVar15 + 0x100),
                                 *(undefined4 *)(pPVar15 + 0x104),*(undefined4 *)(pPVar15 + 0x3b8));
    fVar21 = (float)FUN_04007a1c(*(undefined4 *)(pPVar15 + 0x3bc));
    fVar24 = *(float *)(this + 0x38);
    fVar22 = (float)Plant::GetExtraDPSmodifier(pPVar15);
    fVar23 = (float)FUN_04007a28(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
    local_f8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_c8);
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
    pDVar25._0_4_ = (DamageInfo *)(float)(int)(fVar20 * fVar21 * fVar24 * fVar22 * fVar23);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar2)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8)
      ;
      pRVar16 = (RtObject *)*puVar8;
      cVar1 = RealObject::IsOnOpposingTeam(pRVar16,1);
      if (cVar1 != '\0') {
        this_01 = (BoardEntity *)Sexy::RtObject::Cast<Zombie>(pRVar16);
        if (this_01 == (BoardEntity *)0x0) {
          nop();
          iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
          SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
          iVar5 = BoardEntity::CalcColumnPosition(this_02);
          SharkMinion::getRow((SharkMinion *)this_02);
          if (((iVar4 <= iVar5) && (this_02 != (BoardEntity *)0x0)) &&
             ((cVar1 = (**(code **)(*(long *)this_02 + 0xb8))(this_02,8), cVar1 != '\0' &&
              (cVar1 = (**(code **)(*(long *)this_02 + 0x200))(this_02), cVar1 != '\0')))) {
            uVar14 = *(undefined8 *)(this + 0x10);
            local_110 = *(code **)(*(long *)this_02 + 0x110);
            Sexy::Point::Point(aPStack_e8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar25._0_4_,local_e0,local_dc,(DamageInfo *)asStack_68,uVar14,aPStack_e8,0)
            ;
            this_01 = this_02;
LAB_0400c2b8:
            (*local_110)(this_01,(DamageInfo *)asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
          }
        }
        else {
          iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
          SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
          iVar5 = BoardEntity::CalcColumnPosition(this_01);
          SharkMinion::getRow((SharkMinion *)this_01);
          if (iVar4 <= iVar5) {
            if (*(int *)(this + 0x74) == 0) {
              cVar1 = Zombie::HasCondition(this_01,0x6a);
              if (((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(this_01,0x6b), cVar1 == '\0'))
                 && (cVar1 = Zombie::HasCondition(this_01,0x6c), cVar1 == '\0')) {
                bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this_01);
                if (bVar2) {
                  local_110 = *(code **)(*(long *)this_01 + 0x120);
                  Sexy::Point::Point(aPStack_e8,-1,-1);
                  Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
                  DamageInfo::DamageInfo
                            ((DamageInfo *)0x0,local_e0,local_dc,(DamageInfo *)asStack_68,4,
                             aPStack_e8,0);
                  goto LAB_0400c2b8;
                }
                cVar1 = Zombie::IsFlying((Zombie *)this_01);
                if ((((cVar1 == '\0') &&
                     (iVar4 = Zombie::GetSizeType((Zombie *)this_01), iVar4 != 2)) &&
                    (cVar1 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar1 == '\0')) &&
                   ((cVar1 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar1 == '\0' &&
                    (cVar1 = Zombie::IsBoss((Zombie *)this_01), cVar1 == '\0')))) {
                  iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
                  iVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
                  iVar6 = BoardEntity::CalcColumnPosition(this_01);
                  iVar7 = SharkMinion::getRow((SharkMinion *)this_01);
                  FUN_04007a30((DamageInfo *)asStack_68,*(undefined8 *)(this + 0x10));
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                  nop();
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
                  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
                  if ((cVar1 == '\0') || ((iVar5 != iVar7 || (iVar6 != iVar4 + 2)))) {
                    pEVar13 = Board::GetGameSubSystem<EntsSubsystem>(*(Board **)(gLawnApp + 0x9f0));
                    EntsSubsystem::StunZombies
                              (pEVar13,iVar6,iVar7,*(float *)(extraout_x0_00 + 0x300),
                               *(Plant **)(this + 0x10));
                  }
                  else {
                    pEVar13 = Board::GetGameSubSystem<EntsSubsystem>(*(Board **)(gLawnApp + 0x9f0));
                    EntsSubsystem::StunZombies2
                              (pEVar13,iVar6,iVar7,*(float *)(extraout_x0_00 + 0x304),
                               *(Plant **)(this + 0x10));
                  }
                  Zombie::SetIsControlled((Zombie *)this_01,true);
                }
              }
              else {
                if (6.0 < *(float *)(this + 0x30)) goto LAB_0400bbfc;
                cVar1 = Zombie::HasCondition(this_01,0x6c);
                if (cVar1 == '\0') {
                  cVar1 = Zombie::HasCondition(this_01,0x6b);
                  if (cVar1 == '\0') {
                    cVar1 = Zombie::HasCondition(this_01,0x6a);
                    if (cVar1 != '\0') {
                      Zombie::EndCondition((Zombie *)this_01,0x6a);
                    }
                  }
                  else {
                    Zombie::EndCondition((Zombie *)this_01,0x6b);
                  }
                }
                else {
                  Zombie::EndCondition((Zombie *)this_01,0x6c);
                }
                *(float *)(this + 0x30) = *(float *)(this + 0x30) + 1.0;
              }
            }
            else {
LAB_0400bbfc:
              uVar14 = *(undefined8 *)(this + 0x10);
              pcVar17 = *(code **)(*(long *)this_01 + 0x110);
              Sexy::Point::Point(aPStack_e8,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
              DamageInfo::DamageInfo
                        (pDVar25._0_4_,local_e0,local_dc,(DamageInfo *)asStack_68,uVar14,aPStack_e8,
                         0);
              (*pcVar17)(this_01,(DamageInfo *)asStack_68);
              DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_100);
LAB_0400bc78:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

