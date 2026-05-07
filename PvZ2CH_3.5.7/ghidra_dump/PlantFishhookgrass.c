// Class: PlantFishhookgrass


/* PlantFishhookgrass::CanEndPlantfood() */

bool __thiscall PlantFishhookgrass::CanEndPlantfood(PlantFishhookgrass *this)

{
  return 8 < *(int *)(this + 0x110) - 8U;
}


/* PlantFishhookgrass::CanBeWatered() */

undefined8 __thiscall PlantFishhookgrass::CanBeWatered(PlantFishhookgrass *this)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0x110) - 2U < 3) {
    return 0;
  }
  uVar1 = PlantFramework::CanBeWatered((PlantFramework *)this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::StaticClassInit() */

void PlantFishhookgrass::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFishhookgrass");
    (*pcVar2)(plVar1,asStack_10,FUN_0401f0f8,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFishhookgrass::StaticGetClass() */

long * PlantFishhookgrass::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantFishhookgrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFishhookgrass::GetClass() const */

long * PlantFishhookgrass::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantFishhookgrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFishhookgrass::onExit(FishhookgrassState) */

void __thiscall PlantFishhookgrass::onExit(PlantFishhookgrass *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 3:
  case 6:
  case 8:
  case 10:
  case 0xd:
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x140) = uVar1;
  }
  return;
}


/* PlantFishhookgrass::getTongueOrigin() const */

