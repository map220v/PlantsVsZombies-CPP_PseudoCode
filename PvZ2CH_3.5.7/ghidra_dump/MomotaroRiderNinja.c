// Class: MomotaroRiderNinja


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderNinja::StaticClassInit() */

void MomotaroRiderNinja::StaticClassInit(void)

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
    std::string::string(asStack_10,"MomotaroRiderNinja");
    (*pcVar2)(plVar1,asStack_10,FUN_04a29fcc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroRiderNinja::StaticGetClass() */

long * MomotaroRiderNinja::StaticGetClass(void)

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
  uVar2 = PlantEggplantNinja::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRiderNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroRiderNinja::GetClass() const */

long * MomotaroRiderNinja::GetClass(void)

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
  uVar2 = PlantEggplantNinja::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRiderNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroRiderNinja::MomotaroRiderNinja() */

void __thiscall MomotaroRiderNinja::MomotaroRiderNinja(MomotaroRiderNinja *this)

{
  PlantEggplantNinja::PlantEggplantNinja((PlantEggplantNinja *)this);
  *(undefined ***)this = &PTR_GetClass_06930390;
  return;
}


/* MomotaroRiderNinja::StaticNew() */

MomotaroRiderNinja * MomotaroRiderNinja::StaticNew(void)

{
  MomotaroRiderNinja *this;
  
  this = ::operator_new(0x48);
  MomotaroRiderNinja(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderNinja::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
MomotaroRiderNinja::Fire
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,MomotaroRiderNinja *this)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  PlantAction *pPVar4;
  float *pfVar5;
  EggplantShuriken *extraout_x0;
  undefined8 uVar6;
  undefined8 uVar7;
  RealObject *this_00;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  float local_90;
  float local_8c;
  undefined4 local_88;
  string asStack_80 [8];
  RtWeakPtrBase aRStack_78 [112];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x10);
  uVar7 = *(undefined8 *)(this + 0x28);
  uVar6 = *(undefined8 *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this_00 + 0x150) = 0;
  lVar1 = FUN_04a29904(uVar7,uVar6);
  lVar3 = 0;
  do {
    fVar9 = (float)param_2;
    if (lVar3 == lVar1) goto LAB_04a2a388;
    piVar2 = (int *)FUN_04a29910(uVar7,lVar3);
    fVar9 = (float)param_2;
    lVar3 = lVar3 + 1;
  } while (*piVar2 != 1);
  *piVar2 = 2;
LAB_04a2a388:
  std::string::string(asStack_80,"Play_Plant_Bloomerange_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_80,0.0);
  std::string::~string(asStack_80);
  nop();
  lVar3 = FUN_04a2a2ac(*(undefined8 *)(this + 0x10));
  pPVar4 = (PlantAction *)
           FUN_04a2992c(*(undefined8 *)(lVar3 + 0x70),(long)*(int *)(*(long *)(this + 0x10) + 0x150)
                       );
  PlantAction::PlantAction((PlantAction *)asStack_80,pPVar4);
  fVar8 = (float)(**(code **)(*(long *)this + 0x110))
                           (*(undefined4 *)(*(long *)(this + 0x10) + 0xc4),this,asStack_80);
  local_88 = (undefined4)param_3;
  local_90 = fVar8;
  local_8c = fVar9;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar11 = *pfVar5;
  fVar10 = pfVar5[1];
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,aRStack_78);
  uVar6 = Board::AddProjectile
                    ((Board *)(fVar8 + fVar11),fVar9 + fVar10,param_3,uVar6,aRStack_98,
                     *(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  *(undefined4 *)(extraout_x0 + 0x1a8) = 0;
  lVar3 = FUN_04a2a2ac(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(extraout_x0 + 0x1ac) = *(undefined4 *)(lVar3 + 0x2b8);
  EggplantShuriken::SetTrajectory(extraout_x0,2,0);
  PlantAction::~PlantAction((PlantAction *)asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderNinja::FindTargetAndFire(PlantWeapon) */

void MomotaroRiderNinja::FindTargetAndFire(long *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  RtObject *this;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined1 uVar12;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  lVar11 = param_1[5];
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04a29904(lVar11,param_1[6]);
  lVar6 = 0;
  do {
    if (lVar6 == lVar5) {
      Sexy::Insets::Insets((Insets *)&local_40);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1[2]);
      iVar4 = SharkMinion::getRow((SharkMinion *)param_1[2]);
      lVar6 = FUN_04a2a2ac(param_1[2]);
      Sexy::Insets::Insets((Insets *)&local_30,iVar3,iVar4,*(int *)(lVar6 + 0x2cc) - iVar3,1);
      local_40 = local_30;
      local_38 = uStack_28;
      piVar7 = (int *)FUN_04a29910(param_1[5],0);
      if ((*piVar7 != 0) || ((int)local_38 < 1)) goto LAB_04a2a668;
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,0x20,
                 (Insets *)&local_40);
      uVar10 = 0;
      goto LAB_04a2a6fc;
    }
    piVar7 = (int *)FUN_04a29910(lVar11,lVar6);
    lVar6 = lVar6 + 1;
  } while (*piVar7 != 1);
  uVar12 = 0;
  goto LAB_04a2a674;
LAB_04a2a668:
  uVar12 = 0;
  goto LAB_04a2a66c;
  while( true ) {
    FUN_04a29924(uVar1,uVar10);
    ToolPacketData::GetProps();
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    bVar2 = Sexy::RtObject::IsA<MomotaroRider>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    uVar10 = uVar10 + 1;
    if (bVar2) break;
LAB_04a2a6fc:
    uVar1 = local_20;
    uVar8 = FUN_04a29918(local_20,local_18);
    if (uVar8 <= uVar10) goto LAB_04a2a668;
  }
  puVar9 = (undefined4 *)FUN_04a29910(param_1[5],0);
  lVar6 = *param_1;
  *puVar9 = 1;
  (**(code **)(lVar6 + 0x1a0))(param_1);
  uVar12 = 1;
LAB_04a2a66c:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
LAB_04a2a674:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}


/* MomotaroRiderNinja::~MomotaroRiderNinja() */

void __thiscall MomotaroRiderNinja::~MomotaroRiderNinja(MomotaroRiderNinja *this)

{
  *(undefined ***)this = &PTR_GetClass_06930390;
  PlantEggplantNinja::~PlantEggplantNinja((PlantEggplantNinja *)this);
  return;
}


/* MomotaroRiderNinja::~MomotaroRiderNinja() */

void __thiscall MomotaroRiderNinja::~MomotaroRiderNinja(MomotaroRiderNinja *this)

{
  ~MomotaroRiderNinja(this);
  AK::FreeHook(this);
  return;
}

