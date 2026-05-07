// Class: PlantAnimRig_TristerixAphyllus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TristerixAphyllus::getPlantFoodMainAnimName() */

void __thiscall
PlantAnimRig_TristerixAphyllus::getPlantFoodMainAnimName(PlantAnimRig_TristerixAphyllus *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"blssom_loop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_TristerixAphyllus::~PlantAnimRig_TristerixAphyllus() */

void __thiscall
PlantAnimRig_TristerixAphyllus::~PlantAnimRig_TristerixAphyllus
          (PlantAnimRig_TristerixAphyllus *this)

{
  *(undefined ***)this = &PTR_GetClass_0682a480;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TristerixAphyllus_0682a6e8;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TristerixAphyllus::~PlantAnimRig_TristerixAphyllus() */

void __thiscall
PlantAnimRig_TristerixAphyllus::~PlantAnimRig_TristerixAphyllus
          (PlantAnimRig_TristerixAphyllus *this)

{
  ~PlantAnimRig_TristerixAphyllus(this + -0x10);
  return;
}


/* PlantAnimRig_TristerixAphyllus::~PlantAnimRig_TristerixAphyllus() */

void __thiscall
PlantAnimRig_TristerixAphyllus::~PlantAnimRig_TristerixAphyllus
          (PlantAnimRig_TristerixAphyllus *this)

{
  ~PlantAnimRig_TristerixAphyllus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TristerixAphyllus::~PlantAnimRig_TristerixAphyllus() */

void __thiscall
PlantAnimRig_TristerixAphyllus::~PlantAnimRig_TristerixAphyllus
          (PlantAnimRig_TristerixAphyllus *this)

{
  ~PlantAnimRig_TristerixAphyllus(this + -0x10);
  return;
}


/* PlantAnimRig_TristerixAphyllus::PlantAnimRig_TristerixAphyllus() */

void __thiscall
PlantAnimRig_TristerixAphyllus::PlantAnimRig_TristerixAphyllus(PlantAnimRig_TristerixAphyllus *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0682a480;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TristerixAphyllus_0682a6e8;
  Set8BytesTo0(this + 0x3b8);
  return;
}


/* PlantAnimRig_TristerixAphyllus::StaticNew() */

PlantAnimRig_TristerixAphyllus * PlantAnimRig_TristerixAphyllus::StaticNew(void)

{
  PlantAnimRig_TristerixAphyllus *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_TristerixAphyllus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TristerixAphyllus::StaticClassInit() */

void PlantAnimRig_TristerixAphyllus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_TristerixAphyllus");
    (*pcVar2)(plVar1,asStack_10,FUN_042a5ac8,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_TristerixAphyllus::StaticGetClass() */

long * PlantAnimRig_TristerixAphyllus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_TristerixAphyllus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_TristerixAphyllus::GetClass() const */

long * PlantAnimRig_TristerixAphyllus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_TristerixAphyllus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TristerixAphyllus::PlayBlssomLoop() */

void __thiscall PlantAnimRig_TristerixAphyllus::PlayBlssomLoop(PlantAnimRig_TristerixAphyllus *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"blssom_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TristerixAphyllus::ChangeBlssomLayer(int) */

void __thiscall
PlantAnimRig_TristerixAphyllus::ChangeBlssomLayer(PlantAnimRig_TristerixAphyllus *this,int param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  string *psVar4;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  string *this_00;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"03");
  std::string::string(asStack_38,"04");
  std::string::string(asStack_30,"06");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_88,asStack_40,3,
             (vector<std::string,std::allocator<std::string>> *)&local_58);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  nop();
  nop();
  nop();
  std::string::string(asStack_40,"01");
  std::string::string(asStack_38,"02");
  std::string::string(asStack_30,"05");
  std::string::string(asStack_28,"07");
  std::string::string(asStack_20,"08");
  std::string::string(asStack_18,"09");
  std::string::string(asStack_10,"10");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_70,asStack_40,7,
             (vector<std::string,std::allocator<std::string>> *)&local_58);
  psVar4 = (string *)&local_8;
  do {
    this_00 = psVar4;
    psVar4 = this_00 + -8;
    std::string::~string(psVar4);
  } while (psVar4 != asStack_40);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string(psVar4,"03lv5");
  std::string::string(this_00,"04lv5");
  std::string::string(this_00 + 8,"06lv5");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_58,psVar4,3,auStack_90);
  std::string::~string(this_00 + 8);
  std::string::~string(this_00);
  std::string::~string(psVar4);
  nop();
  nop();
  nop();
  uVar3 = 0;
  while( true ) {
    uVar1 = local_88;
    uVar2 = FUN_042a536c(local_88,local_80);
    if (uVar2 <= uVar3) break;
    psVar4 = (string *)FUN_042a5378(uVar1,uVar3);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1 == 0);
    uVar3 = uVar3 + 1;
  }
  uVar3 = 0;
  while( true ) {
    uVar1 = local_70;
    uVar2 = FUN_042a536c(local_70,local_68);
    if (uVar2 <= uVar3) break;
    psVar4 = (string *)FUN_042a5378(uVar1,uVar3);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1 == 1);
    uVar3 = uVar3 + 1;
  }
  uVar3 = 0;
  while( true ) {
    uVar1 = local_58;
    uVar2 = FUN_042a536c(local_58,local_50);
    if (uVar2 <= uVar3) break;
    psVar4 = (string *)FUN_042a5378(uVar1,uVar3);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1 == 2);
    uVar3 = uVar3 + 1;
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_58);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_70);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