undefined4 __thiscall PlantFishhookgrass::getTongueOrigin(PlantFishhookgrass *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(this + 0x10);
  uVar2 = FUN_04019c40(*(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c),
                       *(undefined4 *)(lVar1 + 0x20));
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::retractTongueAll(PlantWeapon) */

void PlantFishhookgrass::retractTongueAll(PlantFishhookgrass *param_1)

{
  char cVar1;
  int iVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *this;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04019ab8(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      while( true ) {
        pRVar3 = (RtWeakPtrBase *)FUN_04019ac4(*(undefined8 *)(param_1 + 0x30),lVar4);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        nop();
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
        if (((cVar1 == '\0') || (cVar1 = Zombie::IsFlying(this), cVar1 != '\0')) ||
           (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) break;
        lVar4 = lVar4 + 1;
        getTongueOrigin(param_1);
        FUN_04019c40(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                     *(undefined4 *)(this + 0x20));
        Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (iVar2 <= (int)lVar4) goto LAB_0401b7b8;
      }
      lVar4 = lVar4 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    } while ((int)lVar4 < iVar2);
  }
LAB_0401b7b8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::canZombieBeTargeted(Zombie const*) const */

void __thiscall PlantFishhookgrass::canZombieBeTargeted(PlantFishhookgrass *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
  if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')
       ) && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) &&
     (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 == '\0')) {
    cVar1 = Zombie::IsControlled(param_1);
    if (cVar1 == '\0') {
      pcVar3 = *(code **)(*(long *)param_1 + 0x3d0);
      Plant::GetType();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      uVar2 = (*pcVar3)(param_1,aRStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_0401b828;
    }
  }
  uVar2 = 0;
LAB_0401b828:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantFishhookgrass::canZombieBeMoved(Zombie const*) const */

byte __thiscall PlantFishhookgrass::canZombieBeMoved(PlantFishhookgrass *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = canZombieBeTargeted(this,param_1);
  if ((cVar1 != '\0') && (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 != '\0')) {
    bVar2 = Zombie::IsControlled(param_1);
    return bVar2 ^ 1;
  }
  return 0;
}


/* PlantFishhookgrass::getTongueRange(PlantWeapon) const */

undefined4 __thiscall PlantFishhookgrass::getTongueRange(PlantFishhookgrass *this,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0401d008(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_04019a70(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  if (param_2 == 1) {
    if (2 < iVar1) {
      return *(undefined4 *)(lVar2 + 0x3d4);
    }
    return *(undefined4 *)(lVar2 + 0x3d0);
  }
  if (iVar1 < 3) {
    return *(undefined4 *)(lVar2 + 0x348);
  }
  return *(undefined4 *)(lVar2 + 0x34c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::getPlantAttackRect(PlantWeapon) */

void PlantFishhookgrass::getPlantAttackRect(Insets *param_1,PlantFishhookgrass *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_2 + 0x10));
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  fVar7 = (float)iVar2 - (float)iVar1;
  local_10 = fVar7;
  local_c = (float)getTongueRange(param_2,param_3);
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  if (param_3 == 0) {
    fVar9 = 1.0;
    iVar2 = SharkMinion::getRow(*(SharkMinion **)(param_2 + 0x10));
    fVar8 = (float)iVar2;
    pfVar6 = eastl::min_alt<float>(&local_c,&local_10);
    fVar7 = *pfVar6;
  }
  else {
    fVar9 = (float)iVar2;
    fVar8 = 0.0;
  }
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (param_1,(int)((float)iVar1 * (float)iVar2 + 200.0),(int)(fVar8 * (float)iVar3 + 160.0),
             (int)((float)iVar4 * fVar7),(int)((float)iVar5 * fVar9));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::calculateDistanceToTarget(BoardEntity const*, PlantWeapon) const */

void PlantFishhookgrass::calculateDistanceToTarget
               (undefined1 param_1_00 [16],undefined4 param_2,undefined4 param_3,
               PlantFishhookgrass *param_1,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_5,undefined4 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_5 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    lVar3 = *(long *)(param_1 + 0x10);
    fVar5 = (float)FUN_04019c40(*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                                *(undefined4 *)(lVar3 + 0x20));
    local_28 = CONCAT44(local_28._4_4_,800.0 - fVar5);
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    local_18 = (float)getTongueRange(param_1,param_6);
    local_18 = (float)iVar1 * local_18;
    pfVar4 = eastl::min_alt<float>(&local_18,(float *)&local_28);
    fVar5 = *pfVar4;
  }
  else {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(param_1 + 0x10));
    local_38 = *puVar2;
    local_30 = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(param_5);
    local_28 = *puVar2;
    local_20 = *(undefined4 *)(puVar2 + 1);
    local_18 = (float)Sexy::SexyVector3::operator-
                                ((SexyVector3 *)&local_28,(SexyVector3 *)&local_38);
    local_14 = param_2;
    local_10 = param_3;
    fVar5 = (float)DVec3::getLength((DVec3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::getTongueStretchDestination(PlantWeapon) const */

void PlantFishhookgrass::getTongueStretchDestination
               (undefined1 param_1 [16],float param_2,PlantFishhookgrass *param_3,undefined4 param_4
               )

{
  RtWeakPtr *this;
  char cVar1;
  int iVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  Insets *pIVar6;
  SharkMinion *this_00;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  this = (RtWeakPtr *)(param_3 + 0x118);
  local_8 = ___stack_chk_guard;
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  fVar7 = (float)calculateDistanceToTarget(param_3,pRVar4,param_4);
  fVar8 = (float)getTongueOrigin(param_3);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,fVar7 + fVar8,param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
  if (cVar1 != '\0') {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    pIVar6 = (Insets *)(**(code **)(*plVar5 + 0x178))();
    Sexy::Insets::Insets((Insets *)&local_18,pIVar6);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_20,(float)local_18 + (float)local_10 * 0.5,
               (float)local_14 + (float)local_c * 0.5);
    this_00 = (SharkMinion *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    iVar2 = SharkMinion::getRow(this_00);
    iVar3 = SharkMinion::getRow(*(SharkMinion **)(param_3 + 0x10));
    if (iVar2 == iVar3) {
      local_28 = CONCAT44(local_28._4_4_,local_20);
    }
    else {
      local_28 = CONCAT44(uStack_1c,local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_28,(int)((ulong)local_28 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::getTongueStretchDestinationAll(PlantWeapon, Sexy::RtWeakPtr<BoardEntity>)
   const */

void PlantFishhookgrass::getTongueStretchDestinationAll
               (undefined1 param_1 [16],float param_2,PlantFishhookgrass *param_3,undefined4 param_4
               ,RtWeakPtr *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  Insets *pIVar6;
  SharkMinion *this;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_5);
  fVar7 = (float)calculateDistanceToTarget(param_3,pRVar4,param_4);
  fVar8 = (float)getTongueOrigin(param_3);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,fVar7 + fVar8,fVar7 + param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_5);
  if (cVar1 != '\0') {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    pIVar6 = (Insets *)(**(code **)(*plVar5 + 0x178))();
    Sexy::Insets::Insets((Insets *)&local_18,pIVar6);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_20,(float)local_18 + (float)local_10 * 0.5,
               (float)local_14 + (float)local_c * 0.5);
    this = (SharkMinion *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    iVar2 = SharkMinion::getRow(this);
    iVar3 = SharkMinion::getRow(*(SharkMinion **)(param_3 + 0x10));
    if (iVar2 == iVar3) {
      local_28 = CONCAT44(local_28._4_4_,local_20);
    }
    else {
      local_28 = CONCAT44(uStack_1c,local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_28,(int)((ulong)local_28 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::getTongueRetractDestinationAll(PlantWeapon, Sexy::RtWeakPtr<BoardEntity>)
   const */

void PlantFishhookgrass::getTongueRetractDestinationAll
               (undefined1 param_1 [16],undefined4 param_2,PlantFishhookgrass *param_3,
               undefined4 param_4,RtWeakPtr *param_5)

{
  float fVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_5);
  calculateDistanceToTarget(param_3,pRVar3,param_4);
  local_20 = (float)getTongueOrigin(param_3);
  local_1c = param_2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)param_5);
  local_18 = (float)getTongueStretchDestinationAll
                              (param_3,param_4,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  uStack_14 = param_2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_18,(SexyVector2 *)&local_20);
  local_c = param_2;
  Sexy::SexyVector2::Normalize((SexyVector2 *)&local_10);
  fVar1 = local_20;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = (float)iVar2 + fVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_14);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::getTongueRetractDestination(PlantWeapon) const */

void PlantFishhookgrass::getTongueRetractDestination
               (undefined1 param_1 [16],undefined4 param_2,PlantFishhookgrass *param_3,
               undefined4 param_4)

{
  float fVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_3 + 0x118));
  calculateDistanceToTarget(param_3,pRVar3,param_4);
  local_20 = (float)getTongueOrigin(param_3);
  local_1c = param_2;
  local_18 = (float)getTongueStretchDestination(param_3,param_4);
  uStack_14 = param_2;
  local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_18,(SexyVector2 *)&local_20);
  local_c = param_2;
  Sexy::SexyVector2::Normalize((SexyVector2 *)&local_10);
  fVar1 = local_20;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = (float)iVar2 + fVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_14);
}


/* PlantFishhookgrass::retractTongue(PlantWeapon) */

void __thiscall PlantFishhookgrass::retractTongue(PlantFishhookgrass *this,undefined8 param_2)

{
  getTongueOrigin(this);
  getTongueRetractDestination(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::isInRange(BoardEntity const*, PlantWeapon) const */

void __thiscall
PlantFishhookgrass::isInRange(PlantFishhookgrass *this,BoardEntity *param_1,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)getTongueRange(this,param_3);
  iVar1 = BoardEntity::CalcColumnPosition(param_1);
  iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar1 - (float)iVar2,(float)iVar3 - (float)iVar4,0.0);
  fVar6 = (float)DVec3::getLength((DVec3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar6 <= fVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::searchForTarget(PlantWeapon, bool) */

void __thiscall
PlantFishhookgrass::searchForTarget(PlantFishhookgrass *this,undefined4 param_2,byte param_3)

{
  long lVar1;
  float *pfVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar3;
  UnchartedModePlantNumData aUStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  int local_28;
  int local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0401d008(*(undefined8 *)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)(lVar1 + 0x2d8));
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  local_28 = (int)((float)local_28 + *pfVar2);
  local_24 = (int)((float)local_24 + pfVar2[1]);
  if (param_3 == 0) {
    getPlantAttackRect(aIStack_18,this,param_2);
  }
  else {
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
  }
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_38,1,0);
  (**(code **)(*(long *)this + 0xd8))(aRStack_30,this,aIStack_18,param_2,aUStack_38);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (this_00 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    (**(code **)(*(long *)this + 0x100))(aRStack_30,this,aIStack_18,param_2);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  if (param_3 < (this_00 !=
                (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0)) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    if (*pfVar2 < *pfVar3) {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::tryToAcquireTargetForWeapon(PlantWeapon, bool) */

void PlantFishhookgrass::tryToAcquireTargetForWeapon(long param_1)

{
  RtWeakPtrBase *this;
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  long lVar4;
  RtObject *this_00;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtrBase *)(param_1 + 0x118);
  local_8 = ___stack_chk_guard;
  lVar4 = searchForTarget();
  Sexy::RtWeakPtrBase::ClearId(this);
  if (lVar4 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    if (this_01 != (Zombie *)0x0) {
      cVar3 = (**(code **)(*(long *)this_01 + 0x328))();
      if (cVar3 != '\0') {
        uVar2 = 0;
        goto LAB_0401dae8;
      }
      cVar3 = Zombie::IsControlled(this_01);
      if (cVar3 != '\0') {
        uVar2 = 0;
        goto LAB_0401dae8;
      }
    }
  }
  uVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
LAB_0401dae8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantFishhookgrass::isTargetInCorrectRowAndColumn(BoardEntity const*) const */

byte __thiscall
PlantFishhookgrass::isTargetInCorrectRowAndColumn(PlantFishhookgrass *this,BoardEntity *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = FUN_0401d008(*(undefined8 *)(this + 0x10));
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar1 = *(int *)(lVar6 + 0x2d0);
  iVar5 = BoardEntity::CalcColumnPosition(param_1);
  bVar2 = BoardEntity::IsInRow(param_1,iVar3);
  return bVar2 | iVar4 + iVar1 <= iVar5;
}


/* PlantFishhookgrass::swallowZombiesAndProduceSun(int) */

void __thiscall
PlantFishhookgrass::swallowZombiesAndProduceSun(PlantFishhookgrass *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x148);
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  PlantToadstool::produceSun((PlantToadstool *)this,param_1 * iVar1);
  return;
}


/* PlantFishhookgrass::PlantFishhookgrass() */

void __thiscall PlantFishhookgrass::PlantFishhookgrass(PlantFishhookgrass *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_067b67a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  this[0xa8] = (PlantFishhookgrass)0x0;
  this[0xa9] = (PlantFishhookgrass)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x170));
  return;
}


/* PlantFishhookgrass::StaticNew() */

PlantFishhookgrass * PlantFishhookgrass::StaticNew(void)

{
  PlantFishhookgrass *this;
  
  this = ::operator_new(0x1a0);
  PlantFishhookgrass(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::zombieIsBlacklisted(Zombie const*) const */

void __thiscall PlantFishhookgrass::zombieIsBlacklisted(PlantFishhookgrass *this,Zombie *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar6;
  ZombieGargantuar *pZVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0401d008(*(undefined8 *)(this + 0x10));
  uVar4 = FUN_0401c4ec(*(undefined8 *)(lVar3 + 0x2b8));
  uVar5 = FUN_0401c53c(*(undefined8 *)(lVar3 + 0x2c0));
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar4,uVar5,lVar6 + 8);
  local_10 = FUN_0401c53c(*(undefined8 *)(lVar3 + 0x2c0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (((bVar1) ||
      (pZVar7 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1),
      pZVar7 != (ZombieGargantuar *)0x0)) || (iVar2 = Zombie::GetSizeType(param_1), iVar2 == 1)) {
    bVar1 = true;
  }
  else {
    iVar2 = Zombie::GetSizeType(param_1);
    bVar1 = iVar2 == 2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantFishhookgrass::onEnter(FishhookgrassState) */

void __thiscall PlantFishhookgrass::onEnter(PlantFishhookgrass *this,undefined4 param_2)

{
  RtWeakPtr *pRVar1;
  bool bVar2;
  int iVar3;
  PlantAnimRig_Fishhookgrass *this_00;
  long *plVar4;
  RtObject *this_01;
  Zombie *this_02;
  undefined4 uVar5;
  
  this_00 = (PlantAnimRig_Fishhookgrass *)FUN_0401dc94(*(undefined8 *)(this + 0x10));
  switch(param_2) {
  case 0:
    pRVar1 = (RtWeakPtr *)(this + 0xb0);
    *(undefined4 *)(this + 0x168) = 0;
    *(undefined4 *)(this + 0x16c) = 0;
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
    if (bVar2) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      (**(code **)(*plVar4 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
    }
    uVar5 = PVZ_EOT();
    break;
  case 1:
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x164) = uVar5;
    PlantAnimRig_Toadstool::PlayBite((PlantAnimRig_Toadstool *)this_00);
    return;
  case 2:
    Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    iVar3 = FUN_04019a70(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    if (iVar3 == 5) {
      PlantAnimRig_Fishhookgrass::PlayBeginTongueAttack(this_00,true);
      return;
    }
    PlantAnimRig_Fishhookgrass::PlayBeginTongueAttack(this_00,false);
    return;
  case 3:
  case 10:
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x140) = uVar5;
    return;
  case 4:
    iVar3 = FUN_04019a70(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    if (iVar3 == 5) {
      PlantAnimRig_Fishhookgrass::PlayReceiveHook(this_00,true);
    }
    else {
      PlantAnimRig_Fishhookgrass::PlayReceiveHook(this_00,false);
    }
    this[0xa8] = (PlantFishhookgrass)0x1;
    return;
  case 5:
    PlantAnimRig_Toadstool::PlayTongueGrab((PlantAnimRig_Toadstool *)this_00);
    return;
  case 6:
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x140) = uVar5;
    iVar3 = FUN_04019a70(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    if (iVar3 == 5) {
      PlantAnimRig_Fishhookgrass::PlayBeginthrow(this_00,true);
      return;
    }
    PlantAnimRig_Fishhookgrass::PlayBeginthrow(this_00,false);
    return;
  default:
    return;
  case 8:
    pRVar1 = (RtWeakPtr *)(this + 0x118);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
    if (bVar2) {
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      this_02 = Sexy::RtObject::Cast<Zombie>(this_01);
      if (this_02 != (Zombie *)0x0) {
        Zombie::SetIsControlled(this_02,false);
      }
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
    }
    *(undefined4 *)(this + 0x144) = 0;
    *(undefined4 *)(this + 0x148) = 0;
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (this + 0x128));
    uVar5 = PVZ_T();
    break;
  case 9:
    PlantAnimRig_Fishhookgrass::PlayBeginPFTongueAttack(this_00);
    return;
  case 0xb:
    PlantAnimRig_Fishhookgrass::PlayPFReceiveHook(this_00);
    return;
  case 0xc:
    PlantAnimRig_Fishhookgrass::PlayPlantfoodTongueGrab(this_00);
    return;
  case 0xd:
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x140) = uVar5;
    PlantAnimRig_Fishhookgrass::PlayBeginPFthrow(this_00);
    return;
  case 0xf:
    PlantAnimRig_Toadstool::PlayPlantfoodEndSwallowing((PlantAnimRig_Toadstool *)this_00);
    return;
  case 0x10:
    PlantAnimRig_Toadstool::PlayPlantfoodBurp((PlantAnimRig_Toadstool *)this_00);
    return;
  }
  *(undefined4 *)(this + 0x140) = uVar5;
  plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar4 + 0x118))();
  return;
}


/* PlantFishhookgrass::setState(FishhookgrassState) */

void __thiscall PlantFishhookgrass::setState(PlantFishhookgrass *this,int param_2)

{
  PlantAnimRig_HollyKnight *this_00;
  
  this_00 = (PlantAnimRig_HollyKnight *)FUN_0401dc94(*(undefined8 *)(this + 0x10));
  onExit(this,*(undefined4 *)(this + 0x110));
  *(int *)(this + 0x110) = param_2;
  PlantAnimRig_HollyKnight::SetNumDamageStates(this_00,param_2);
  onEnter(this,*(undefined4 *)(this + 0x110));
  return;
}


/* PlantFishhookgrass::ApplyPlantfood() */

void __thiscall PlantFishhookgrass::ApplyPlantfood(PlantFishhookgrass *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = (RtWeakPtr *)(this + 0xb0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  *(undefined4 *)(this + 0x144) = 0;
  Board::SetGridSquareLocked
            (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),true);
  setState(this,8);
  return;
}


/* PlantFishhookgrass::CancelPlantfood() */

void __thiscall PlantFishhookgrass::CancelPlantfood(PlantFishhookgrass *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  Board::SetGridSquareLocked
            (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),false);
  setState(this,0);
  return;
}


/* PlantFishhookgrass::transitionIfTimeIsUp(FishhookgrassState, float) */

void __thiscall
PlantFishhookgrass::transitionIfTimeIsUp(float param_1,PlantFishhookgrass *this,undefined8 param_3)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 - *(float *)(this + 0x140) < param_1) {
    return;
  }
  setState(this,param_3);
  return;
}


/* PlantFishhookgrass::transitionIfCurrentAnimationIsDone(FishhookgrassState) */

void __thiscall
PlantFishhookgrass::transitionIfCurrentAnimationIsDone(PlantFishhookgrass *this,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PlantAnimRig_Toadstool *this_00;
  RtWeakPtr *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  RtObject *this_03;
  Zombie *this_04;
  long lVar4;
  
  this_00 = (PlantAnimRig_Toadstool *)FUN_0401dc94(*(undefined8 *)(this + 0x10));
  iVar3 = FUN_04019ab8(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  if (0 < iVar3) {
    lVar4 = 0;
LAB_04020290:
    do {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
      if (cVar1 != '\0') {
        this_01 = (RtWeakPtr *)FUN_04019ac4(*(undefined8 *)(this + 0x30),lVar4);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
        if (bVar2) {
          this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_04019ac4(*(undefined8 *)(this + 0x30),lVar4);
          this_03 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          this_04 = Sexy::RtObject::Cast<Zombie>(this_03);
          if ((this_04 != (Zombie *)0x0) && (cVar1 = Zombie::IsControlled(this_04), cVar1 != '\0'))
          {
            Zombie::SetIsControlled(this_04,false);
            lVar4 = lVar4 + 1;
            if (iVar3 <= (int)lVar4) break;
            goto LAB_04020290;
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < iVar3);
  }
  cVar1 = PlantAnimRig_Toadstool::CurrentAnimationIsFinished(this_00);
  if (cVar1 == '\0') {
    return;
  }
  setState(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::launchTongue(PlantWeapon) */

void PlantFishhookgrass::launchTongue(PlantFishhookgrass *param_1)

{
  char cVar1;
  undefined8 uVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  Projectile *this;
  SexyVector3 *pSVar5;
  float fVar6;
  Board *pBVar8;
  undefined4 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  float local_48 [2];
  undefined4 local_40 [2];
  RtName aRStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x118));
  if (cVar1 == '\0') {
    setState(param_1);
  }
  else {
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string((string *)local_48,"FishHookGrassDefault");
    Sexy::ToWString((string *)local_48);
    Sexy::RtName::RtName(aRStack_38,(wstring *)local_40);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_50,uVar2,0xc,aRStack_38);
    Sexy::RtName::~RtName(aRStack_38);
    FUN_05476c50((wstring *)local_40);
    std::string::~string((string *)local_48);
    nop();
    local_48[0] = 0.0;
    local_40[0] = 0;
    pPVar3 = (PopAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    std::string::string((string *)aRStack_38,"eyes");
    PopAnimRig::CalcLayerTranslation(pPVar3,(string *)aRStack_38,local_48,(float *)local_40);
    std::string::~string((string *)aRStack_38);
    nop();
    pPVar3 = (PopAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    std::string::string((string *)aRStack_38,"hook-shaped_thing");
    PopAnimRig::SetLayerVisibility(pPVar3,(string *)aRStack_38,false);
    std::string::~string((string *)aRStack_38);
    nop();
    pPVar3 = (PopAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    std::string::string((string *)aRStack_38,"hair");
    PopAnimRig::SetLayerVisibility(pPVar3,(string *)aRStack_38,false);
    std::string::~string((string *)aRStack_38);
    nop();
    pPVar3 = (PopAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    std::string::string((string *)aRStack_38,"wait");
    PopAnimRig::SetLayerVisibility(pPVar3,(string *)aRStack_38,false);
    std::string::~string((string *)aRStack_38);
    nop();
    pPVar3 = (PopAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    std::string::string((string *)aRStack_38,"po");
    PopAnimRig::SetLayerVisibility(pPVar3,(string *)aRStack_38,false);
    std::string::~string((string *)aRStack_38);
    nop();
    lVar4 = *(long *)(param_1 + 0x10);
    uVar7 = *(undefined4 *)(lVar4 + 0x1c);
    fVar6 = (float)FUN_04019c40(*(undefined4 *)(lVar4 + 0x18),uVar7,*(undefined4 *)(lVar4 + 0x20));
    uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
    pBVar8._0_4_ = (Board *)(fVar6 + local_48[0]);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_50);
    this = (Projectile *)
           Board::AddProjectile
                     (pBVar8._0_4_,uVar7,0,uVar2,aRStack_38,*(undefined8 *)(param_1 + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    FUN_04019c34(this + 0x24);
    ProjectileHelpers::RandomizeVelocities(this);
    Projectile::SetShadow(this,false);
    pSVar5 = (SexyVector3 *)Projectile::GetVelocity(this);
    Projectile::SetVelocity(this,pSVar5);
    FUN_04019c28(this + 0xd5);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0xb0),(RtWeakPtrBase *)aRStack_38)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
    FUN_0401a56c(afStack_28,param_1);
    FishHookGrassProjectile::CastHook(0x3da3d70a,uVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::isTargetUnique(BoardEntity const*) const */

void PlantFishhookgrass::isTargetUnique(BoardEntity *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar2 = FUN_0401c58c(*(undefined8 *)(param_1 + 0x128));
  uVar3 = FUN_0401c5dc(*(undefined8 *)(param_1 + 0x130));
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>const*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar2,uVar3,aRStack_20);
  local_10 = FUN_0401c5dc(*(undefined8 *)(param_1 + 0x130));
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::findTargetInAttackRect(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&,
   BoardEntityTypeFlag) */

void PlantFishhookgrass::findTargetInAttackRect
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               PlantFishhookgrass *param_1,undefined8 param_3,undefined4 param_4,int *param_5,
               undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  GridItem *pGVar6;
  Zombie *pZVar7;
  SharkMinion *this;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar8 = -100;
  PlantToadstool::findEntitiesInAttackRect
            ((PlantToadstool *)param_1,avStack_20,param_3,param_4,param_6);
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar10 = 1e+09;
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  if (bVar1) {
    do {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      this = (SharkMinion *)*puVar5;
      if (this != (SharkMinion *)0x0) {
        fVar9 = (float)calculateDistanceToTarget(param_1,this,param_4);
        iVar4 = SharkMinion::getRow(this);
        if (iVar3 == iVar8) {
          bVar1 = fVar9 < fVar10 && iVar4 == iVar3;
        }
        else {
          bVar1 = iVar4 == iVar3 || fVar9 < fVar10;
        }
        if ((((bVar1) && (cVar2 = isInRange(param_1,this,param_4), cVar2 != '\0')) &&
            (cVar2 = isTargetInCorrectRowAndColumn(param_1,(BoardEntity *)this), cVar2 != '\0')) &&
           (cVar2 = isTargetUnique((BoardEntity *)param_1), cVar2 != '\0')) {
          pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)this);
          pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)this);
          if (((pZVar7 != (Zombie *)0x0) &&
              (cVar2 = canZombieBeTargeted(param_1,pZVar7), cVar2 != '\0')) ||
             ((pGVar6 != (GridItem *)0x0 &&
              (cVar2 = (**(code **)(*(long *)pGVar6 + 0x200))(pGVar6), cVar2 != '\0')))) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1_00,
                       (RtWeakPtrBase *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            fVar10 = fVar9;
            iVar8 = iVar4;
            if ((*param_5 == 0) &&
               (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1_00), cVar2 != '\0'))
            break;
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void __thiscall
PlantFishhookgrass::FindTargetZombie
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
          PlantFishhookgrass *this,undefined8 param_1,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  RtObject *this_00;
  Zombie *pZVar3;
  float fVar4;
  float fVar5;
  Ratio aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Ratio::Ratio(aRStack_20);
  findTargetInAttackRect(aRStack_18,this,param_1,param_4,aRStack_20,2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    pZVar3 = Sexy::RtObject::Cast<Zombie>(this_00);
    iVar2 = FUN_04019a70(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    if (iVar2 == 1) {
      fVar5 = 15.0;
    }
    else {
      if (iVar2 != 2) goto LAB_04020c74;
      fVar5 = 13.0;
    }
LAB_04020c78:
    if ((pZVar3 != (Zombie *)0x0) &&
       (fVar4 = (float)PVZ_T(), fVar5 < fVar4 - *(float *)(this + 0x150))) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_04020c9c;
    }
  }
  else {
    iVar2 = FUN_04019a70(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    if (1 < iVar2 - 1U) {
      pZVar3 = (Zombie *)0x0;
LAB_04020c74:
      fVar5 = 11.0;
      goto LAB_04020c78;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
LAB_04020c9c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::FindTargetDamageableGridItem(Sexy::TRect<int>&, PlantWeapon) */

void PlantFishhookgrass::FindTargetDamageableGridItem
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               undefined8 param_1,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  RtObject *this;
  GridItem *pGVar2;
  Ratio aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Ratio::Ratio(aRStack_20);
  findTargetInAttackRect(aRStack_18,param_1,param_3,param_4,aRStack_20,4);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    pGVar2 = Sexy::RtObject::Cast<GridItem>(this);
    if (pGVar2 != (GridItem *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_04020db8;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
LAB_04020db8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* PlantFishhookgrass::~PlantFishhookgrass() */

void __thiscall PlantFishhookgrass::~PlantFishhookgrass(PlantFishhookgrass *this)

{
  *(undefined ***)this = &PTR_GetClass_067b67a0;
  std::
  map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
  ::~map((map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
          *)(this + 0x170));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x128));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  std::
  vector<Sexy::RtWeakPtr<FishHookGrassProjectile>,std::allocator<Sexy::RtWeakPtr<FishHookGrassProjectile>>>
  ::~vector((vector<Sexy::RtWeakPtr<FishHookGrassProjectile>,std::allocator<Sexy::RtWeakPtr<FishHookGrassProjectile>>>
             *)(this + 0xf8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x90));
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)(this + 0x78));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x60));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x48));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantFishhookgrass::~PlantFishhookgrass() */

void __thiscall PlantFishhookgrass::~PlantFishhookgrass(PlantFishhookgrass *this)

{
  ~PlantFishhookgrass(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::tryToAcquireAllTarget() */

void __thiscall PlantFishhookgrass::tryToAcquireAllTarget(PlantFishhookgrass *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  RtWeakPtrBase *pRVar5;
  Zombie *this_00;
  long lVar6;
  bool bVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  (**(code **)(*(long *)this + 0xd0))(avStack_20,this,2);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::operator=
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_38,(vector *)avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            (avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x48));
  uVar4 = local_38;
  iVar2 = FUN_04019ab8(local_38,local_30);
  if (iVar2 < 1) {
LAB_040220c0:
    bVar7 = true;
    if (*(int *)(this + 0x15c) < 1) {
      bVar7 = 0 < *(int *)(this + 0x160);
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_38);
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar7);
    }
    return;
  }
  lVar8 = 0;
  do {
    pRVar5 = (RtWeakPtrBase *)FUN_04019ac4(uVar4,lVar8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)avStack_20,pRVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
    nop();
    fVar9 = (float)FUN_04019c40(*(undefined4 *)(this_00 + 0x18),*(undefined4 *)(this_00 + 0x1c),
                                *(undefined4 *)(this_00 + 0x20));
    lVar6 = *(long *)(this + 0x10);
    fVar10 = (float)FUN_04019c40(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                                 *(undefined4 *)(lVar6 + 0x20));
    if ((((fVar9 <= fVar10) ||
         (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0')) ||
        (cVar1 = Zombie::IsControlled(this_00), cVar1 != '\0')) ||
       (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0')) {
LAB_04021fb8:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
      uVar4 = local_38;
    }
    else {
      iVar3 = Zombie::GetSizeType(this_00);
      if (iVar3 == 2) {
        *(int *)(this + 0x15c) = *(int *)(this + 0x15c) + 1;
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)(this + 0x48),(RtWeakPtr *)avStack_20);
        goto LAB_04021fb8;
      }
      iVar3 = Zombie::GetSizeType(this_00);
      if ((iVar3 != 0) && (iVar3 = Zombie::GetSizeType(this_00), iVar3 != 1)) goto LAB_04021fb8;
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0x30),(RtWeakPtr *)avStack_20);
      *(int *)(this + 0x160) = *(int *)(this + 0x160) + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
      uVar4 = local_38;
    }
    if (iVar2 <= (int)lVar8 + 1) goto LAB_040220c0;
    lVar8 = lVar8 + 1;
    local_38 = uVar4;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::Initialize() */

void __thiscall PlantFishhookgrass::Initialize(PlantFishhookgrass *this)

{
  map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
  *this_00;
  char cVar1;
  RtWeakPtr<PowerPropertySheet> *pRVar2;
  undefined4 uVar3;
  int local_c;
  long local_8;
  
  this_00 = (map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
             *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  Board::MakeRenderOrder(0x64960,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1,0);
  *(undefined4 *)(this + 0x110) = 0;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x140) = uVar3;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  uVar3 = 8;
  if (cVar1 == '\0') {
    uVar3 = 5;
  }
  *(undefined4 *)(this + 0x158) = uVar3;
  FUN_0401d008(*(undefined8 *)(this + 0x10));
  local_c = 0;
  pRVar2 = (RtWeakPtr<PowerPropertySheet> *)
           std::
           map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
           ::operator[](this_00,&local_c);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar2,(RtWeakPtr *)(this + 0xb8));
  local_c = 1;
  pRVar2 = (RtWeakPtr<PowerPropertySheet> *)
           std::
           map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
           ::operator[](this_00,&local_c);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar2,(RtWeakPtr *)(this + 0xc0));
  local_c = 2;
  pRVar2 = (RtWeakPtr<PowerPropertySheet> *)
           std::
           map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
           ::operator[](this_00,&local_c);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar2,(RtWeakPtr *)(this + 200));
  local_c = 3;
  pRVar2 = (RtWeakPtr<PowerPropertySheet> *)
           std::
           map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
           ::operator[](this_00,&local_c);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar2,(RtWeakPtr *)(this + 0xd0));
  local_c = 4;
  pRVar2 = (RtWeakPtr<PowerPropertySheet> *)
           std::
           map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
           ::operator[](this_00,&local_c);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar2,(RtWeakPtr *)(this + 0xd8));
  local_c = 5;
  pRVar2 = (RtWeakPtr<PowerPropertySheet> *)
           std::
           map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
           ::operator[](this_00,&local_c);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar2,(RtWeakPtr *)(this + 0xe0));
  local_c = 6;
  pRVar2 = (RtWeakPtr<PowerPropertySheet> *)
           std::
           map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
           ::operator[](this_00,&local_c);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar2,(RtWeakPtr *)(this + 0xe8));
  local_c = 7;
  pRVar2 = (RtWeakPtr<PowerPropertySheet> *)
           std::
           map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
           ::operator[](this_00,&local_c);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar2,(RtWeakPtr *)(this + 0xf0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::onUpdate(FishhookgrassState) */

void __thiscall
PlantFishhookgrass::onUpdate(PlantFishhookgrass *this,undefined4 param_2,size_t param_3)

{
  map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
  *pmVar1;
  RtWeakPtr<SpartanBambooMatrixSystem> *pRVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  RtWeakPtr *this_00;
  RtWeakPtrBase *this_01;
  RtObject *this_02;
  FishhookgrassProps *pFVar7;
  RtMixedPtrBase *pRVar8;
  PopAnimRig *pPVar9;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar10;
  FishHookGrassProjectile *pFVar11;
  long *plVar12;
  Insets *pIVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  int local_48 [2];
  float local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    cVar3 = tryToAcquireTargetForWeapon(this,0,0);
    if (cVar3 != '\0') {
      setState(this,2);
    }
    break;
  case 1:
    cVar3 = tryToAcquireTargetForWeapon(this,0,1);
    if (cVar3 == '\0') {
      *(undefined4 *)(this + 0x164) = 0;
      setState(this);
    }
    else {
      fVar16 = (float)PVZ_T();
      fVar17 = *(float *)(this + 0x164);
      lVar15 = FUN_0401d008(*(undefined8 *)(this + 0x10));
      if (fVar17 + *(float *)(lVar15 + 0x2d4) < fVar16) {
        setState(this,1);
      }
    }
    break;
  case 3:
    transitionIfTimeIsUp((PlantFishhookgrass *)0x3f19999a,this,4);
    break;
  case 4:
    if (this[0xa8] != (PlantFishhookgrass)0x0) {
      pRVar8 = (RtMixedPtrBase *)(this + 0xb0);
      this[0xa8] = (PlantFishhookgrass)0x0;
      cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar8);
      if (cVar3 != '\0') {
        Set8BytesTo0((string *)local_48);
        iVar5 = FUN_04019a70(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
        if (iVar5 == 5) {
          std::string::append((string *)local_48,"attack_l_lv5",param_3);
        }
        else {
          std::string::append((string *)local_48,"attack_l",param_3);
        }
        pPVar9 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        fVar16 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar9,(string *)local_48);
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_40);
        pPVar9 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        PopAnimRig::CalcLayerTranslation(pPVar9,(string *)local_48,(SexyVector2 *)&local_40);
        local_3c = 0;
        iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
        local_40 = local_40 - (float)(iVar5 / 2);
        iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
        local_40 = local_40 + (float)iVar5 * 2.5;
        iVar5 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
        if (iVar5 == 0) {
          iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
          local_40 = local_40 + (float)iVar5;
        }
        lVar15 = *(long *)(this + 0x10);
        uVar18 = *(undefined4 *)(lVar15 + 0x1c);
        local_38 = FUN_04019c40(*(undefined4 *)(lVar15 + 0x18),uVar18,*(undefined4 *)(lVar15 + 0x20)
                               );
        local_34 = uVar18;
        Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_40,(TPoint *)&local_38);
        pFVar11 = (FishHookGrassProjectile *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar8);
        lVar15 = FishHookGrassProjectile::GetHookedZombie(pFVar11);
        if (lVar15 != 0) {
          pRVar2 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x118);
          pFVar11 = (FishHookGrassProjectile *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar8);
          FishHookGrassProjectile::GetHookedZombie(pFVar11);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar2,(RtWeakPtrBase *)&local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
          plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
          pIVar13 = (Insets *)(**(code **)(*plVar12 + 0x178))();
          Sexy::Insets::Insets((Insets *)&local_38,pIVar13);
          lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2)
          ;
          fVar17 = (float)FUN_04019c40(*(undefined4 *)(lVar15 + 0x18),*(undefined4 *)(lVar15 + 0x1c)
                                       ,*(undefined4 *)(lVar15 + 0x20));
          fVar19 = (float)local_38;
          iVar5 = FUN_0401a680(0x19);
          if ((float)iVar5 < fVar17 - fVar19) {
            iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
            local_40 = local_40 + (float)(iVar5 / 2);
          }
        }
        uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar8);
        FUN_0401a4b4(afStack_28,this);
        FishHookGrassProjectile::ReelHook
                  (0x3d4ccccd,fVar16 * 0.2,local_40,local_3c,uVar14,afStack_28);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
        std::string::~string((string *)local_48);
      }
    }
    if ((*(float *)(this + 0x16c) == 0.0) ||
       (fVar16 = (float)PVZ_T(), fVar16 - *(float *)(this + 0x16c) <= 3.0)) break;
    pRVar8 = (RtMixedPtrBase *)(this + 0xb0);
    *(undefined4 *)(this + 0x16c) = 0;
    cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar8);
    if ((cVar3 != '\0') &&
       (bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)pRVar8), bVar4)) {
      plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar8);
      (**(code **)(*plVar12 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar8);
    }
    goto LAB_04022990;
  case 5:
    transitionIfCurrentAnimationIsDone(this,6);
    break;
  case 6:
  case 7:
  case 0x10:
    goto LAB_04022944;
  case 8:
    lVar15 = FUN_0401d008(*(undefined8 *)(this + 0x10));
    fVar16 = (float)PVZ_T();
    fVar17 = *(float *)(this + 0x140);
    cVar3 = tryToAcquireAllTarget(this);
    if (cVar3 != '\0') {
      setState(this,9);
      break;
    }
    if (fVar16 - fVar17 < *(float *)(lVar15 + 0x3c8)) break;
    goto LAB_04022990;
  case 9:
    if ((*(float *)(this + 0x168) == 0.0) ||
       (fVar16 = (float)PVZ_T(), fVar16 - *(float *)(this + 0x168) <= 3.0)) break;
    pmVar1 = (map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
              *)(this + 0x170);
    iVar5 = std::
            map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
            ::size(pmVar1);
    *(undefined4 *)(this + 0x168) = 0;
    if (0 < iVar5) {
      local_38 = 0;
      do {
        pRVar8 = (RtMixedPtrBase *)
                 std::
                 map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                 ::operator[](pmVar1,&local_38);
        cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar8);
        if (cVar3 != '\0') {
          this_00 = (RtWeakPtr *)
                    std::
                    map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                    ::operator[](pmVar1,&local_38);
          bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
          if (bVar4) {
            pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::
                      map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                      ::operator[](pmVar1,&local_38);
            plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
            (**(code **)(*plVar12 + 0x48))();
            this_01 = (RtWeakPtrBase *)
                      std::
                      map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                      ::operator[](pmVar1,&local_38);
            Sexy::RtWeakPtrBase::ClearId(this_01);
          }
        }
        local_38 = local_38 + 1;
      } while (local_38 < iVar5);
    }
LAB_04022990:
    setState(this,0);
    break;
  case 10:
    FUN_04019a78((RtWeakPtr<Sexy::ResourceInfo> *)&local_38,*(undefined8 *)(this + 0x10));
    this_02 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    pFVar7 = Sexy::RtObject::Cast<FishhookgrassProps_const>(this_02);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
                    /* WARNING: Load size is inaccurate */
    transitionIfTimeIsUp(*(PlantFishhookgrass **)(pFVar7 + 0x3dc),this,0xb);
    break;
  case 0xb:
    if (this[0xa9] != (PlantFishhookgrass)0x0) {
      this[0xa9] = (PlantFishhookgrass)0x0;
      iVar5 = FUN_04019ab8(*(undefined8 *)(this + 0x60),*(undefined8 *)(this + 0x68));
      if (0 < iVar5) {
        pmVar1 = (map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                  *)(this + 0x170);
        local_48[0] = 0;
        do {
          pRVar8 = (RtMixedPtrBase *)
                   std::
                   map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                   ::operator[](pmVar1,local_48);
          cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar8);
          if (cVar3 != '\0') {
            pPVar9 = (PopAnimRig *)
                     UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
            std::string::string((string *)&local_38,"plantfood_l");
            fVar16 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar9,(string *)&local_38);
            std::string::~string((string *)&local_38);
            nop();
            ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                      ((ResistenceValueInfo *)&local_40);
            pPVar9 = (PopAnimRig *)
                     UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
            std::string::string((string *)&local_38,"po");
            PopAnimRig::CalcLayerTranslation(pPVar9,(string *)&local_38,(SexyVector2 *)&local_40);
            std::string::~string((string *)&local_38);
            nop();
            local_3c = 0;
            iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
            lVar15 = *(long *)(this + 0x10);
            local_40 = local_40 + (float)(iVar6 / 2);
            uVar18 = *(undefined4 *)(lVar15 + 0x1c);
            local_38 = FUN_04019c40(*(undefined4 *)(lVar15 + 0x18),uVar18,
                                    *(undefined4 *)(lVar15 + 0x20));
            local_34 = uVar18;
            Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_40,(TPoint *)&local_38);
            pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::
                      map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                      ::operator[](pmVar1,local_48);
            pFVar11 = (FishHookGrassProjectile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
            lVar15 = FishHookGrassProjectile::GetHookedZombie(pFVar11);
            if (lVar15 != 0) {
              pRVar2 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x118);
              pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        std::
                        map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                        ::operator[](pmVar1,local_48);
              pFVar11 = (FishHookGrassProjectile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10)
              ;
              FishHookGrassProjectile::GetHookedZombie(pFVar11);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        (pRVar2,(RtWeakPtrBase *)&local_38);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
              plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                          ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
              pIVar13 = (Insets *)(**(code **)(*plVar12 + 0x178))();
              Sexy::Insets::Insets((Insets *)&local_38,pIVar13);
              lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
              fVar17 = (float)FUN_04019c40(*(undefined4 *)(lVar15 + 0x18),
                                           *(undefined4 *)(lVar15 + 0x1c),
                                           *(undefined4 *)(lVar15 + 0x20));
              fVar19 = (float)local_38;
              iVar6 = FUN_0401a680(0x19);
              if ((float)iVar6 < fVar19 + fVar17) {
                iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
                local_40 = local_40 + (float)(iVar6 / 2);
              }
            }
            pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::
                      map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                      ::operator[](pmVar1,local_48);
            uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
            FUN_0401a510(afStack_28,this);
            FishHookGrassProjectile::ReelHook
                      (0x3d4ccccd,fVar16 * 0.2,local_40,local_3c,uVar14,afStack_28);
            std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
          }
          local_48[0] = local_48[0] + 1;
        } while (local_48[0] < iVar5);
      }
    }
    break;
  case 0xd:
  case 0xe:
    transitionIfCurrentAnimationIsDone(this,0xf);
    break;
  case 0xf:
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar3 != '\0') {
      transitionIfCurrentAnimationIsDone(this,0x10);
      break;
    }
