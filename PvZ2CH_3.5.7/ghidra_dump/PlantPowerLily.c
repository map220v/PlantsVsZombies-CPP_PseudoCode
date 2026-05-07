// Class: PlantPowerLily


/* PlantPowerLily::CancelPlantfood() */

void __thiscall PlantPowerLily::CancelPlantfood(PlantPowerLily *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerLily::ProduceSun(PlantAction const&) */

void __thiscall PlantPowerLily::ProduceSun(PlantPowerLily *this,PlantAction *param_1)

{
  undefined8 *puVar1;
  float local_18;
  undefined4 uStack_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_18 = (float)*puVar1;
  local_10 = *(float *)(puVar1 + 1) - *(float *)(param_1 + 0x6c);
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),*(float *)(param_1 + 0x68) + local_18);
  Board::AddPlantfood(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_18,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPowerLily::Initialize() */

void __thiscall PlantPowerLily::Initialize(PlantPowerLily *this)

{
  long lVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = *(long *)(this + 0x10);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)(lVar1 + 0xb4),*(float *)(lVar1 + 0xbc),*(float *)(lVar1 + 0xc0));
  this[0x28] = (PlantPowerLily)0x0;
  return;
}


/* PlantPowerLily::PlantPowerLily() */

void __thiscall PlantPowerLily::PlantPowerLily(PlantPowerLily *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantPowerLily)0x0;
  *(undefined ***)this = &PTR_GetClass_067c2f10;
  return;
}


/* PlantPowerLily::StaticNew() */

PlantPowerLily * PlantPowerLily::StaticNew(void)

{
  PlantPowerLily *this;
  
  this = ::operator_new(0x30);
  PlantPowerLily(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerLily::StaticClassInit() */

void PlantPowerLily::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPowerLily");
    (*pcVar2)(plVar1,asStack_10,FUN_0405f64c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPowerLily::StaticGetClass() */

long * PlantPowerLily::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPowerLily",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPowerLily::GetClass() const */

long * PlantPowerLily::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPowerLily",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPowerLily::~PlantPowerLily() */

void __thiscall PlantPowerLily::~PlantPowerLily(PlantPowerLily *this)

{
  *(undefined ***)this = &PTR_GetClass_067c2f10;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPowerLily::~PlantPowerLily() */

void __thiscall PlantPowerLily::~PlantPowerLily(PlantPowerLily *this)

{
  ~PlantPowerLily(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerLily::DoSpecial(int) */

void PlantPowerLily::DoSpecial(int param_1)

{
  ulong uVar1;
  ResourceInfo *pRVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  float local_18;
  undefined4 uStack_14;
  float local_10;
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  FUN_0405f3a0((RtWeakPtr *)&local_18,*(undefined8 *)(uVar1 + 0x10));
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar3 = FUN_0405f3c8(*(undefined8 *)(pRVar2 + 0x70),*(undefined8 *)(pRVar2 + 0x78));
  if (lVar3 != 0) {
    do {
      FUN_0405f3a0((RtWeakPtr *)&local_18,*(undefined8 *)(uVar1 + 0x10));
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      piVar4 = (int *)FUN_0405f3dc(*(undefined8 *)(lVar3 + 0x70),uVar7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      if (*piVar4 == 3) {
        puVar6 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 **)(uVar1 + 0x10));
        local_18 = (float)*puVar6;
        _local_18 = CONCAT44((int)((ulong)*puVar6 >> 0x20),(float)piVar4[0x1a] + local_18);
        local_10 = *(float *)(puVar6 + 1) - (float)piVar4[0x1b];
        Board::AddPlantfood(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_18,0);
      }
      uVar7 = uVar7 + 1;
      uVar5 = FUN_0405f3c8(*(undefined8 *)(pRVar2 + 0x70),*(undefined8 *)(pRVar2 + 0x78));
    } while (uVar7 < uVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPowerLily::UpdateActions() */

void __thiscall PlantPowerLily::UpdateActions(PlantPowerLily *this)

{
  char cVar1;
  PlantAnimRig_PowerLily *pPVar2;
  float fVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(int *)(*(long *)(this + 0x10) + 200) == 4) && (this[0x28] == (PlantPowerLily)0x0)) &&
     (fVar3 = (float)PVZ_T(), *(float *)(*(long *)(this + 0x10) + 300) < fVar3)) {
    cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 == '\0') {
      this[0x28] = (PlantPowerLily)0x1;
      pPVar2 = (PlantAnimRig_PowerLily *)FUN_0405f99c(*(undefined8 *)(this + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_PowerLily::PlayPlantFoodSpawn(pPVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

