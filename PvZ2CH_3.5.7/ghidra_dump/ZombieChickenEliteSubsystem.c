// Class: ZombieChickenEliteSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChickenEliteSubsystem::StaticClassInit() */

void ZombieChickenEliteSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieChickenEliteSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_046f137c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieChickenEliteSubsystem::StaticGetClass() */

long * ZombieChickenEliteSubsystem::StaticGetClass(void)

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
  uVar2 = ZombieChickenSubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieChickenEliteSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieChickenEliteSubsystem::GetClass() const */

long * ZombieChickenEliteSubsystem::GetClass(void)

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
  uVar2 = ZombieChickenSubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieChickenEliteSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieChickenEliteSubsystem::ZombieChickenEliteSubsystem() */

void __thiscall
ZombieChickenEliteSubsystem::ZombieChickenEliteSubsystem(ZombieChickenEliteSubsystem *this)

{
  ZombieChickenSubsystem::ZombieChickenSubsystem((ZombieChickenSubsystem *)this);
  *(undefined ***)this = &PTR_GetClass_068b7e60;
  return;
}


/* ZombieChickenEliteSubsystem::StaticNew() */

ZombieChickenEliteSubsystem * ZombieChickenEliteSubsystem::StaticNew(void)

{
  ZombieChickenEliteSubsystem *this;
  
  this = ::operator_new(0x30);
  ZombieChickenEliteSubsystem(this);
  return this;
}


/* ZombieChickenEliteSubsystem::~ZombieChickenEliteSubsystem() */

void __thiscall
ZombieChickenEliteSubsystem::~ZombieChickenEliteSubsystem(ZombieChickenEliteSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068b7e60;
  ZombieChickenSubsystem::~ZombieChickenSubsystem((ZombieChickenSubsystem *)this);
  return;
}


/* ZombieChickenEliteSubsystem::~ZombieChickenEliteSubsystem() */

void __thiscall
ZombieChickenEliteSubsystem::~ZombieChickenEliteSubsystem(ZombieChickenEliteSubsystem *this)

{
  ~ZombieChickenEliteSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChickenEliteSubsystem::Update() */

void __thiscall ZombieChickenEliteSubsystem::Update(ZombieChickenEliteSubsystem *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_046f0f50(uVar7,*(undefined8 *)(this + 0x18));
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar8 = (long)(int)uVar1 + -1;
    lVar2 = lVar8;
    lVar10 = (long)(int)uVar1;
    while( true ) {
      lVar9 = lVar2;
      piVar5 = (int *)FUN_046f0f78(uVar7,lVar10);
      fVar12 = (float)PVZ_T();
      if ((float)piVar5[3] < fVar12) {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                   ::operator+((__normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                                *)&local_20,lVar10);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<Chickening,std::allocator<Chickening>>::erase
                  ((vector<Chickening,std::allocator<Chickening>> *)(this + 0x10),local_10);
      }
      else {
        fVar12 = (float)PVZ_T();
        if ((float)piVar5[2] < fVar12) {
          piVar11 = piVar5 + 6;
          uVar4 = ClampInt(*piVar5,0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1);
          iVar3 = piVar5[1];
          pcVar6 = *(code **)(*(long *)this + 0x98);
          fVar12 = (float)Sexy::Rand(30.0);
          (*pcVar6)((float)iVar3 + 20.0 + fVar12,this,piVar11,uVar4,piVar5[4],piVar5[0xc],
                    *(undefined4 *)(this + 0x28));
          uVar4 = ClampInt(*piVar5 + -1,0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1);
          iVar3 = piVar5[1];
          pcVar6 = *(code **)(*(long *)this + 0x98);
          fVar12 = (float)Sexy::Rand(30.0);
          (*pcVar6)((float)iVar3 + 20.0 + fVar12,this,piVar11,uVar4,piVar5[4],piVar5[0xc],
                    *(undefined4 *)(this + 0x28));
          uVar4 = ClampInt(*piVar5 + 1,0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1);
          iVar3 = piVar5[1];
          pcVar6 = *(code **)(*(long *)this + 0x98);
          fVar12 = (float)Sexy::Rand(30.0);
          (*pcVar6)((float)iVar3 + 20.0 + fVar12,this,piVar11,uVar4,piVar5[4],piVar5[0xc],
                    *(undefined4 *)(this + 0x28));
          fVar12 = (float)PVZ_T();
          fVar14 = (float)piVar5[10];
          fVar13 = (float)Sexy::Rand((float)piVar5[0xb]);
          piVar5[2] = (int)(fVar12 + fVar13 + fVar14);
        }
      }
      if (lVar9 == lVar8 - (ulong)uVar1) break;
      uVar7 = *(undefined8 *)(this + 0x10);
      lVar2 = lVar9 + -1;
      lVar10 = lVar9;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