LAB_04022944:
    transitionIfCurrentAnimationIsDone(this,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFishhookgrass::UpdateActions() */

void __thiscall PlantFishhookgrass::UpdateActions(PlantFishhookgrass *this)

{
  onUpdate(this,*(undefined4 *)(this + 0x110));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::Draw(Sexy::Graphics*) */

void __thiscall PlantFishhookgrass::Draw(PlantFishhookgrass *this,Graphics *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  RtMixedPtrBase *this_00;
  PopAnimRig *pPVar6;
  long lVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var8;
  SexyVector3 *pSVar9;
  Graphics3D *pGVar10;
  Image *pIVar11;
  SalesProgressBar *pSVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_7c;
  GraphicsAutoState aGStack_78 [8];
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  Insets aIStack_40 [16];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  uVar2 = *(uint *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  if (uVar2 - 2 < 3) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xb0));
    if (cVar1 == '\0') {
      uVar2 = *(uint *)(this + 0x110);
    }
    else {
      Sexy::Insets::Insets(aIStack_40);
      pPVar6 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)&local_50,"po");
      PopAnimRig::CalcSymbolRect(pPVar6,(string *)&local_50,(TRect *)aIStack_40);
      std::string::~string((string *)&local_50);
      nop();
      lVar7 = *(long *)(this + 0x10);
      fVar17 = *(float *)(lVar7 + 0x1c);
      fVar13 = (float)FUN_04019c40(*(undefined4 *)(lVar7 + 0x18),fVar17,
                                   *(undefined4 *)(lVar7 + 0x20));
      Sexy::TRect<int>::GetCenter();
      iVar4 = FUN_0401a6a4(local_60);
      FUN_04019a78((string *)&local_50,*(undefined8 *)(this + 0x10));
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      fVar14 = *(float *)(lVar7 + 0x9c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      Sexy::TRect<int>::GetCenter();
      iVar3 = FUN_0401a6a4(local_5c);
      FUN_04019a78((string *)&local_50,*(undefined8 *)(this + 0x10));
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      fVar18 = *(float *)(lVar7 + 0xa0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)&local_70,(float)(int)((fVar13 - fVar14) + (float)iVar4),
                 (float)(int)((fVar17 - fVar18) + (float)iVar3),0.0);
      p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
      pSVar9 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var8);
      fVar13 = -30.0;
      fVar14 = 0.0;
      EATextSquish::Vec3::Vec3((Vec3 *)&local_50,0.0,-30.0,0.0);
      local_60 = (float)Sexy::SexyVector3::operator+(pSVar9,(SexyVector3 *)&local_50);
      local_5c = fVar13;
      local_58 = fVar14;
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,param_1);
      local_50 = (float)Sexy::SexyVector3::operator-
                                  ((SexyVector3 *)&local_70,(SexyVector3 *)&local_60);
      local_4c = fVar13;
      local_48 = fVar14;
      dVar16 = atan2((double)-fVar13,(double)local_50);
      uVar15 = DVec3::getLength((DVec3 *)&local_50);
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyTransform2D::RotateRad(aSStack_30,(float)dVar16);
      fVar13 = (float)FUN_0401a694(local_60);
      fVar17 = *(float *)(param_1 + 0x10);
      fVar14 = (float)FUN_0401a694(local_5c);
      FUN_040199c8(fVar13 + fVar17,fVar14 + *(float *)(param_1 + 0x14),auStack_28,auStack_1c);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      pGVar10 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
      Sexy::Graphics3D::PushTransform(pGVar10,(SexyMatrix3 *)aSStack_30,true);
      pIVar11 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                   ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae8138);
      fVar13 = (float)FUN_0401a694(uVar15);
      pSVar12 = (SalesProgressBar *)
                CachedResourcePtr<Sexy::Image>::operator->
                          ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae8138);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
      Sexy::Graphics::DrawImage(param_1,pIVar11,0,0,(int)fVar13,iVar4);
      pGVar10 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
      Sexy::Graphics3D::PopTransform(pGVar10);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
      uVar2 = *(uint *)(this + 0x110);
    }
  }
  if ((uVar2 & 0xfffffffd) == 9) {
    iVar3 = FUN_04019ab8(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
    iVar4 = FUN_04019ab8(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50));
    iVar4 = iVar4 + iVar3;
    if (0 < iVar4) {
      local_7c = 0;
      do {
        while( true ) {
          this_00 = (RtMixedPtrBase *)
                    std::
                    map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                    ::operator[]((map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                                  *)(this + 0x170),&local_7c);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
          if (cVar1 == '\0') break;
          Sexy::Insets::Insets(aIStack_40);
          pPVar6 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          std::string::string((string *)&local_50,"po");
          PopAnimRig::CalcSymbolRect(pPVar6,(string *)&local_50,(TRect *)aIStack_40);
          std::string::~string((string *)&local_50);
          nop();
          lVar7 = *(long *)(this + 0x10);
          fVar17 = *(float *)(lVar7 + 0x1c);
          fVar13 = (float)FUN_04019c40(*(undefined4 *)(lVar7 + 0x18),fVar17,
                                       *(undefined4 *)(lVar7 + 0x20));
          Sexy::TRect<int>::GetCenter();
          iVar3 = FUN_0401a6a4(local_60);
          FUN_04019a78((string *)&local_50,*(undefined8 *)(this + 0x10));
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
          fVar14 = *(float *)(lVar7 + 0x9c);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
          Sexy::TRect<int>::GetCenter();
          iVar5 = FUN_0401a6a4(local_5c);
          FUN_04019a78((string *)&local_50,*(undefined8 *)(this + 0x10));
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
          fVar18 = *(float *)(lVar7 + 0xa0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)&local_70,(float)(int)((fVar13 - fVar14) + (float)iVar3),
                     (float)(int)((fVar17 - fVar18) + (float)iVar5),0.0);
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::
                    map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                    ::operator[]((map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                                  *)(this + 0x170),&local_7c);
          p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          pSVar9 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(p_Var8);
          fVar14 = -30.0;
          fVar17 = 0.0;
          EATextSquish::Vec3::Vec3((Vec3 *)&local_50,0.0,-30.0,0.0);
          fVar13 = (float)Sexy::SexyVector3::operator+(pSVar9,(SexyVector3 *)&local_50);
          fVar18 = fVar14 - local_6c;
          fVar21 = fVar18 / (fVar13 - local_70);
          if (fVar21 <= 1.4) {
            if (fVar21 <= 1.0) {
              local_5c = fVar14;
              if ((0.6 < fVar21) || (0.3 < fVar21)) {
                fVar20 = 4.172325e-08;
                fVar19 = 10.0;
                local_60 = fVar13 + 10.0;
              }
              else {
                fVar20 = 4.172325e-08;
                if (fVar21 <= -0.3) {
                  fVar20 = 4.172325e-08;
                  if (fVar21 <= -0.6) {
                    if (fVar21 <= -1.0) {
                      fVar20 = -3.0;
                      fVar19 = fVar14;
                      local_60 = fVar13;
                      if (-3.0 < fVar21) {
                        local_60 = fVar13 - 20.0;
                        fVar20 = 10.0;
                        fVar19 = fVar14 + 10.0;
                        local_5c = fVar19;
                      }
                    }
                    else {
                      fVar20 = 15.0;
                      fVar19 = fVar14 + 15.0;
                      local_60 = fVar13 - 20.0;
                      local_5c = fVar14 + 15.0;
                    }
                  }
                  else {
                    fVar19 = fVar13 + 10.0;
                    local_60 = fVar19;
                    if ((fVar18 < 0.0) && (0.0 < fVar19 - local_70)) {
                      fVar19 = 15.0;
                      local_60 = fVar13 - 15.0;
                    }
                  }
                }
                else {
                  fVar19 = 10.0;
                  local_60 = fVar13 - 10.0;
                }
              }
            }
            else {
              fVar20 = 15.0;
              fVar19 = fVar14 + 15.0;
              local_60 = fVar13 + 20.0;
              local_5c = fVar14 + 15.0;
            }
          }
          else {
            if ((0.0 < fVar18) && (0.0 < fVar13 - local_70)) {
              fVar13 = fVar13 + 15.0;
            }
            fVar20 = fVar13 + 15.0;
            fVar19 = fVar14 + 17.0;
            local_60 = fVar20;
            local_5c = fVar14 + 17.0;
          }
          local_58 = fVar17;
          Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,param_1);
          local_50 = (float)Sexy::SexyVector3::operator-
                                      ((SexyVector3 *)&local_70,(SexyVector3 *)&local_60);
          local_4c = fVar19;
          local_48 = fVar20;
          dVar16 = atan2((double)-fVar19,(double)local_50);
          uVar15 = DVec3::getLength((DVec3 *)&local_50);
          Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
          Sexy::SexyTransform2D::RotateRad(aSStack_30,(float)dVar16);
          fVar13 = (float)FUN_0401a694(local_60);
          fVar17 = *(float *)(param_1 + 0x10);
          fVar14 = (float)FUN_0401a694(local_5c);
          FUN_040199c8(fVar13 + fVar17,fVar14 + *(float *)(param_1 + 0x14),auStack_28,auStack_1c);
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
          pGVar10 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
          Sexy::Graphics3D::PushTransform(pGVar10,(SexyMatrix3 *)aSStack_30,true);
          pIVar11 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae8138);
          fVar13 = (float)FUN_0401a694(uVar15);
          pSVar12 = (SalesProgressBar *)
                    CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae8138);
          iVar3 = SalesProgressBar::GetCurrentLevel(pSVar12);
          Sexy::Graphics::DrawImage(param_1,pIVar11,0,0,(int)fVar13,iVar3);
          pGVar10 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
          Sexy::Graphics3D::PopTransform(pGVar10);
          Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
          local_7c = local_7c + 1;
          if (iVar4 <= local_7c) goto LAB_04023438;
        }
        local_7c = local_7c + 1;
      } while (local_7c < iVar4);
    }
  }
