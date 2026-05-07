// Class: PlantPrimalPeashooter


/* PlantPrimalPeashooter::AddPot(PlantPot*) */

void __thiscall PlantPrimalPeashooter::AddPot(PlantPrimalPeashooter *this,PlantPot *param_1)

{
  int iVar1;
  
  PlantFramework::AddPot((PlantFramework *)this,param_1);
  if ((param_1 != (PlantPot *)0x0) &&
     (iVar1 = FUN_041812a4(*(undefined4 *)(*(long *)(this + 0x10) + 0x294)), iVar1 == 3)) {
    (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  }
  return;
}


/* PlantPrimalPeashooter::PlantPrimalPeashooter() */

void __thiscall PlantPrimalPeashooter::PlantPrimalPeashooter(PlantPrimalPeashooter *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f8800;
  return;
}


/* PlantPrimalPeashooter::StaticNew() */

PlantPrimalPeashooter * PlantPrimalPeashooter::StaticNew(void)

{
  PlantPrimalPeashooter *this;
  
  this = ::operator_new(0x28);
  PlantPrimalPeashooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalPeashooter::StaticClassInit() */

void PlantPrimalPeashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPrimalPeashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_04182250,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPrimalPeashooter::StaticGetClass() */

long * PlantPrimalPeashooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPrimalPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPrimalPeashooter::GetClass() const */

long * PlantPrimalPeashooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPrimalPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPrimalPeashooter::~PlantPrimalPeashooter() */

void __thiscall PlantPrimalPeashooter::~PlantPrimalPeashooter(PlantPrimalPeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_067f8800;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPrimalPeashooter::~PlantPrimalPeashooter() */

void __thiscall PlantPrimalPeashooter::~PlantPrimalPeashooter(PlantPrimalPeashooter *this)

{
  ~PlantPrimalPeashooter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalPeashooter::firePlantfoodProjectile(Zombie*, PlantWeapon) */

void PlantPrimalPeashooter::firePlantfoodProjectile(PlantFramework *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  lVar4 = *(long *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04181300(lVar4);
  if (cVar1 == '\0') {
    iVar2 = FUN_041812a0(*(undefined4 *)(lVar4 + 0x50));
    if (iVar2 < 2) {
      *(undefined4 *)(lVar4 + 0x150) = 2;
    }
    else {
      *(undefined4 *)(lVar4 + 0x150) = 3;
    }
  }
  else {
    *(undefined4 *)(lVar4 + 0x150) = 5;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  lVar4 = PlantFramework::Fire
                    (param_1,a_Stack_10,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  uVar3 = FUN_04181294(*(undefined8 *)(lVar4 + 0xe0));
  uVar3 = operator|(uVar3,0x2000);
  FUN_04181298((undefined8 *)(lVar4 + 0xe0),uVar3);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalPeashooter::OnAnimCommand(std::string const&, std::string const&) */

void PlantPrimalPeashooter::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  RtObject *this;
  DragonFruitProjectile *this_00;
  undefined8 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"final_bomb");
  if (bVar1) {
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 6;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    this = (RtObject *)
           Plant::Fire(*(Plant **)(param_1 + 0x10),a_Stack_10,
                       *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),1);
    this_00 = Sexy::RtObject::Cast<DragonFruitProjectile>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    uVar2 = FUN_04181294(*(undefined8 *)(this_00 + 0xe0));
    uVar2 = operator|(uVar2,0x2000);
    FUN_04181298(this_00 + 0xe0,uVar2);
    StrawburstProjectile::SetJamFlag((StrawburstProjectile *)this_00,true);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalPeashooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantPrimalPeashooter::Fire
          (PlantPrimalPeashooter *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined4 param_3,
          LineBreakCategory *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  float *pfVar6;
  wchar16 *pwVar7;
  LineBreakCategory *pLVar8;
  LineBreakCategory *pLVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  int local_1c;
  int local_18 [2];
  uint local_10 [2];
  long local_8;
  
  pLVar9 = *(LineBreakCategory **)(*(long *)this + 0x180);
  local_8 = ___stack_chk_guard;
  uVar11 = (ulong)param_4 & 0xffffffff;
  cVar2 = (*(code *)pLVar9)();
  if (cVar2 == '\0') {
    lVar10 = *(long *)(this + 0x10);
    uVar3 = FUN_04181300(lVar10);
    if ((uVar3 & 0xff) == 0) {
      lVar10 = FUN_0418312c(lVar10);
      local_1c = FUN_04181320(*(undefined8 *)(lVar10 + 0x2c0),*(undefined8 *)(lVar10 + 0x2c8));
      local_1c = local_1c + -1;
      if (local_1c < 0) {
        fVar13 = 0.0;
      }
      else {
        uVar4 = *(undefined8 *)(this + 0x10);
        local_10[0] = uVar3 & 0xff;
        local_18[0] = FUN_041812f8(uVar4);
        local_18[0] = local_18[0] + -1;
        piVar5 = eastl::min_alt<int>(&local_1c,local_18);
        piVar5 = eastl::max_alt<int>((int *)local_10,piVar5);
        iVar1 = *piVar5;
        lVar10 = FUN_0418312c(uVar4);
        pfVar6 = (float *)FUN_0418133c(*(undefined8 *)(lVar10 + 0x2c0),(long)iVar1);
        fVar13 = *pfVar6;
      }
      pLVar8 = (LineBreakCategory *)local_18;
      fVar12 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
      pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      std::string::string((string *)local_10,"DebugSpecial");
      cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar7,(wchar16 *)local_10,pLVar8,param_4,pLVar9);
      if ((fVar12 <= fVar13) || (cVar2 != '\0')) {
        std::string::~string((string *)local_10);
        nop();
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
      }
      else {
        std::string::~string((string *)local_10);
        nop();
      }
    }
    else {
      *(undefined4 *)(lVar10 + 0x150) = 4;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)param_2);
    uVar4 = PlantFramework::Fire
                      ((PlantFramework *)this,(RtWeakPtr<Sexy::SoundResource> *)local_10,param_3,
                       uVar11);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  }
  else {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    uVar4 = firePlantfoodProjectile(this,uVar4,uVar11);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

