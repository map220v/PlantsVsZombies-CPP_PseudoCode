// Class: PennyPerkPennyShield


/* PennyPerkPennyShield::~PennyPerkPennyShield() */

void __thiscall PennyPerkPennyShield::~PennyPerkPennyShield(PennyPerkPennyShield *this)

{
  *(undefined ***)this = &PTR_GetClass_06681db0;
  PennyPerkTimedEffect::~PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  return;
}


/* PennyPerkPennyShield::~PennyPerkPennyShield() */

void __thiscall PennyPerkPennyShield::~PennyPerkPennyShield(PennyPerkPennyShield *this)

{
  ~PennyPerkPennyShield(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkPennyShield::PennyPerkPennyShield() */

void __thiscall PennyPerkPennyShield::PennyPerkPennyShield(PennyPerkPennyShield *this)

{
  PennyPerkTimedEffect::PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  *(undefined ***)this = &PTR_GetClass_06681db0;
  return;
}


/* PennyPerkPennyShield::StaticNew() */

PennyPerkPennyShield * PennyPerkPennyShield::StaticNew(void)

{
  PennyPerkPennyShield *this;
  
  this = ::operator_new(0x28);
  PennyPerkPennyShield(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkPennyShield::StaticClassInit() */

void PennyPerkPennyShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkPennyShield");
    (*pcVar2)(plVar1,asStack_10,FUN_036c73b4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkPennyShield::StaticGetClass() */

long * PennyPerkPennyShield::StaticGetClass(void)

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
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkPennyShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkPennyShield::GetClass() const */

long * PennyPerkPennyShield::GetClass(void)

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
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkPennyShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkPennyShield::calcNextUpdateTime() */

void __thiscall PennyPerkPennyShield::calcNextUpdateTime(PennyPerkPennyShield *this)

{
  long extraout_x0;
  float *pfVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  pfVar1 = (float *)FUN_036c6f60(*(undefined8 *)(extraout_x0 + 0x60),(long)*(int *)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2 + *pfVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkPennyShield::createShields() */

void __thiscall PennyPerkPennyShield::createShields(PennyPerkPennyShield *this)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long extraout_x0;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  Board *this_00;
  long lVar13;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  lVar13 = 0;
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  lVar8 = (long)*(int *)(this + 0x10);
  piVar5 = (int *)FUN_036c6f68(*(undefined8 *)(extraout_x0 + 0xa8),lVar8);
  iVar11 = *piVar5;
  if (0 < iVar11) {
    do {
      puVar6 = (undefined8 *)FUN_036c70d0(*(undefined8 *)(extraout_x0 + 0x90),lVar8);
      piVar5 = (int *)FUN_036c6f68(*puVar6,lVar13);
      iVar1 = *piVar5;
      if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
        iVar11 = 0;
        do {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
          Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),iVar1,iVar11,(vector *)&local_20);
          uVar7 = local_20;
          iVar4 = FUN_036c70dc(local_20,local_18);
          uVar2 = iVar4 - 1;
          if (-1 < (int)uVar2) {
            lVar9 = (long)(int)uVar2 + -1;
            lVar8 = lVar9;
            lVar12 = (long)(int)uVar2;
            while( true ) {
              lVar10 = lVar8;
              puVar6 = (undefined8 *)FUN_036c70e8(uVar7,lVar12);
              if (((RtObject *)*puVar6 != (RtObject *)0x0) &&
                 (bVar3 = Sexy::RtObject::IsA<GridItemPlantShield>((RtObject *)*puVar6), bVar3)) {
                puVar6 = (undefined8 *)FUN_036c70e8(local_20,lVar12);
                (**(code **)(*(long *)*puVar6 + 0x48))((long *)*puVar6);
              }
              if (lVar10 == lVar9 - (ulong)uVar2) break;
              uVar7 = local_20;
              lVar8 = lVar10 + -1;
              lVar12 = lVar10;
            }
          }
          this_00 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_28,"holoshield");
          iVar4 = iVar11 + 1;
          lVar8 = Board::AddGridItem(this_00,asStack_28,iVar1,iVar11,1);
          std::string::~string(asStack_28);
          nop();
          piVar5 = (int *)FUN_036c6f68(*(undefined8 *)(extraout_x0 + 0x78),
                                       (long)*(int *)(this + 0x10));
          iVar11 = *piVar5;
          FUN_036c6f50((float)iVar11,lVar8 + 300);
          FUN_036c6f58((float)iVar11,lVar8 + 0x128);
          std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                    ((vector<GridItem*,std::allocator<GridItem*>> *)&local_20);
          iVar11 = iVar4;
        } while (iVar4 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
        lVar8 = (long)*(int *)(this + 0x10);
        piVar5 = (int *)FUN_036c6f68(*(undefined8 *)(extraout_x0 + 0xa8),lVar8);
        iVar11 = *piVar5;
      }
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < iVar11);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkPennyShield::onUpdate() */

void __thiscall PennyPerkPennyShield::onUpdate(PennyPerkPennyShield *this)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long extraout_x0;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  Board *this_00;
  long lVar13;
  string asStack_28 [8];
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  lVar13 = 0;
  lStack_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_20);
  lVar8 = (long)*(int *)(this + 0x10);
  piVar5 = (int *)FUN_036c6f68(*(undefined8 *)(extraout_x0 + 0xa8),lVar8);
  iVar11 = *piVar5;
  if (0 < iVar11) {
    do {
      puVar6 = (undefined8 *)FUN_036c70d0(*(undefined8 *)(extraout_x0 + 0x90),lVar8);
      piVar5 = (int *)FUN_036c6f68(*puVar6,lVar13);
      iVar1 = *piVar5;
      if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
        iVar11 = 0;
        do {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_20);
          Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),iVar1,iVar11,(vector *)&uStack_20);
          uVar7 = uStack_20;
          iVar4 = FUN_036c70dc(uStack_20,uStack_18);
          uVar2 = iVar4 - 1;
          if (-1 < (int)uVar2) {
            lVar9 = (long)(int)uVar2 + -1;
            lVar8 = lVar9;
            lVar12 = (long)(int)uVar2;
            while( true ) {
              lVar10 = lVar8;
              puVar6 = (undefined8 *)FUN_036c70e8(uVar7,lVar12);
              if (((RtObject *)*puVar6 != (RtObject *)0x0) &&
                 (bVar3 = Sexy::RtObject::IsA<GridItemPlantShield>((RtObject *)*puVar6), bVar3)) {
                puVar6 = (undefined8 *)FUN_036c70e8(uStack_20,lVar12);
                (**(code **)(*(long *)*puVar6 + 0x48))((long *)*puVar6);
              }
              if (lVar10 == lVar9 - (ulong)uVar2) break;
              uVar7 = uStack_20;
              lVar8 = lVar10 + -1;
              lVar12 = lVar10;
            }
          }
          this_00 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_28,"holoshield");
          iVar4 = iVar11 + 1;
          lVar8 = Board::AddGridItem(this_00,asStack_28,iVar1,iVar11,1);
          std::string::~string(asStack_28);
          nop();
          piVar5 = (int *)FUN_036c6f68(*(undefined8 *)(extraout_x0 + 0x78),
                                       (long)*(int *)(this + 0x10));
          iVar11 = *piVar5;
          FUN_036c6f50((float)iVar11,lVar8 + 300);
          FUN_036c6f58((float)iVar11,lVar8 + 0x128);
          std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                    ((vector<GridItem*,std::allocator<GridItem*>> *)&uStack_20);
          iVar11 = iVar4;
        } while (iVar4 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
        lVar8 = (long)*(int *)(this + 0x10);
        piVar5 = (int *)FUN_036c6f68(*(undefined8 *)(extraout_x0 + 0xa8),lVar8);
        iVar11 = *piVar5;
      }
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < iVar11);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