LAB_04023438:
  PlantFramework::Draw((Graphics *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::onDestroy() */

void __thiscall PlantFishhookgrass::onDestroy(PlantFishhookgrass *this)

{
  map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  RtMixedPtrBase *this_01;
  RtWeakPtr *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long *plVar5;
  RtWeakPtrBase *this_03;
  RtObject *this_04;
  Zombie *this_05;
  int local_c;
  long local_8;
  
  this_00 = (map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
             *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  iVar3 = std::
          map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
          ::size(this_00);
  if (0 < iVar3) {
    local_c = 0;
LAB_040238b8:
    do {
      this_01 = (RtMixedPtrBase *)
                std::
                map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                ::operator[](this_00,&local_c);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
      if (cVar1 != '\0') {
        pRVar4 = (RtWeakPtr *)
                 std::
                 map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                 ::operator[](this_00,&local_c);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar4);
        if (bVar2) {
          this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::
                    map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                    ::operator[](this_00,&local_c);
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          (**(code **)(*plVar5 + 0x48))();
          this_03 = (RtWeakPtrBase *)
                    std::
                    map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                    ::operator[](this_00,&local_c);
          Sexy::RtWeakPtrBase::ClearId(this_03);
          local_c = local_c + 1;
          if (iVar3 <= local_c) break;
          goto LAB_040238b8;
        }
      }
      local_c = local_c + 1;
    } while (local_c < iVar3);
  }
  pRVar4 = (RtWeakPtr *)(this + 0xb0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar4);
  if (bVar2) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar4);
    (**(code **)(*plVar5 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar4);
  }
  PlantFramework::onDestroy((PlantFramework *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  if (cVar1 != '\0') {
    this_04 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
    this_05 = Sexy::RtObject::Cast<Zombie>(this_04);
    if (this_05 != (Zombie *)0x0) {
      Zombie::EndCondition(this_05,2);
      Zombie::EndCondition(this_05,0x18);
      cVar1 = Zombie::IsControlled(this_05);
      if (cVar1 != '\0') {
        Zombie::SetIsControlled(this_05,false);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::onHookReachedTarget() */

void __thiscall PlantFishhookgrass::onHookReachedTarget(PlantFishhookgrass *this)

{
  char cVar1;
  int iVar2;
  RtMixedPtrBase *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  FishHookGrassProjectile *pFVar5;
  int iVar6;
  int local_10 [2];
  long local_8;
  
  iVar2 = *(int *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  if (iVar2 == 2) {
    pRVar3 = (RtMixedPtrBase *)(this + 0xb0);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar3);
    if (cVar1 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar3);
      cVar1 = FUN_04019aa4(*(undefined4 *)(lVar4 + 0x1b8));
      if (cVar1 == '\0') {
        pFVar5 = (FishHookGrassProjectile *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar3);
        lVar4 = FishHookGrassProjectile::GetHookedZombie(pFVar5);
        if (lVar4 != 0) {
          pFVar5 = (FishHookGrassProjectile *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar3)
          ;
          FishHookGrassProjectile::GetHookedZombie(pFVar5);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x118),
                     (RtWeakPtrBase *)local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10)
          ;
        }
      }
      setState(this,4);
    }
    iVar2 = *(int *)(this + 0x110);
  }
  if (iVar2 == 9) {
    iVar2 = FUN_04019ab8(*(undefined8 *)(this + 0x60),*(undefined8 *)(this + 0x68));
    if (iVar2 < 1) {
      if (iVar2 != 0) goto LAB_04023a2c;
    }
    else {
      iVar6 = 0;
      local_10[0] = 0;
      do {
        while( true ) {
          pRVar3 = (RtMixedPtrBase *)
                   std::
                   map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                   ::operator[]((map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                                 *)(this + 0x170),local_10);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar3);
          if (cVar1 == '\0') break;
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::
                    map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                    ::operator[]((map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                                  *)(this + 0x170),local_10);
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          local_10[0] = local_10[0] + 1;
          if (*(char *)(lVar4 + 0x1a6) != '\0') {
            iVar6 = iVar6 + 1;
          }
          if (iVar2 <= local_10[0]) goto LAB_04023ae4;
        }
        local_10[0] = local_10[0] + 1;
      } while (local_10[0] < iVar2);
LAB_04023ae4:
      if (iVar2 != iVar6) goto LAB_04023a2c;
    }
    this[0xa9] = (PlantFishhookgrass)0x1;
    setState(this,0xb);
  }
LAB_04023a2c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::launchTongueAll(PlantWeapon) */

void PlantFishhookgrass::launchTongueAll(long *param_1)

{
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this;
  map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
  *pmVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RtWeakPtrBase *pRVar7;
  Zombie *this_00;
  undefined8 uVar8;
  PopAnimRig *pPVar9;
  long lVar10;
  Projectile *pPVar11;
  SexyVector3 *pSVar12;
  SexyTransform2D *pSVar13;
  RtWeakPtr<SpartanBambooMatrixSystem> *pRVar14;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar15;
  long extraout_x0;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  Board *pBVar26;
  float local_88 [2];
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  RtWeakPtrBase aRStack_78 [8];
  float local_70 [2];
  float local_68 [2];
  float local_60 [4];
  function<bool(Sexy::Touch_const&)> afStack_50 [72];
  long local_8;
  
  this = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
         (param_1 + 0xc);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 5) = 0;
  iVar4 = FUN_04019ab8(param_1[6],param_1[7]);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            (this);
  iVar5 = FUN_04019ab8(param_1[9],param_1[10]);
  if (0 < iVar4) {
    local_88[0] = 0.0;
    do {
      pRVar7 = (RtWeakPtrBase *)FUN_04019ac4(param_1[6],(long)(int)local_88[0]);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,pRVar7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      nop();
      if (((int)param_1[5] < (int)param_1[0x2b]) && (this_00 != (Zombie *)0x0)) {
        cVar2 = (**(code **)(*(long *)this_00 + 0x328))();
        if (cVar2 == '\0') {
          uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
          std::string::string((string *)local_70,"FishHookGrassDefault");
          Sexy::ToWString((string *)local_70);
          Sexy::RtName::RtName((RtName *)local_60,(wstring *)local_68);
          PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_78,uVar8,0xc,(RtName *)local_60);
          Sexy::RtName::~RtName((RtName *)local_60);
          FUN_05476c50((wstring *)local_68);
          std::string::~string((string *)local_70);
          nop();
          local_70[0] = 0.0;
          local_68[0] = 0.0;
          pPVar9 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
          std::string::string((string *)local_60,"eyes");
          PopAnimRig::CalcLayerTranslation(pPVar9,(string *)local_60,local_70,local_68);
          std::string::~string((string *)local_60);
          nop();
          pPVar9 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
          std::string::string((string *)local_60,"stone");
          PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_60,false);
          std::string::~string((string *)local_60);
          nop();
          pPVar9 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
          std::string::string((string *)local_60,"hook-shaped_thing");
          PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_60,false);
          std::string::~string((string *)local_60);
          nop();
          pPVar9 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
          std::string::string((string *)local_60,"hair");
          PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_60,false);
          std::string::~string((string *)local_60);
          nop();
          pPVar9 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
          std::string::string((string *)local_60,"wait");
          PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_60,false);
          std::string::~string((string *)local_60);
          nop();
          pPVar9 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
          std::string::string((string *)local_60,"po");
          PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_60,false);
          std::string::~string((string *)local_60);
          nop();
          lVar10 = param_1[2];
          fVar21 = *(float *)(lVar10 + 0x1c);
          fVar17 = (float)FUN_04019c40(*(undefined4 *)(lVar10 + 0x18),fVar21,
                                       *(undefined4 *)(lVar10 + 0x20));
          cVar2 = Zombie::IsInWater(this_00);
          if (cVar2 == '\0') {
            fVar23 = *(float *)(this_00 + 0x1c);
            FUN_04019c40(*(undefined4 *)(this_00 + 0x18),fVar23,*(undefined4 *)(this_00 + 0x20));
            lVar10 = param_1[2];
            fVar22 = *(float *)(lVar10 + 0x1c);
            FUN_04019c40(*(undefined4 *)(lVar10 + 0x18),fVar22,*(undefined4 *)(lVar10 + 0x20));
            uVar18 = *(undefined4 *)(this_00 + 0x18);
            fVar23 = fVar23 - fVar22;
          }
          else {
            fVar22 = *(float *)(this_00 + 0x1c);
            FUN_04019c40(*(undefined4 *)(this_00 + 0x18),fVar22,*(undefined4 *)(this_00 + 0x20));
            iVar6 = FUN_0401a680(0x1d);
            lVar10 = param_1[2];
            fVar23 = *(float *)(lVar10 + 0x1c);
            FUN_04019c40(*(undefined4 *)(lVar10 + 0x18),fVar23,*(undefined4 *)(lVar10 + 0x20));
            uVar18 = *(undefined4 *)(this_00 + 0x18);
            fVar23 = (fVar22 - (float)iVar6) - fVar23;
          }
          fVar22 = (float)FUN_04019c40(uVar18,*(undefined4 *)(this_00 + 0x1c),
                                       *(undefined4 *)(this_00 + 0x20));
          lVar10 = param_1[2];
          fVar19 = (float)FUN_04019c40(*(undefined4 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0x1c)
                                       ,*(undefined4 *)(lVar10 + 0x20));
          dVar20 = atan2((double)fVar23,(double)(fVar22 - fVar19));
          pmVar1 = (map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                    *)(param_1 + 0x2e);
          pBVar26._0_4_ = (Board *)(fVar17 + local_70[0]);
          fVar21 = fVar21 + local_68[0];
          uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_60,aRStack_78);
          pPVar11 = (Projectile *)
                    Board::AddProjectile
                              (pBVar26._0_4_,fVar21,0,uVar8,(RtName *)local_60,param_1[2],0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60)
          ;
          FUN_04019c34(pPVar11 + 0x24);
          ProjectileHelpers::RandomizeVelocities(pPVar11);
          Projectile::SetShadow(pPVar11,false);
          pSVar12 = (SexyVector3 *)Projectile::GetVelocity(pPVar11);
          Projectile::SetVelocity(pPVar11,pSVar12);
          FUN_04019c28(pPVar11 + 0xd5);
          FUN_04019a68(-(float)dVar20,pPVar11 + 0xc4);
          pSVar13 = (SexyTransform2D *)
                    DangerRoomManager::SetMaxLevel((DangerRoomManager *)pPVar11,7);
          Sexy::SexyTransform2D::CreateRotation(pSVar13,-(float)dVar20);
          Projectile::ApplyRotationToVelocity((SexyTransform2D *)pPVar11);
          pRVar14 = (RtWeakPtr<SpartanBambooMatrixSystem> *)
                    std::
                    map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                    ::operator[](pmVar1,(int *)local_88);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar14,(RtWeakPtrBase *)local_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60)
          ;
          pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::
                    map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                    ::operator[](pmVar1,(int *)local_88);
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
          *(undefined1 *)(lVar10 + 0x1a8) = 1;
          pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::
                    map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                    ::operator[](pmVar1,(int *)local_88);
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
          uVar3 = Plant::GetAvatarEnable((Plant *)param_1[2]);
          *(undefined1 *)(lVar10 + 0x1a9) = uVar3;
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back(this,(RtWeakPtr *)aRStack_80);
          *(int *)(param_1 + 5) = (int)param_1[5] + 1;
          pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::
                    map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                    ::operator[](pmVar1,(int *)local_88);
          uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
          FUN_0401a5c8(afStack_50,param_1);
          FishHookGrassProjectile::CastHook(_FUN_040247b8,uVar8,afStack_50);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      local_88[0] = (float)((int)local_88[0] + 1);
    } while ((int)local_88[0] < iVar4);
  }
  iVar4 = (int)param_1[5];
  if (0 < iVar5) {
    lVar10 = 0;
    do {
      pRVar7 = (RtWeakPtrBase *)FUN_04019ac4(param_1[9],lVar10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,pRVar7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      nop();
      if ((extraout_x0 != 0) && ((int)param_1[5] < (int)param_1[0x2b])) {
        uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
        std::string::string((string *)local_70,"FishHookGrassDefault");
        pmVar1 = (map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                  *)(param_1 + 0x2e);
        Sexy::ToWString((string *)local_70);
        fVar17 = (float)(iVar4 + (int)lVar10);
        Sexy::RtName::RtName((RtName *)local_60,(wstring *)local_68);
        PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78,uVar8,0xc,(RtName *)local_60);
        Sexy::RtName::~RtName((RtName *)local_60);
        FUN_05476c50((wstring *)local_68);
        std::string::~string((string *)local_70);
        nop();
        local_88[0] = 0.0;
        local_70[0] = 0.0;
        pPVar9 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
        std::string::string((string *)local_60,"eyes");
        PopAnimRig::CalcLayerTranslation(pPVar9,(string *)local_60,local_88,local_70);
        std::string::~string((string *)local_60);
        nop();
        pPVar9 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
        std::string::string((string *)local_60,"stone");
        PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_60,false);
        std::string::~string((string *)local_60);
        nop();
        pPVar9 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
        std::string::string((string *)local_60,"hook-shaped_thing");
        PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_60,false);
        std::string::~string((string *)local_60);
        nop();
        pPVar9 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
        std::string::string((string *)local_60,"hair");
        PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_60,false);
        std::string::~string((string *)local_60);
        nop();
        pPVar9 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
        std::string::string((string *)local_60,"wait");
        PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_60,false);
        std::string::~string((string *)local_60);
        nop();
        pPVar9 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
        std::string::string((string *)local_60,"po");
        PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_60,false);
        std::string::~string((string *)local_60);
        nop();
        lVar16 = param_1[2];
        fVar24 = *(float *)(lVar16 + 0x1c);
        fVar21 = (float)FUN_04019c40(*(undefined4 *)(lVar16 + 0x18),fVar24,
                                     *(undefined4 *)(lVar16 + 0x20));
        fVar19 = *(float *)(extraout_x0 + 0x1c);
        FUN_04019c40(*(undefined4 *)(extraout_x0 + 0x18),fVar19,*(undefined4 *)(extraout_x0 + 0x20))
        ;
        lVar16 = param_1[2];
        fVar25 = *(float *)(lVar16 + 0x1c);
        FUN_04019c40(*(undefined4 *)(lVar16 + 0x18),fVar25,*(undefined4 *)(lVar16 + 0x20));
        fVar23 = (float)FUN_04019c40(*(undefined4 *)(extraout_x0 + 0x18),
                                     *(undefined4 *)(extraout_x0 + 0x1c),
                                     *(undefined4 *)(extraout_x0 + 0x20));
        lVar16 = param_1[2];
        fVar22 = (float)FUN_04019c40(*(undefined4 *)(lVar16 + 0x18),*(undefined4 *)(lVar16 + 0x1c),
                                     *(undefined4 *)(lVar16 + 0x20));
        dVar20 = atan2((double)(fVar19 - fVar25),(double)(fVar23 - fVar22));
        pBVar26._0_4_ = (Board *)(fVar21 + local_88[0]);
        uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
        fVar24 = fVar24 + local_70[0];
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_60,aRStack_78);
        pPVar11 = (Projectile *)
                  Board::AddProjectile(pBVar26._0_4_,fVar24,0,uVar8,(RtName *)local_60,param_1[2],0)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
        FUN_04019c34(pPVar11 + 0x24);
        ProjectileHelpers::RandomizeVelocities(pPVar11);
        Projectile::SetShadow(pPVar11,false);
        pSVar12 = (SexyVector3 *)Projectile::GetVelocity(pPVar11);
        Projectile::SetVelocity(pPVar11,pSVar12);
        FUN_04019c28(pPVar11 + 0xd5);
        pSVar13 = (SexyTransform2D *)FUN_04019a68(-(float)dVar20,pPVar11 + 0xc4);
        Sexy::SexyTransform2D::CreateRotation(pSVar13,-(float)dVar20);
        Projectile::ApplyRotationToVelocity((SexyTransform2D *)pPVar11);
        local_68[0] = fVar17;
        pRVar14 = (RtWeakPtr<SpartanBambooMatrixSystem> *)
                  std::
                  map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                  ::operator[](pmVar1,(int *)local_68);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar14,(RtWeakPtrBase *)local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
        local_60[0] = fVar17;
        pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::
                  map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                  ::operator[](pmVar1,(int *)local_60);
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
        *(undefined1 *)(lVar16 + 0x1a8) = 1;
        local_60[0] = fVar17;
        pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::
                  map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                  ::operator[](pmVar1,(int *)local_60);
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
        uVar3 = Plant::GetAvatarEnable((Plant *)param_1[2]);
        *(undefined1 *)(lVar16 + 0x1a9) = uVar3;
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back(this,(RtWeakPtr *)aRStack_80);
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        local_60[0] = fVar17;
        pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::
                  map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                  ::operator[](pmVar1,(int *)local_60);
        uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
        FUN_0401a624(afStack_50,param_1);
        FishHookGrassProjectile::CastHook(_FUN_040247b8,uVar8,afStack_50);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
        ;
      }
      lVar10 = lVar10 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    } while ((int)lVar10 < iVar5);
    iVar4 = (int)param_1[5];
  }
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x228))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall
PlantFishhookgrass::OnAnimCommand(PlantFishhookgrass *this,string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  RtMixedPtrBase *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  RtObject *pRVar6;
  Zombie *pZVar7;
  float *pfVar8;
  float *pfVar9;
  ZombieTosserSubSystem *pZVar10;
  string *psVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  ZombieTosserSubSystem *pZVar17;
  float fVar16;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0x110)) {
  case 2:
    bVar2 = std::operator==(param_1,"use_action");
    psVar11 = (string *)(ulong)bVar2;
    if (!bVar2) goto switchD_040248bc_caseD_e;
    uVar14 = PVZ_T();
    *(undefined4 *)(this + 0x16c) = uVar14;
    launchTongue(this,0);
    break;
  default:
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      psVar11 = ___stack_chk_guard;
      if (local_8 == ___stack_chk_guard) {
        PlantFramework::OnAnimCommand((string *)this,param_1);
        return;
      }
      goto LAB_04024ba4;
    }
  case 0xe:
