// Class: NeedPlantProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NeedPlantProperties::StaticClassInit() */

void NeedPlantProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NeedPlantProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_043617f8,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NeedPlantProperties::StaticGetClass() */

long * NeedPlantProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NeedPlantProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NeedPlantProperties::GetClass() const */

long * NeedPlantProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NeedPlantProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NeedPlantProperties::GetModuleClass() const */

long * NeedPlantProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (NeedPlantModule::sClass != (long *)0x0) {
    return NeedPlantModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  NeedPlantModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"NeedPlantModule",uVar2,NeedPlantModule::StaticNew);
  NeedPlantModule::StaticClassInit();
  return NeedPlantModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NeedPlantProperties::CheckNeedPlants(std::vector<Sexy::RtWeakPtr<PlantType const>,
   std::allocator<Sexy::RtWeakPtr<PlantType const> > > const&) */

void NeedPlantProperties::CheckNeedPlants(vector *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  string *psVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *in_x1;
  string *in_x8;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar1 = ___stack_chk_guard;
  uVar9 = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  lVar3 = FUN_043612c0(uVar8,*(undefined8 *)(param_1 + 0x48));
  if (lVar3 != 0) {
    do {
      uVar6 = 0;
      do {
        uVar7 = *in_x1;
        uVar5 = FUN_043612cc(uVar7,in_x1[1]);
        if (uVar5 <= uVar6) {
          FUN_043612e0(uVar8,uVar9);
          FUN_05475d88();
          goto LAB_04361788;
        }
        this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043612d8(uVar7,uVar6);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        uVar8 = *(undefined8 *)(param_1 + 0x40);
        psVar4 = (string *)FUN_043612e0(uVar8,uVar9);
        cVar2 = std::operator==((string *)(lVar3 + 8),psVar4);
        uVar6 = uVar6 + 1;
      } while (cVar2 == '\0');
      uVar9 = uVar9 + 1;
      uVar6 = FUN_043612c0(uVar8,*(undefined8 *)(param_1 + 0x48));
    } while (uVar9 < uVar6);
  }
  std::string::string(in_x8,"");
  nop();
LAB_04361788:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NeedPlantProperties::NeedPlantProperties() */

void __thiscall NeedPlantProperties::NeedPlantProperties(NeedPlantProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06835120;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  return;
}


/* NeedPlantProperties::StaticNew() */

NeedPlantProperties * NeedPlantProperties::StaticNew(void)

{
  NeedPlantProperties *this;
  
  this = ::operator_new(0x58);
  NeedPlantProperties(this);
  return this;
}


/* NeedPlantProperties::~NeedPlantProperties() */

void __thiscall NeedPlantProperties::~NeedPlantProperties(NeedPlantProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06835120;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* NeedPlantProperties::~NeedPlantProperties() */

void __thiscall NeedPlantProperties::~NeedPlantProperties(NeedPlantProperties *this)

{
  ~NeedPlantProperties(this);
  AK::FreeHook(this);
  return;
}

