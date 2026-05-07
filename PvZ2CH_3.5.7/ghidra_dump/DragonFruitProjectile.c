// Class: DragonFruitProjectile


/* DragonFruitProjectile::~DragonFruitProjectile() */

void __thiscall DragonFruitProjectile::~DragonFruitProjectile(DragonFruitProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067e24f0;
  *(undefined ***)(this + 0x10) = &PTR__DragonFruitProjectile_067e26e0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to DragonFruitProjectile::~DragonFruitProjectile() */

void __thiscall DragonFruitProjectile::~DragonFruitProjectile(DragonFruitProjectile *this)

{
  ~DragonFruitProjectile(this + -0x10);
  return;
}


/* DragonFruitProjectile::~DragonFruitProjectile() */

void __thiscall DragonFruitProjectile::~DragonFruitProjectile(DragonFruitProjectile *this)

{
  ~DragonFruitProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DragonFruitProjectile::~DragonFruitProjectile() */

void __thiscall DragonFruitProjectile::~DragonFruitProjectile(DragonFruitProjectile *this)

{
  ~DragonFruitProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitProjectile::StaticClassInit() */

void DragonFruitProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonFruitProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040fd2e0,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonFruitProjectile::StaticGetClass() */

long * DragonFruitProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DragonFruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonFruitProjectile::GetClass() const */

long * DragonFruitProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"DragonFruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonFruitProjectile::DragonFruitProjectile() */

void __thiscall DragonFruitProjectile::DragonFruitProjectile(DragonFruitProjectile *this)

{
  undefined4 uVar1;
  
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (DragonFruitProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_067e24f0;
  *(undefined ***)(this + 0x10) = &PTR__DragonFruitProjectile_067e26e0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  DailySignActivityWidget::setIsCanAwardToday((DailySignActivityWidget *)this,true);
  return;
}


/* DragonFruitProjectile::StaticNew() */

DragonFruitProjectile * DragonFruitProjectile::StaticNew(void)

{
  DragonFruitProjectile *this;
  
  this = ::operator_new(0x1b0);
  DragonFruitProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitProjectile::UpdateLavaSpawn() */

void __thiscall DragonFruitProjectile::UpdateLavaSpawn(DragonFruitProjectile *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  long lVar6;
  GridItemLava *this_00;
  ScrollWidget *this_01;
  Board *this_02;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_040fc9d0(*(undefined4 *)(this + 0xa8));
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar5);
  if ((((-1 < iVar2) && (iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), iVar2 < iVar3)) &&
      (fVar7 = *pfVar5, iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar2),
      (float)iVar3 < fVar7)) && (lVar6 = FUN_040fec50(iVar2,iVar1), lVar6 == 0)) {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"dragon_fruit_lava");
    Board::AddGridItem(this_02,asStack_10,iVar2,iVar1,1);
    nop();
    std::string::~string(asStack_10);
    nop();
    uVar4 = FUN_040fc950(*(undefined4 *)(this + 0x24));
    FUN_040fc954(this_00 + 0x24,uVar4);
    fVar7 = (float)FUN_040fc9e0(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
    GridItemLava::SetLifeTime(this_00,fVar7);
    this_01 = (ScrollWidget *)FUN_040fec50(iVar2 + -1,iVar1);
    if ((this_01 == (ScrollWidget *)0x0) ||
       (iVar1 = Sexy::ScrollWidget::GetPageHorizontal(this_01), 1 < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = Sexy::ScrollWidget::GetPageHorizontal(this_01);
      iVar1 = iVar1 + 1;
    }
    ToxicWaterPerfumeBottleProjectile::SetType((ToxicWaterPerfumeBottleProjectile *)this_00,iVar1);
    DragonFruitLava::UpdateStyleAnimation((DragonFruitLava *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonFruitProjectile::onPostUpdate() */

void __thiscall DragonFruitProjectile::onPostUpdate(DragonFruitProjectile *this)

{
  char cVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_EOT();
  if (*(float *)(this + 0x1a8) == fVar3) {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = *puVar2;
    local_10 = *(undefined4 *)(puVar2 + 1);
    cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_18);
    if (((cVar1 == '\0') &&
        (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_18), cVar1 == '\0'
        )) && (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_18)
              , cVar1 == '\0')) {
      if (this[0x1a5] != (DragonFruitProjectile)0x0) {
        UpdateLavaSpawn(this);
      }
    }
    else {
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x1a8) = uVar4;
    }
  }
  else {
    FlameladyProjectile::UpdateFadeOut((FlameladyProjectile *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

