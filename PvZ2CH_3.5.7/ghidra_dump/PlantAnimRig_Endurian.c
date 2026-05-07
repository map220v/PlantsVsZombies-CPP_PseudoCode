// Class: PlantAnimRig_Endurian


/* PlantAnimRig_Endurian::~PlantAnimRig_Endurian() */

void __thiscall PlantAnimRig_Endurian::~PlantAnimRig_Endurian(PlantAnimRig_Endurian *this)

{
  *(undefined ***)this = &PTR_GetClass_067de400;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Endurian_067de668;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Endurian::~PlantAnimRig_Endurian() */

void __thiscall PlantAnimRig_Endurian::~PlantAnimRig_Endurian(PlantAnimRig_Endurian *this)

{
  ~PlantAnimRig_Endurian(this + -0x10);
  return;
}


/* PlantAnimRig_Endurian::~PlantAnimRig_Endurian() */

void __thiscall PlantAnimRig_Endurian::~PlantAnimRig_Endurian(PlantAnimRig_Endurian *this)

{
  ~PlantAnimRig_Endurian(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Endurian::~PlantAnimRig_Endurian() */

void __thiscall PlantAnimRig_Endurian::~PlantAnimRig_Endurian(PlantAnimRig_Endurian *this)

{
  ~PlantAnimRig_Endurian(this + -0x10);
  return;
}


/* PlantAnimRig_Endurian::PlantAnimRig_Endurian() */

void __thiscall PlantAnimRig_Endurian::PlantAnimRig_Endurian(PlantAnimRig_Endurian *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067de400;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Endurian_067de668;
  return;
}


/* PlantAnimRig_Endurian::StaticNew() */

PlantAnimRig_Endurian * PlantAnimRig_Endurian::StaticNew(void)

{
  PlantAnimRig_Endurian *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Endurian(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Endurian::StaticClassInit() */

void PlantAnimRig_Endurian::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Endurian");
    (*pcVar2)(plVar1,asStack_10,FUN_040e50c0,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Endurian::StaticGetClass() */

long * PlantAnimRig_Endurian::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Endurian",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Endurian::GetClass() const */

long * PlantAnimRig_Endurian::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Endurian",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Endurian::StartAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Endurian::StartAttack(PlantAnimRig_Endurian *this,RtReflectionDelegate *param_2)

{
  char *__s;
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x22c) == 0) {
    if (this[0x220] == (PlantAnimRig_Endurian)0x0) {
      __s = "attack_start";
    }
    else {
      __s = "attack_start2";
    }
    std::string::string(asStack_58,__s);
    nop();
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
  }
  else {
    std::string::string(asStack_60,"attack_start_damage");
    PopAnimRig::CalcVariationLabelName((string *)this,(int)asStack_60);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    nop();
  }
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Endurian::LoopAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Endurian::LoopAttack(PlantAnimRig_Endurian *this,RtReflectionDelegate *param_2)

{
  char *__s;
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x22c) == 0) {
    if (this[0x220] == (PlantAnimRig_Endurian)0x0) {
      __s = "attack_loop";
    }
    else {
      __s = "attack_loop2";
    }
    std::string::string(asStack_58,__s);
    nop();
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
  }
  else {
    std::string::string(asStack_60,"attack_loop_damage");
    PopAnimRig::CalcVariationLabelName((string *)this,(int)asStack_60);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    nop();
  }
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Endurian::StopAttacking(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Endurian::StopAttacking(PlantAnimRig_Endurian *this,RtReflectionDelegate *param_2)

{
  char *__s;
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x22c) == 0) {
    if (this[0x220] == (PlantAnimRig_Endurian)0x0) {
      __s = "attack_end";
    }
    else {
      __s = "attack_end2";
    }
    std::string::string(asStack_58,__s);
    nop();
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
  }
  else {
    std::string::string(asStack_60,"attack_end_damage");
    PopAnimRig::CalcVariationLabelName((string *)this,(int)asStack_60);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
    nop();
  }
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Endurian::SetArmorPct(float) */

void __thiscall PlantAnimRig_Endurian::SetArmorPct(PlantAnimRig_Endurian *this,float param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  string *psVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  uVar9 = DAT_06aec918 & 1;
  local_8 = ___stack_chk_guard;
  if (((DAT_06aec918 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_06aec918), iVar7 != 0)) {
    std::string::string((string *)&DAT_06aec978,"PF_armor_1");
    nop();
    std::string::string((string *)&DAT_06aec980,"PF_spike1");
    nop();
    std::string::string((string *)&DAT_06aec988,"PF_spike7");
    nop();
    std::string::string((string *)&DAT_06aec990,"PF_spike8");
    nop();
    __cxa_guard_release(&DAT_06aec918);
    __cxa_atexit(FUN_040e4834,uVar9,&DAT_06a88000);
  }
  if (((DAT_06aeca28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_06aeca28), iVar7 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aecad8,(string *)&DAT_06aec978,(allocator *)&DAT_06aec998);
    __cxa_guard_release(&DAT_06aeca28);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aecad8,
                 &DAT_06a88000);
  }
  uVar9 = DAT_06aeca88 & 1;
  if (((DAT_06aeca88 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_06aeca88), iVar7 != 0)) {
    std::string::string((string *)&DAT_06aec9c8,"armor2");
    nop();
    std::string::string((string *)&DAT_06aec9d0,"PF_spike2");
    nop();
    std::string::string((string *)&DAT_06aec9d8,"PF_spike3");
    nop();
    std::string::string((string *)&DAT_06aec9e0,"PF_spike6");
    nop();
    __cxa_guard_release(&DAT_06aeca88);
    __cxa_atexit(FUN_040e47f8,uVar9,&DAT_06a88000);
  }
  if (((DAT_06aec9a0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_06aec9a0), iVar7 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aec9f0,(string *)&DAT_06aec9c8,(allocator *)&PlantEndurian::sClass);
    __cxa_guard_release(&DAT_06aec9a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aec9f0,
                 &DAT_06a88000);
  }
  uVar9 = DAT_06aec9c0 & 1;
  if (((DAT_06aec9c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_06aec9c0), iVar7 != 0)) {
    std::string::string((string *)&DAT_06aecab0,"armor_3");
    nop();
    std::string::string((string *)&DAT_06aecab8,"PF_spike4");
    nop();
    std::string::string((string *)&DAT_06aecac0,"PF_spike5");
    nop();
    __cxa_guard_release(&DAT_06aec9c0);
    __cxa_atexit(FUN_040e47c4,uVar9,&DAT_06a88000);
  }
  if (((DAT_06aec998 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_06aec998), iVar7 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aec938,(string *)&DAT_06aecab0,(allocator *)&DAT_06aecac8);
    __cxa_guard_release(&DAT_06aec998);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aec938,
                 &DAT_06a88000);
  }
  uVar9 = DAT_06aecaf8 & 1;
  if (((DAT_06aecaf8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_06aecaf8), iVar7 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06aeca30,
               (vector *)&DAT_06aecad8);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06aeca48,
               (vector *)&DAT_06aec9f0);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06aeca60,
               (vector *)&DAT_06aec938);
    __cxa_guard_release(&DAT_06aecaf8);
    __cxa_atexit(FUN_040e79f4,uVar9,&DAT_06a88000);
  }
  if (((DAT_06aec920 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_06aec920), iVar7 != 0)) {
    std::
    vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
    ::vector<std::vector<std::string,std::allocator<std::string>>*,void>
              ((vector *)&DAT_06aec958,(vector *)&DAT_06aeca30,(allocator *)&DAT_06aeca78);
    __cxa_guard_release(&DAT_06aec920);
    __cxa_atexit(std::
                 vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                 ::~vector,&DAT_06aec958,&DAT_06a88000);
  }
  uVar8 = DAT_06aec958;
  uVar9 = 0;
  uVar4 = FUN_040e4a18(DAT_06aec958,DAT_06aec960);
  iVar7 = (int)((float)uVar4 * (1.0 - param_1));
  if (uVar4 != 0) {
    do {
      bVar1 = iVar7 <= (int)uVar9;
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)FUN_040e4a2c(uVar8,uVar9);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            uVar8 = DAT_06aec958, bVar2) {
        psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        if (this[0x220] == (PlantAnimRig_Endurian)0x0) {
          PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar1);
          std::operator+(psVar5,"_1");
          PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
          std::string::~string(asStack_10);
        }
        else {
          std::operator+(psVar5,"_1");
          PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
          std::string::~string(asStack_10);
          PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,false);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
      }
      uVar9 = uVar9 + 1;
      uVar4 = FUN_040e4a18(DAT_06aec958,DAT_06aec960);
    } while (uVar9 < uVar4);
  }
  uVar9 = DAT_06aec970 & 1;
  if (((DAT_06aec970 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06aec970), iVar3 != 0)) {
    std::string::string((string *)&DAT_06aeca10,"armor_damage_1");
    nop();
    std::string::string((string *)&DAT_06aeca18,"armor_damage_2");
    nop();
    std::string::string((string *)&DAT_06aeca20,"armor_damage_3");
    nop();
    __cxa_guard_release(&DAT_06aec970);
    __cxa_atexit(FUN_040e4790,uVar9,&DAT_06a88000);
  }
  if (((DAT_06aec928 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06aec928), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06aeca98,(string *)&DAT_06aeca10,(allocator *)&DAT_06aeca28);
    __cxa_guard_release(&DAT_06aec928);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06aeca98,
                 &DAT_06a88000);
  }
  uVar8 = DAT_06aeca98;
  uVar9 = 0;
  lVar6 = FUN_040e4a38(DAT_06aeca98,DAT_06aecaa0);
  if (lVar6 != 0) {
    do {
      bVar1 = iVar7 == (int)uVar9;
      if (this[0x220] == (PlantAnimRig_Endurian)0x0) {
        psVar5 = (string *)FUN_040e4a44(uVar8,uVar9);
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,bVar1);
        psVar5 = (string *)FUN_040e4a44(DAT_06aeca98,uVar9);
        std::operator+(psVar5,"_attack");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
        std::string::~string(asStack_10);
        psVar5 = (string *)FUN_040e4a44(DAT_06aeca98,uVar9);
        std::operator+(psVar5,"_1");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
        std::string::~string(asStack_10);
        psVar5 = (string *)FUN_040e4a44(DAT_06aeca98,uVar9);
        std::operator+(psVar5,"_attack_1");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
        std::string::~string(asStack_10);
      }
      else {
        psVar5 = (string *)FUN_040e4a44(uVar8,uVar9);
        std::operator+(psVar5,"_1");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
        std::string::~string(asStack_10);
        psVar5 = (string *)FUN_040e4a44(DAT_06aeca98,uVar9);
        std::operator+(psVar5,"_attack_1");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
        std::string::~string(asStack_10);
        psVar5 = (string *)FUN_040e4a44(DAT_06aeca98,uVar9);
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,false);
        psVar5 = (string *)FUN_040e4a44(DAT_06aeca98,uVar9);
        std::operator+(psVar5,"_attack");
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
        std::string::~string(asStack_10);
      }
      uVar8 = DAT_06aeca98;
      uVar9 = uVar9 + 1;
      uVar4 = FUN_040e4a38(DAT_06aeca98,DAT_06aecaa0);
    } while (uVar9 < uVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Endurian::GetArmorLayers() */

void __thiscall PlantAnimRig_Endurian::GetArmorLayers(PlantAnimRig_Endurian *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::string::string(asStack_10,"PF_armor_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor2");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_3");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike2");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike3");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike4");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike5");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike6");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike7");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike8");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_armor_1_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor2_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_3_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike1_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike2_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike3_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike4_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike5_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike6_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike7_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PF_spike8_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_2");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_3");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_1_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_2_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_3_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_1_attack");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_2_attack");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_3_attack");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_1_attack_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_2_attack_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"armor_damage_3_attack_1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Endurian::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Endurian::onPopAnimInitialized(PlantAnimRig_Endurian *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  SetArmorPct(this,0.0);
  return;
}

