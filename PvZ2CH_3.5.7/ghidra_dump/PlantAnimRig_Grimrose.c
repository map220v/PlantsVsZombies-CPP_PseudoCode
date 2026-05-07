// Class: PlantAnimRig_Grimrose


/* PlantAnimRig_Grimrose::PlantAnimRig_Grimrose() */

void __thiscall PlantAnimRig_Grimrose::PlantAnimRig_Grimrose(PlantAnimRig_Grimrose *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0673f2c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Grimrose_0673f528;
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_Grimrose::StaticNew() */

PlantAnimRig_Grimrose * PlantAnimRig_Grimrose::StaticNew(void)

{
  PlantAnimRig_Grimrose *this;
  
  this = ::operator_new(0x410);
  PlantAnimRig_Grimrose(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Grimrose::StaticClassInit() */

void PlantAnimRig_Grimrose::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Grimrose");
    (*pcVar2)(plVar1,asStack_10,FUN_03be456c,0x410,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Grimrose::StaticGetClass() */

long * PlantAnimRig_Grimrose::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Grimrose",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Grimrose::GetClass() const */

long * PlantAnimRig_Grimrose::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Grimrose",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Grimrose::SetNumTimesCanBeUse(int, int) */

void __thiscall
PlantAnimRig_Grimrose::SetNumTimesCanBeUse(PlantAnimRig_Grimrose *this,int param_1,int param_2)

{
  *(int *)(this + 0x400) = param_1;
  *(int *)(this + 0x404) = param_2;
  return;
}


/* PlantAnimRig_Grimrose::SetNumTimesCurrentlyUsed(int) */

void __thiscall
PlantAnimRig_Grimrose::SetNumTimesCurrentlyUsed(PlantAnimRig_Grimrose *this,int param_1)

{
  *(int *)(this + 0x408) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Grimrose::PlayFadeAway(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Grimrose::PlayFadeAway(PlantAnimRig_Grimrose *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"disappear");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Grimrose::PlayPlantfoodBegin(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Grimrose::PlayPlantfoodBegin(PlantAnimRig_Grimrose *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood_start");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Grimrose::PlayPlantfoodLoop(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Grimrose::PlayPlantfoodLoop(PlantAnimRig_Grimrose *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood_loop");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Grimrose::PlayPlantfoodEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Grimrose::PlayPlantfoodEnd(PlantAnimRig_Grimrose *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Grimrose::updateNonBoostedStymens() */

void __thiscall PlantAnimRig_Grimrose::updateNonBoostedStymens(PlantAnimRig_Grimrose *this)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  string *psVar7;
  float fVar8;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ace930 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ace930), iVar3 != 0)) {
    std::string::string(asStack_20,"grim_stymen_left");
    std::string::string(asStack_18,"grim_stymen2_right");
    std::string::string(asStack_10,"grim_stymen_middle");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06ace8e8,asStack_20,3,
               &local_28);
    __cxa_guard_release(&DAT_06ace930);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ace8e8,
                 &DAT_06a88000);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    nop();
    nop();
    nop();
  }
  uVar4 = FUN_03be2800(DAT_06ace8e8,DAT_06ace8f0);
  fVar8 = (float)std::ceil(((float)*(int *)(this + 0x400) / (float)uVar4) *
                           (float)*(int *)(this + 0x408));
  uVar1 = (long)fVar8 + 2;
  if ((long)fVar8 != -2) {
    uVar5 = 0;
    while (uVar5 < uVar4) {
      psVar7 = (string *)
               std::vector<std::string,std::allocator<std::string>>::at
                         ((vector<std::string,std::allocator<std::string>> *)&DAT_06ace8e8,uVar5);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar7,false);
      if (uVar1 == uVar5 + 1) break;
      uVar4 = FUN_03be2800(DAT_06ace8e8,DAT_06ace8f0);
      uVar5 = uVar5 + 1;
    }
    uVar4 = 0;
    do {
      uVar5 = FUN_03be280c(k_explosionStymenLayers,DAT_06ace9a8);
      if (uVar5 <= uVar4) break;
      puVar6 = (undefined8 *)
               std::
               vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
               ::at((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                     *)&k_explosionStymenLayers,uVar4);
      local_30 = FUN_03be4404(*puVar6);
      local_28 = FUN_03be4454(puVar6[1]);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar2) {
        psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar7,false);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Grimrose::updateBoostedStymens() */

void __thiscall PlantAnimRig_Grimrose::updateBoostedStymens(PlantAnimRig_Grimrose *this)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  string *psVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ace9d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ace9d0), iVar2 != 0)) {
    std::string::string(asStack_20,"grim_stymen_dark_left");
    std::string::string(asStack_18,"grim_stymen2_dark");
    std::string::string(asStack_10,"grim_stymen_dark_middle");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06ace9f8,asStack_20,3,
               &local_28);
    __cxa_guard_release(&DAT_06ace9d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ace9f8,
                 &DAT_06a88000);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    nop();
    nop();
    nop();
  }
  uVar3 = FUN_03be2800(DAT_06ace9f8,DAT_06acea00);
  fVar8 = (float)std::ceil(((float)*(int *)(this + 0x404) / (float)uVar3) *
                           (float)*(int *)(this + 0x408));
  uVar7 = (ulong)fVar8;
  uVar6 = 0;
  if (uVar7 != 0) {
    while (uVar6 < uVar3) {
      psVar5 = (string *)
               std::vector<std::string,std::allocator<std::string>>::at
                         ((vector<std::string,std::allocator<std::string>> *)&DAT_06ace9f8,uVar6);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,false);
      if (uVar6 + 1 == uVar7) break;
      uVar3 = FUN_03be2800(DAT_06ace9f8,DAT_06acea00);
      uVar6 = uVar6 + 1;
    }
    uVar6 = 0;
    do {
      uVar3 = FUN_03be280c(k_explosionStymenLayers,DAT_06ace9a8);
      if (uVar3 <= uVar6) break;
      puVar4 = (undefined8 *)
               std::
               vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
               ::at((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                     *)&k_explosionStymenLayers,uVar6);
      local_30 = FUN_03be4404(*puVar4);
      local_28 = FUN_03be4454(puVar4[1]);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,false);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAnimRig_Grimrose::updateStymenLayerVisability(std::string const&) */

