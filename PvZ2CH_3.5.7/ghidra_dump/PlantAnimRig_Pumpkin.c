// Class: PlantAnimRig_Pumpkin


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pumpkin::CalcPlantFoodDuration(int) */

void PlantAnimRig_Pumpkin::CalcPlantFoodDuration(int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"plantfood_on");
  uVar1 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)(ulong)(uint)param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pumpkin::getIdleAnimationName() */

void __thiscall PlantAnimRig_Pumpkin::getIdleAnimationName(PlantAnimRig_Pumpkin *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle1");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Pumpkin::PlayPlantFoodEnd() */

void __thiscall PlantAnimRig_Pumpkin::PlayPlantFoodEnd(PlantAnimRig_Pumpkin *this)

{
  this[0x3bc] = (PlantAnimRig_Pumpkin)0x1;
  (**(code **)(*(long *)this + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pumpkin::getPlantFoodMainAnimName() */

void PlantAnimRig_Pumpkin::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((*(char *)(in_x0 + 0x3be) == '\0') || (*(int *)(in_x0 + 0x224) != 5)) {
    __s = "plantfood";
  }
  else if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "pf_go";
  }
  else {
    __s = "custom_go";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Pumpkin::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Pumpkin::onPopAnimInitialized(PlantAnimRig_Pumpkin *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0xffffffff;
  return;
}


/* PlantAnimRig_Pumpkin::~PlantAnimRig_Pumpkin() */

void __thiscall PlantAnimRig_Pumpkin::~PlantAnimRig_Pumpkin(PlantAnimRig_Pumpkin *this)

{
  *(undefined ***)this = &PTR_GetClass_069a7b70;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Pumpkin_069a7de8;
  PlantAnimRig_Shielded::~PlantAnimRig_Shielded((PlantAnimRig_Shielded *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Pumpkin::~PlantAnimRig_Pumpkin() */

void __thiscall PlantAnimRig_Pumpkin::~PlantAnimRig_Pumpkin(PlantAnimRig_Pumpkin *this)

{
  ~PlantAnimRig_Pumpkin(this + -0x10);
  return;
}


/* PlantAnimRig_Pumpkin::~PlantAnimRig_Pumpkin() */

void __thiscall PlantAnimRig_Pumpkin::~PlantAnimRig_Pumpkin(PlantAnimRig_Pumpkin *this)

{
  ~PlantAnimRig_Pumpkin(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Pumpkin::~PlantAnimRig_Pumpkin() */

void __thiscall PlantAnimRig_Pumpkin::~PlantAnimRig_Pumpkin(PlantAnimRig_Pumpkin *this)

{
  ~PlantAnimRig_Pumpkin(this + -0x10);
  return;
}


/* PlantAnimRig_Pumpkin::PlantAnimRig_Pumpkin() */

void __thiscall PlantAnimRig_Pumpkin::PlantAnimRig_Pumpkin(PlantAnimRig_Pumpkin *this)

{
  PlantAnimRig_Shielded::PlantAnimRig_Shielded((PlantAnimRig_Shielded *)this);
  this[0x3bc] = (PlantAnimRig_Pumpkin)0x0;
  this[0x3bd] = (PlantAnimRig_Pumpkin)0x0;
  *(undefined ***)this = &PTR_GetClass_069a7b70;
  this[0x3be] = (PlantAnimRig_Pumpkin)0x0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Pumpkin_069a7de8;
  return;
}


/* PlantAnimRig_Pumpkin::StaticNew() */

PlantAnimRig_Pumpkin * PlantAnimRig_Pumpkin::StaticNew(void)

{
  PlantAnimRig_Pumpkin *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Pumpkin(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pumpkin::StaticClassInit() */

void PlantAnimRig_Pumpkin::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Pumpkin");
    (*pcVar2)(plVar1,asStack_10,FUN_04d0e580,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Pumpkin::StaticGetClass() */

long * PlantAnimRig_Pumpkin::StaticGetClass(void)

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
  uVar2 = PlantAnimRig_Shielded::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Pumpkin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Pumpkin::GetClass() const */

long * PlantAnimRig_Pumpkin::GetClass(void)

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
  uVar2 = PlantAnimRig_Shielded::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Pumpkin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pumpkin::PlayDeathAnim(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Pumpkin::PlayDeathAnim(PlantAnimRig_Pumpkin *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_lv5");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pumpkin::PlayLevel2Skill(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void PlantAnimRig_Pumpkin::PlayLevel2Skill(PopAnimRig *param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x3bd] == (PopAnimRig)0x0) {
    std::string::string(asStack_40,"lv2_go");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar1 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    PlantAnimRig::SetState((PlantAnimRig *)param_1,1);
  }
  else {
    std::string::string(asStack_40,"gene_lv2_go");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar1 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    PlantAnimRig::SetState((PlantAnimRig *)param_1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pumpkin::PlayLevel3Skill(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void PlantAnimRig_Pumpkin::PlayLevel3Skill(PopAnimRig *param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x3bd] == (PopAnimRig)0x0) {
    std::string::string(asStack_40,"lv3_go");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar1 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    PlantAnimRig::SetState((PlantAnimRig *)param_1,1);
  }
  else {
    std::string::string(asStack_40,"gene_lv3_go");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar1 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    PlantAnimRig::SetState((PlantAnimRig *)param_1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pumpkin::PlayIdleLooped() */

void __thiscall PlantAnimRig_Pumpkin::PlayIdleLooped(PlantAnimRig_Pumpkin *this)

{
  bool bVar1;
  undefined8 uVar2;
  string asStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  string *psVar3;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_d8,"idle");
  nop();
  std::string::string(asStack_c8,"1");
  nop();
  std::string::string(asStack_c0,"2");
  nop();
  std::string::string(asStack_b8,"3");
  nop();
  std::string::string(asStack_b0,"1");
  nop();
  std::string::string(asStack_a8,"2_lv5");
  nop();
  std::string::string(asStack_a0,"3_lv5");
  nop();
  std::string::string(asStack_98,"_pf_01");
  nop();
  std::string::string(asStack_90,"_pf_02");
  nop();
  std::string::string(asStack_88,"_pf_03");
  nop();
  std::string::string(asStack_80,"_pf_04");
  nop();
  std::string::string(asStack_78,"_custom_01");
  nop();
  std::string::string(asStack_70,"_custom_02");
  nop();
  std::string::string(asStack_68,"_custom_03");
  nop();
  std::string::string(asStack_60,"_custom_04");
  nop();
  std::string::string(asStack_58,"_gene_01");
  nop();
  std::string::string(asStack_50,"_gene_02");
  nop();
  std::string::string(asStack_48,"_gene_03");
  nop();
  psVar3 = asStack_d0;
  std::string::string(asStack_40,"_gene_03");
  nop();
  if (this[0x3bc] == (PlantAnimRig_Pumpkin)0x0) {
    if (this[0x3bd] == (PlantAnimRig_Pumpkin)0x0) {
      if (*(int *)(this + 0x224) == 5) {
        uVar2 = FUN_0547429c(asStack_b0 + (long)*(int *)(this + 0x22c) * 8);
        Sexy::StrFormat("%s",asStack_d0,uVar2);
        thunk_FUN_054757c0(asStack_d8,asStack_d0);
        std::string::~string(asStack_d0);
        bVar1 = std::operator==(asStack_d8,"idle3_lv5");
        if (bVar1) {
          std::string::append(asStack_d8,"attack_lv5_loop",(size_t)psVar3);
        }
        goto LAB_04d0ee38;
      }
      psVar3 = asStack_c8 + (long)*(int *)(this + 0x22c) * 8;
    }
    else {
      psVar3 = asStack_58 + (long)*(int *)(this + 0x3b8) * 8;
    }
  }
  else if (this[0x220] == (PlantAnimRig_Pumpkin)0x0) {
    psVar3 = asStack_98 + (long)*(int *)(this + 0x3b8) * 8;
  }
  else {
    psVar3 = asStack_78 + (long)*(int *)(this + 0x3b8) * 8;
  }
  uVar2 = FUN_0547429c(psVar3);
  Sexy::StrFormat("%s",asStack_d0,uVar2);
  thunk_FUN_054757c0(asStack_d8,asStack_d0);
  std::string::~string(asStack_d0);
LAB_04d0ee38:
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_d8,0,aDStack_38);
  PlantAnimRig::SetState((PlantAnimRig *)this,1);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  std::string::~string(asStack_90);
  std::string::~string(asStack_98);
  std::string::~string(asStack_a0);
  std::string::~string(asStack_a8);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  std::string::~string(asStack_c0);
  std::string::~string(asStack_c8);
  std::string::~string(asStack_d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pumpkin::getArmorStateLayerNames() const */

void __thiscall PlantAnimRig_Pumpkin::getArmorStateLayerNames(PlantAnimRig_Pumpkin *this)

{
  long lVar1;
  int iVar2;
  string *psVar3;
  string *psVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  lVar1 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_Pumpkin)0x0) {
    uVar5 = DAT_06b96ba0 & 1;
    if (((DAT_06b96ba0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b96ba0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b96c18,"pumpkin_pf_01");
      nop();
      std::string::string((string *)&DAT_06b96c20,"pumpkin_pf_02");
      nop();
      std::string::string((string *)&DAT_06b96c28,"pumpkin_pf_03");
      nop();
      std::string::string((string *)&DAT_06b96c30,"pumpkin_pf_04");
      nop();
      __cxa_guard_release(&DAT_06b96ba0);
      __cxa_atexit(FUN_04d0daec,uVar5,&DAT_06a88000);
    }
    puVar6 = &DAT_06b96c88;
    if (((DAT_06b96c88 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b96c88), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b96c68;
      goto LAB_04d1026c;
    }
    psVar3 = (string *)&DAT_06b96c68;
    psVar4 = (string *)&DAT_06b96c18;
  }
  else {
    uVar5 = DAT_06b96c10 & 1;
    if (((DAT_06b96c10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b96c10), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b96bb0,"pumpkin_pf_custom_01");
      nop();
      std::string::string((string *)&DAT_06b96bb8,"pumpkin_pf_custom_02");
      nop();
      std::string::string((string *)&DAT_06b96bc0,"pumpkin_pf_custom_03");
      nop();
      std::string::string((string *)&DAT_06b96bc8,"pumpkin_pf_custom_04");
      nop();
      __cxa_guard_release(&DAT_06b96c10);
      __cxa_atexit(FUN_04d0db28,uVar5,&DAT_06a88000);
    }
    puVar6 = &DAT_06b96b98;
    if (((DAT_06b96b98 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06b96b98), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06b96be8;
      goto LAB_04d1026c;
    }
    psVar3 = (string *)&DAT_06b96be8;
    psVar4 = (string *)&DAT_06b96bb0;
  }
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            (psVar3,psVar4,(allocator *)(psVar4 + 0x20));
  __cxa_guard_release(puVar6);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,psVar3,&DAT_06a88000);
LAB_04d1026c:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(psVar3);
}


/* PlantAnimRig_Pumpkin::GetArmorStateCount() */

void __thiscall PlantAnimRig_Pumpkin::GetArmorStateCount(PlantAnimRig_Pumpkin *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)getArmorStateLayerNames(this);
  FUN_04d0dd10(*puVar1,puVar1[1]);
  return;
}


/* PlantAnimRig_Pumpkin::SetArmorStateIndex(int) */

void __thiscall PlantAnimRig_Pumpkin::SetArmorStateIndex(PlantAnimRig_Pumpkin *this,int param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  string *psVar4;
  long lVar5;
  
  if (this[0x3bc] == (PlantAnimRig_Pumpkin)0x0) {
    if ((this[0x3bd] != (PlantAnimRig_Pumpkin)0x0) &&
       (*(int *)(this + 0x3b8) = param_1, 3 < param_1)) {
      this[0x3bd] = (PlantAnimRig_Pumpkin)0x0;
    }
  }
  else {
    iVar2 = (**(code **)(*(long *)this + 600))();
    *(int *)(this + 0x3b8) = param_1;
    lVar5 = 0;
    if (0 < iVar2) {
      do {
        puVar3 = (undefined8 *)getArmorStateLayerNames(this);
        lVar1 = lVar5 + 1;
        psVar4 = (string *)FUN_04d0dd1c(*puVar3,lVar5);
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1 == (int)lVar5);
        lVar5 = lVar1;
      } while ((int)lVar1 < iVar2);
    }
    if (iVar2 <= param_1) {
      this[0x3bc] = (PlantAnimRig_Pumpkin)0x0;
      return;
    }
  }
  return;
}

