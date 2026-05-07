// Class: PlantAnimRig_GardenerGrass


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GardenerGrass::getPlantFoodMainAnimName() */

void PlantAnimRig_GardenerGrass::getPlantFoodMainAnimName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x210));
  if (cVar2 == '\0') {
    __s = "fire_plantfood2";
  }
  else {
    __s = "fire_plantfood";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_GardenerGrass::~PlantAnimRig_GardenerGrass() */

void __thiscall
PlantAnimRig_GardenerGrass::~PlantAnimRig_GardenerGrass(PlantAnimRig_GardenerGrass *this)

{
  *(undefined ***)this = &PTR_GetClass_0672cbd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GardenerGrass_0672ce38;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GardenerGrass::~PlantAnimRig_GardenerGrass() */

void __thiscall
PlantAnimRig_GardenerGrass::~PlantAnimRig_GardenerGrass(PlantAnimRig_GardenerGrass *this)

{
  ~PlantAnimRig_GardenerGrass(this + -0x10);
  return;
}


/* PlantAnimRig_GardenerGrass::~PlantAnimRig_GardenerGrass() */

void __thiscall
PlantAnimRig_GardenerGrass::~PlantAnimRig_GardenerGrass(PlantAnimRig_GardenerGrass *this)

{
  ~PlantAnimRig_GardenerGrass(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GardenerGrass::~PlantAnimRig_GardenerGrass() */

void __thiscall
PlantAnimRig_GardenerGrass::~PlantAnimRig_GardenerGrass(PlantAnimRig_GardenerGrass *this)

{
  ~PlantAnimRig_GardenerGrass(this + -0x10);
  return;
}


/* PlantAnimRig_GardenerGrass::PlantAnimRig_GardenerGrass() */

void __thiscall
PlantAnimRig_GardenerGrass::PlantAnimRig_GardenerGrass(PlantAnimRig_GardenerGrass *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0672cbd0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GardenerGrass_0672ce38;
  return;
}


/* PlantAnimRig_GardenerGrass::StaticNew() */

PlantAnimRig_GardenerGrass * PlantAnimRig_GardenerGrass::StaticNew(void)

{
  PlantAnimRig_GardenerGrass *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_GardenerGrass(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GardenerGrass::StaticClassInit() */

void PlantAnimRig_GardenerGrass::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_GardenerGrass");
    (*pcVar2)(plVar1,asStack_10,FUN_03b15a2c,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_GardenerGrass::StaticGetClass() */

long * PlantAnimRig_GardenerGrass::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_GardenerGrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_GardenerGrass::GetClass() const */

long * PlantAnimRig_GardenerGrass::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_GardenerGrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GardenerGrass::playAndStopAnimWithCallback(std::string, std::string const&) */

void __thiscall
PlantAnimRig_GardenerGrass::playAndStopAnimWithCallback
          (PlantAnimRig_GardenerGrass *this,undefined8 param_2,string *param_3)

{
  bool bVar1;
  int iVar2;
  RtMixedPtr aRStack_a8 [8];
  RtId aRStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_3,"");
  if (bVar1) {
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_98);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_98,aRStack_a0,param_3);
    Sexy::RtId::~RtId(aRStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,(RtReflectionDelegate *)aRStack_98);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_2,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar2 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 != -1);
  }
  return;
}