switchD_040248bc_caseD_e:
    psVar11 = (string *)0x1;
    break;
  case 6:
    bVar2 = std::operator==(param_1,"use_action");
    psVar11 = (string *)(ulong)bVar2;
    if (!bVar2) goto switchD_040248bc_caseD_e;
    FUN_0401d008(*(undefined8 *)(this + 0x10));
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    local_60 = *puVar5;
    local_58 = *(undefined4 *)(puVar5 + 1);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    local_60 = CONCAT44(local_60._4_4_,(float)(iVar3 * 0xb) + (float)local_60);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
    if (cVar1 != '\0') {
      pRVar6 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
      pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar6);
      if ((pZVar7 != (Zombie *)0x0) &&
         (cVar1 = GameObject::IsDestroyed((GameObject *)pZVar7), cVar1 == '\0')) {
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)pZVar7);
        fVar15 = *pfVar8;
        fVar16 = *pfVar9;
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        if (ABS(fVar15 - fVar16) <= (float)iVar3) {
          pRVar6 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
          if ((pRVar6 == (RtObject *)0x0) ||
             (bVar2 = Sexy::RtObject::IsA<BeachStage>(pRVar6), !bVar2)) {
            pZVar17._0_4_ = (ZombieTosserSubSystem *)0x3f800000;
          }
          else {
            pZVar17._0_4_ = (ZombieTosserSubSystem *)0x428c0000;
          }
          pZVar10 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
          ZombieTosserSubSystem::LaunchZombie
                    (pZVar17._0_4_,0x3f8ccccd,pZVar10,pZVar7,&local_60,aRStack_50,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          pZVar7[0x7ea] = (Zombie)0x1;
          Zombie::SetIsControlled(pZVar7,true);
          uVar14 = FUN_04019a9c(*(undefined8 *)(this + 0x10));
          *(undefined4 *)(pZVar7 + 0x7ec) = uVar14;
        }
      }
    }
    uVar14 = PVZ_T();
    *(undefined4 *)(this + 0x150) = uVar14;
    break;
  case 9:
    bVar2 = std::operator==(param_1,"use_action");
    psVar11 = (string *)(ulong)bVar2;
    if (!bVar2) goto switchD_040248bc_caseD_e;
    uVar14 = PVZ_T();
    *(undefined4 *)(this + 0x168) = uVar14;
    launchTongueAll(this,1);
    break;
  case 0xc:
    psVar11 = (string *)0x1;
    std::operator==(param_1,"retract");
    break;
  case 0xd:
    bVar2 = std::operator==(param_1,"use_action");
    if (bVar2) {
      uVar12 = *(undefined8 *)(this + 0x90);
      iVar3 = FUN_04019ab8(uVar12,*(undefined8 *)(this + 0x98));
      if (0 < iVar3) {
        lVar13 = 0;
        while( true ) {
          this_00 = (RtMixedPtrBase *)FUN_04019ac4(uVar12,lVar13);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
          if (cVar1 != '\0') {
            this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      FUN_04019ac4(*(undefined8 *)(this + 0x90),lVar13);
            pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
            pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar6);
            if ((pZVar7 != (Zombie *)0x0) &&
               (cVar1 = GameObject::IsDestroyed((GameObject *)pZVar7), cVar1 == '\0')) {
              Zombie::EndCondition(pZVar7,2);
              Zombie::EndCondition(pZVar7,0x18);
              cVar1 = Zombie::IsControlled(pZVar7);
              if (cVar1 != '\0') {
                Zombie::SetIsControlled(pZVar7,false);
              }
              ToolPacketData::GetProps();
              cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_60);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
              if (cVar1 != '\0') {
                iVar4 = PlantFramework::Rand((PlantFramework *)this,300);
                EATextSquish::Vec3::Vec3((Vec3 *)&local_60,1000.0,(float)iVar4,0.0);
                Zombie::FlickOff(pZVar7,(SexyVector3 *)&local_60);
              }
            }
          }
          lVar13 = lVar13 + 1;
          if (iVar3 <= (int)lVar13) break;
          uVar12 = *(undefined8 *)(this + 0x90);
        }
      }
    }
    goto switchD_040248bc_caseD_e;
  }
  param_1 = ___stack_chk_guard;
  param_2 = local_8;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_04024ba4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(psVar11,param_1,param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFishhookgrass::onHookReeledIn() */

void __thiscall PlantFishhookgrass::onHookReeledIn(PlantFishhookgrass *this)

{
  vector<Zombie*,std::allocator<Zombie*>> *this_00;
  map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
  *pmVar1;
  RtWeakPtr *this_01;
  char cVar2;
  bool bVar3;
  int iVar4;
  RtMixedPtrBase *pRVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  long lVar7;
  FishHookGrassProjectile *pFVar8;
  Zombie *this_02;
  PopAnimRig *pPVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  RtWeakPtrBase *this_03;
  int iVar13;
  int local_44;
  int local_40 [2];
  undefined8 local_38 [6];
  long local_8;
  
  iVar4 = *(int *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  if (iVar4 == 4) {
    this_01 = (RtWeakPtr *)(this + 0xb0);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar3) {
      pPVar9 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)local_38,"stone");
      PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_38,true);
      std::string::~string((string *)local_38);
      nop();
      pPVar9 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)local_38,"hook-shaped_thing");
      PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_38,true);
      std::string::~string((string *)local_38);
      nop();
      pPVar9 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)local_38,"hair");
      PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_38,true);
      std::string::~string((string *)local_38);
      nop();
      pPVar9 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)local_38,"wait");
      PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_38,false);
      std::string::~string((string *)local_38);
      nop();
      pPVar9 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)local_38,"po");
      PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_38,false);
      std::string::~string((string *)local_38);
      nop();
      pFVar8 = (FishHookGrassProjectile *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      lVar7 = FishHookGrassProjectile::GetHookedZombie(pFVar8);
      if (lVar7 == 0) {
        plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        (**(code **)(*plVar12 + 0x48))();
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
        setState(this,0);
        iVar4 = *(int *)(this + 0x110);
        goto LAB_040255b8;
      }
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar3) {
        pFVar8 = (FishHookGrassProjectile *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        lVar7 = FishHookGrassProjectile::GetHookedZombie(pFVar8);
        if (lVar7 != 0) {
          pFVar8 = (FishHookGrassProjectile *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          plVar12 = (long *)FishHookGrassProjectile::GetHookedZombie(pFVar8);
          cVar2 = (**(code **)(*plVar12 + 0x328))();
          if (cVar2 != '\0') {
            plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            (**(code **)(*plVar12 + 0x48))();
            Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
            setState(this,0);
            iVar4 = *(int *)(this + 0x110);
            goto LAB_040255b8;
          }
        }
        plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        (**(code **)(*plVar12 + 0x48))();
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
      }
      setState(this,6);
    }
    iVar4 = *(int *)(this + 0x110);
  }
