// Class: DangerRoomGravestoneGenerator


/* DangerRoomGravestoneGenerator::~DangerRoomGravestoneGenerator() */

void __thiscall
DangerRoomGravestoneGenerator::~DangerRoomGravestoneGenerator(DangerRoomGravestoneGenerator *this)

{
  *(undefined ***)this = &PTR_GetClass_0675c540;
  DangerRoomLevelDesigner::~DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  return;
}


/* DangerRoomGravestoneGenerator::~DangerRoomGravestoneGenerator() */

void __thiscall
DangerRoomGravestoneGenerator::~DangerRoomGravestoneGenerator(DangerRoomGravestoneGenerator *this)

{
  ~DangerRoomGravestoneGenerator(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomGravestoneGenerator::StaticClassInit() */

void DangerRoomGravestoneGenerator::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomGravestoneGenerator");
    (*pcVar2)(plVar1,asStack_10,FUN_03ca8880,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomGravestoneGenerator::StaticGetClass() */

long * DangerRoomGravestoneGenerator::StaticGetClass(void)

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
  uVar2 = DangerRoomLevelDesigner::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomGravestoneGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomGravestoneGenerator::GetClass() const */

long * DangerRoomGravestoneGenerator::GetClass(void)

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
  uVar2 = DangerRoomLevelDesigner::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomGravestoneGenerator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomGravestoneGenerator::DangerRoomGravestoneGenerator() */

void __thiscall
DangerRoomGravestoneGenerator::DangerRoomGravestoneGenerator(DangerRoomGravestoneGenerator *this)

{
  DangerRoomLevelDesigner::DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  *(undefined4 *)(this + 0x14) = 0x40000000;
  this[0x10] = (DangerRoomGravestoneGenerator)0x0;
  this[0x18] = (DangerRoomGravestoneGenerator)0x14;
  *(undefined4 *)(this + 0x1c) = 0xbf000000;
  *(undefined ***)this = &PTR_GetClass_0675c540;
  this[0x1a] = (DangerRoomGravestoneGenerator)0x9;
  this[0x20] = (DangerRoomGravestoneGenerator)0x9;
  this[0x21] = (DangerRoomGravestoneGenerator)0x9;
  this[0x19] = (DangerRoomGravestoneGenerator)0x2;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* DangerRoomGravestoneGenerator::StaticNew() */

DangerRoomGravestoneGenerator * DangerRoomGravestoneGenerator::StaticNew(void)

{
  DangerRoomGravestoneGenerator *this;
  
  this = ::operator_new(0x28);
  DangerRoomGravestoneGenerator(this);
  return this;
}


/* DangerRoomGravestoneGenerator::tryGetGravestoneModule() const */

void DangerRoomGravestoneGenerator::tryGetGravestoneModule(void)

{
  FUN_03ca9568(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomGravestoneGenerator::GenerateInitialBoardEntities(int, Sexy::MTRand&) const */

void __thiscall
DangerRoomGravestoneGenerator::GenerateInitialBoardEntities
          (DangerRoomGravestoneGenerator *this,int param_1,MTRand *param_2)

{
  uint uVar1;
  DangerRoomGravestoneGenerator DVar2;
  DangerRoomGravestoneGenerator DVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  GravestoneModule *this_00;
  float fVar9;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18 [2];
  uint local_10 [2];
  long local_8;
  
  fVar9 = (float)param_1;
  local_8 = ___stack_chk_guard;
  local_28 = (uint)(byte)this[0x10];
  local_18[0] = (uint)(fVar9 * *(float *)(this + 0x14));
  local_10[0] = (uint)(byte)this[0x18];
  piVar7 = eastl::min_alt<int>((int *)local_18,(int *)local_10);
  iVar5 = *piVar7;
  local_24 = iVar5;
  puVar8 = (uint *)eastl::min_alt<int>((int *)&local_28,&local_24);
  uVar1 = *puVar8;
  local_28 = uVar1;
  iVar4 = Sexy::MTRand::Next(param_2,(iVar5 - uVar1) + 1);
  DVar2 = this[0x21];
  local_18[0] = (uint)(byte)this[0x1a];
  DVar3 = this[0x19];
  local_20 = (int)((float)(int)(fVar9 * *(float *)(this + 0x1c)) + (float)local_18[0]);
  local_1c = (int)((float)(int)(fVar9 * *(float *)(this + 0x24)) + (float)(byte)DVar2);
  local_10[0] = (uint)(byte)DVar3;
  piVar7 = eastl::min_alt<int>(&local_20,(int *)local_18);
  piVar7 = eastl::max_alt<int>((int *)local_10,piVar7);
  iVar5 = *piVar7;
  local_10[0] = (uint)(byte)this[0x20];
  local_18[0] = (uint)(byte)DVar2;
  piVar7 = eastl::min_alt<int>(&local_1c,(int *)local_18);
  piVar7 = eastl::max_alt<int>((int *)local_10,piVar7);
  iVar6 = *piVar7;
  iVar5 = Sexy::MTRand::Next(param_2,(iVar5 - (uint)(byte)DVar3) + 1);
  DVar2 = this[0x20];
  iVar6 = Sexy::MTRand::Next(param_2,(iVar6 - (uint)(byte)DVar2) + 1);
  this_00 = (GravestoneModule *)tryGetGravestoneModule();
  if (this_00 != (GravestoneModule *)0x0) {
    std::string::string((string *)local_10,"gravestone");
    GravestoneModule::addGraveStones
              (this_00,(string *)local_10,(uint)(byte)DVar3 + iVar5 + -1,
               (uint)(byte)DVar2 + iVar6 + -1,uVar1 + iVar4,param_2);
    std::string::~string((string *)local_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomGravestoneGenerator::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
DangerRoomGravestoneGenerator::GatherResourceRequirements
          (DangerRoomGravestoneGenerator *this,set *param_1)

{
  bool bVar1;
  long lVar2;
  string *psVar3;
  GridItemType *this_00;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = tryGetGravestoneModule();
  if (lVar2 != 0) {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    std::string::string(asStack_10,"gravestone");
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
    std::string::~string(asStack_10);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      this_00 = (GridItemType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      GridItemType::AddResourceRequirements(this_00,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