void __thiscall
PlantAnimRig_Grimrose::updateStymenLayerVisability(PlantAnimRig_Grimrose *this,string *param_1)

{
  char cVar1;
  
  cVar1 = std::operator==(param_1,(string *)&PlantGrimrose::k_boostedLayerSetName);
  if (cVar1 != '\0') {
    updateBoostedStymens(this);
    return;
  }
  cVar1 = std::operator==(param_1,(string *)&PlantGrimrose::k_normalLayerSetName);
  if (cVar1 == '\0') {
    return;
  }
  updateNonBoostedStymens(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Grimrose::ShowLayerSet(std::string) */

void __thiscall PlantAnimRig_Grimrose::ShowLayerSet(PlantAnimRig_Grimrose *this,string *param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  AnimRigLayerSet::ShowSet((AnimRigLayerSet *)(this + 0x3b8),this,asStack_10);
  std::string::~string(asStack_10);
  updateStymenLayerVisability(this,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Grimrose::~PlantAnimRig_Grimrose() */

void __thiscall PlantAnimRig_Grimrose::~PlantAnimRig_Grimrose(PlantAnimRig_Grimrose *this)

{
  *(undefined ***)this = &PTR_GetClass_0673f2c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Grimrose_0673f528;
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Grimrose::~PlantAnimRig_Grimrose() */

void __thiscall PlantAnimRig_Grimrose::~PlantAnimRig_Grimrose(PlantAnimRig_Grimrose *this)

{
  ~PlantAnimRig_Grimrose(this + -0x10);
  return;
}


/* PlantAnimRig_Grimrose::~PlantAnimRig_Grimrose() */

void __thiscall PlantAnimRig_Grimrose::~PlantAnimRig_Grimrose(PlantAnimRig_Grimrose *this)

{
  ~PlantAnimRig_Grimrose(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Grimrose::~PlantAnimRig_Grimrose() */

void __thiscall PlantAnimRig_Grimrose::~PlantAnimRig_Grimrose(PlantAnimRig_Grimrose *this)

{
  ~PlantAnimRig_Grimrose(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Grimrose::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Grimrose::onPopAnimInitialized(PlantAnimRig_Grimrose *this)

{
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x408) = 0;
  FUN_05475d88(asStack_28,&PlantGrimrose::k_normalLayerSetName);
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_20,(vector *)k_baseNormalLayers);
  PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBabyBruit *)this,asStack_28,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  FUN_05475d88(asStack_28,&PlantGrimrose::k_boostedLayerSetName);
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_20,(vector *)k_baseBoostedLayers);
  PlantAnimRig_DragonBabyBruit::AddBoostedLayerSet
            ((PlantAnimRig_DragonBabyBruit *)this,asStack_28,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Grimrose::PlayPreviewAnim(bool) */

void PlantAnimRig_Grimrose::PlayPreviewAnim(bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&PlantGrimrose::k_normalLayerSetName);
  ShowLayerSet((PlantAnimRig_Grimrose *)(ulong)param_1,asStack_10);
  std::string::~string(asStack_10);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