LAB_040255b8:
  if (iVar4 == 0xb) {
    this_00 = (vector<Zombie*,std::allocator<Zombie*>> *)(this + 0x78);
    iVar4 = FUN_04019ab8(*(undefined8 *)(this + 0x60),*(undefined8 *)(this + 0x68));
    std::vector<Zombie*,std::allocator<Zombie*>>::clear(this_00);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (this + 0x90));
    if (iVar4 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      pmVar1 = (map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                *)(this + 0x170);
      local_44 = 0;
      do {
        pRVar5 = (RtMixedPtrBase *)
                 std::
                 map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                 ::operator[](pmVar1,&local_44);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar5);
        if (cVar2 != '\0') {
          pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   std::
                   map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                   ::operator[](pmVar1,&local_44);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
          if (*(char *)(lVar7 + 0x1a5) != '\0') {
            iVar13 = iVar13 + 1;
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     std::
                     map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                     ::operator[](pmVar1,&local_44);
            pFVar8 = (FishHookGrassProjectile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            lVar7 = FishHookGrassProjectile::GetHookedZombie(pFVar8);
            if (lVar7 != 0) {
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       std::
                       map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                       ::operator[](pmVar1,&local_44);
              pFVar8 = (FishHookGrassProjectile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              local_38[0] = FishHookGrassProjectile::GetHookedZombie(pFVar8);
              std::vector<Zombie*,std::allocator<Zombie*>>::push_back(this_00,(Zombie **)local_38);
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       std::
                       map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                       ::operator[](pmVar1,&local_44);
              pFVar8 = (FishHookGrassProjectile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              lVar7 = FishHookGrassProjectile::GetHookedZombie(pFVar8);
              if (lVar7 != 0) {
                pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                         std::
                         map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                         ::operator[](pmVar1,&local_44);
                pFVar8 = (FishHookGrassProjectile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6)
                ;
                FishHookGrassProjectile::GetHookedZombie(pFVar8);
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)local_40);
                std::
                vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
                push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)(this + 0x90),(RtWeakPtr *)local_38);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
              }
              pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       std::
                       map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                       ::operator[](pmVar1,&local_44);
              pFVar8 = (FishHookGrassProjectile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
              this_02 = (Zombie *)FishHookGrassProjectile::GetHookedZombie(pFVar8);
              Zombie::SetIsControlled(this_02,true);
            }
          }
        }
        local_44 = local_44 + 1;
      } while (local_44 < iVar4);
    }
    if (iVar4 == iVar13) {
      pmVar1 = (map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                *)(this + 0x170);
      pPVar9 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)local_38,"stone");
      PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_38,true);
      std::string::~string((string *)local_38);
      nop();
      pPVar9 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)local_38,"hook-shaped_thing");
      PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_38,true);
      std::string::~string((string *)local_38);
      nop();
      pPVar9 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)local_38,"hair");
      PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_38,true);
      std::string::~string((string *)local_38);
      nop();
      pPVar9 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)local_38,"wait");
      PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_38,false);
      std::string::~string((string *)local_38);
      nop();
      pPVar9 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)local_38,"po");
      PopAnimRig::SetLayerVisibility(pPVar9,(string *)local_38,false);
      std::string::~string((string *)local_38);
      nop();
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      uVar11 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
      std::set<Zombie*,std::less<Zombie*>,std::allocator<Zombie*>>::
      set<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>>
                ((set<Zombie*,std::less<Zombie*>,std::allocator<Zombie*>> *)local_38,uVar10,uVar11);
      uVar10 = std::set<Zombie*,std::less<Zombie*>,std::allocator<Zombie*>>::begin
                         ((set<Zombie*,std::less<Zombie*>,std::allocator<Zombie*>> *)local_38);
      uVar11 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)local_38);
      std::vector<Zombie*,std::allocator<Zombie*>>::
      assign<std::_Rb_tree_const_iterator<Zombie*>,void>(this_00,uVar10,uVar11);
      local_40[0] = 0;
      if (iVar4 != 0) {
        do {
          pRVar5 = (RtMixedPtrBase *)
                   std::
                   map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                   ::operator[](pmVar1,local_40);
          cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar5);
          if (cVar2 != '\0') {
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     std::
                     map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                     ::operator[](pmVar1,local_40);
            plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            (**(code **)(*plVar12 + 0x48))();
            this_03 = (RtWeakPtrBase *)
                      std::
                      map<int,Sexy::RtWeakPtr<FishHookGrassProjectile>,std::less<int>,std::allocator<std::pair<int_const,Sexy::RtWeakPtr<FishHookGrassProjectile>>>>
                      ::operator[](pmVar1,local_40);
            Sexy::RtWeakPtrBase::ClearId(this_03);
          }
          local_40[0] = local_40[0] + 1;
        } while (local_40[0] < iVar4);
      }
      lVar7 = FUN_04019acc(*(undefined8 *)(this + 0x78),*(undefined8 *)(this + 0x80));
      if (lVar7 == 0) {
        (**(code **)(*(long *)this + 0x228))(this);
      }
      else {
        setState(this,0xd);
      }
      std::set<Zombie*,std::less<Zombie*>,std::allocator<Zombie*>>::~set
                ((set<Zombie*,std::less<Zombie*>,std::allocator<Zombie*>> *)local_38);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

