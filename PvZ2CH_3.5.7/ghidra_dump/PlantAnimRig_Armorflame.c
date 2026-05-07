// Class: PlantAnimRig_Armorflame


/* PlantAnimRig_Armorflame::~PlantAnimRig_Armorflame() */

void __thiscall PlantAnimRig_Armorflame::~PlantAnimRig_Armorflame(PlantAnimRig_Armorflame *this)

{
  *(undefined ***)this = &PTR_GetClass_0682cfb0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Armorflame_0682d218;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Armorflame::~PlantAnimRig_Armorflame() */

void __thiscall PlantAnimRig_Armorflame::~PlantAnimRig_Armorflame(PlantAnimRig_Armorflame *this)

{
  ~PlantAnimRig_Armorflame(this + -0x10);
  return;
}


/* PlantAnimRig_Armorflame::~PlantAnimRig_Armorflame() */

void __thiscall PlantAnimRig_Armorflame::~PlantAnimRig_Armorflame(PlantAnimRig_Armorflame *this)

{
  ~PlantAnimRig_Armorflame(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Armorflame::~PlantAnimRig_Armorflame() */

void __thiscall PlantAnimRig_Armorflame::~PlantAnimRig_Armorflame(PlantAnimRig_Armorflame *this)

{
  ~PlantAnimRig_Armorflame(this + -0x10);
  return;
}


/* PlantAnimRig_Armorflame::PlantAnimRig_Armorflame() */

void __thiscall PlantAnimRig_Armorflame::PlantAnimRig_Armorflame(PlantAnimRig_Armorflame *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0682cfb0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Armorflame_0682d218;
  return;
}


/* PlantAnimRig_Armorflame::StaticNew() */

PlantAnimRig_Armorflame * PlantAnimRig_Armorflame::StaticNew(void)

{
  PlantAnimRig_Armorflame *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Armorflame(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Armorflame::StaticClassInit() */

void PlantAnimRig_Armorflame::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Armorflame");
    (*pcVar2)(plVar1,asStack_10,FUN_042c0a58,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Armorflame::StaticGetClass() */

long * PlantAnimRig_Armorflame::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Armorflame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Armorflame::GetClass() const */

long * PlantAnimRig_Armorflame::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Armorflame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Armorflame::PlayLevel5Attack() */

void __thiscall PlantAnimRig_Armorflame::PlayLevel5Attack(PlantAnimRig_Armorflame *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attacklv5");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Armorflame::SetEnhancementLevel(int) */

void __thiscall
PlantAnimRig_Armorflame::SetEnhancementLevel(PlantAnimRig_Armorflame *this,int param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  string *psVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = ___stack_chk_guard;
  uVar6 = DAT_06af6700 & 1;
  if (((DAT_06af6700 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06af6700), iVar3 != 0)) {
    std::string::string((string *)&DAT_06af6658,"backflame_red");
    nop();
    std::string::string((string *)&DAT_06af6660,"_armorflame_fire02_red");
    nop();
    std::string::string((string *)&DAT_06af6668,"armorflame_fire_facered");
    nop();
    __cxa_guard_release(&DAT_06af6700);
    __cxa_atexit(FUN_042bff48,uVar6,&DAT_06a88000);
  }
  if (((DAT_06af6620 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06af6620), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06af65f8,(string *)&DAT_06af6658,(allocator *)&DAT_06af6670);
    __cxa_guard_release(&DAT_06af6620);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06af65f8,
                 &DAT_06a88000);
  }
  uVar6 = DAT_06af6670 & 1;
  if (((DAT_06af6670 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06af6670), iVar3 != 0)) {
    std::string::string((string *)&DAT_06af6678,"backflame_blue");
    nop();
    std::string::string((string *)&DAT_06af6680,"_armorflame_fire02_blue");
    nop();
    std::string::string((string *)&DAT_06af6688,"armorflame_fire_faceblue");
    nop();
    __cxa_guard_release(&DAT_06af6670);
    __cxa_atexit(FUN_042bff14,uVar6,&DAT_06a88000);
  }
  if (((DAT_06af6708 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06af6708), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06af6738,(string *)&DAT_06af6678,(allocator *)&DAT_06af6690);
    __cxa_guard_release(&DAT_06af6708);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06af6738,
                 &DAT_06a88000);
  }
  uVar6 = DAT_06af6788 & 1;
  if (((DAT_06af6788 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06af6788), iVar3 != 0)) {
    std::string::string((string *)&DAT_06af6770,"backflame_purple");
    nop();
    std::string::string((string *)&DAT_06af6778,"_armorflame_fire02_purple");
    nop();
    std::string::string((string *)&DAT_06af6780,"armorflame_fire_facepurple");
    nop();
    __cxa_guard_release(&DAT_06af6788);
    __cxa_atexit(FUN_042bfee0,uVar6,&DAT_06a88000);
  }
  if (((DAT_06af6628 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06af6628), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06af6758,(string *)&DAT_06af6770,(allocator *)&DAT_06af6788);
    __cxa_guard_release(&DAT_06af6628);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06af6758,
                 &DAT_06a88000);
  }
  lVar5 = 0;
  do {
    psVar4 = (string *)FUN_042c0180(DAT_06af65f8,lVar5);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1 == 1);
    psVar4 = (string *)FUN_042c0180(DAT_06af6738,lVar5);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1 == 2);
    lVar1 = lVar5 + 1;
    psVar4 = (string *)FUN_042c0180(DAT_06af6758,lVar5);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1 == 3);
    lVar5 = lVar1;
  } while (lVar1 != 3);
  if (lVar2 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAnimRig_Armorflame::PlayPreviewAnim(bool) */

void PlantAnimRig_Armorflame::PlayPreviewAnim(bool param_1)

{
  SetEnhancementLevel((PlantAnimRig_Armorflame *)(ulong)param_1,0);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  return;
}

