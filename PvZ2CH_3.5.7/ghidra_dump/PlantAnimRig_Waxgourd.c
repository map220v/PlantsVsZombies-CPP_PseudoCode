// Class: PlantAnimRig_Waxgourd


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Waxgourd::StaticClassInit() */

void PlantAnimRig_Waxgourd::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Waxgourd");
    (*pcVar2)(plVar1,asStack_10,FUN_04258330,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Waxgourd::StaticGetClass() */

long * PlantAnimRig_Waxgourd::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Waxgourd",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Waxgourd::GetClass() const */

long * PlantAnimRig_Waxgourd::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Waxgourd",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Waxgourd::~PlantAnimRig_Waxgourd() */

void __thiscall PlantAnimRig_Waxgourd::~PlantAnimRig_Waxgourd(PlantAnimRig_Waxgourd *this)

{
  *(undefined ***)this = &PTR_GetClass_0681acf0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Waxgourd_0681af58;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Waxgourd::~PlantAnimRig_Waxgourd() */

void __thiscall PlantAnimRig_Waxgourd::~PlantAnimRig_Waxgourd(PlantAnimRig_Waxgourd *this)

{
  ~PlantAnimRig_Waxgourd(this + -0x10);
  return;
}


/* PlantAnimRig_Waxgourd::~PlantAnimRig_Waxgourd() */

void __thiscall PlantAnimRig_Waxgourd::~PlantAnimRig_Waxgourd(PlantAnimRig_Waxgourd *this)

{
  ~PlantAnimRig_Waxgourd(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Waxgourd::~PlantAnimRig_Waxgourd() */

void __thiscall PlantAnimRig_Waxgourd::~PlantAnimRig_Waxgourd(PlantAnimRig_Waxgourd *this)

{
  ~PlantAnimRig_Waxgourd(this + -0x10);
  return;
}


/* PlantAnimRig_Waxgourd::PlantAnimRig_Waxgourd() */

void __thiscall PlantAnimRig_Waxgourd::PlantAnimRig_Waxgourd(PlantAnimRig_Waxgourd *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0681acf0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Waxgourd_0681af58;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_Waxgourd::StaticNew() */

PlantAnimRig_Waxgourd * PlantAnimRig_Waxgourd::StaticNew(void)

{
  PlantAnimRig_Waxgourd *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Waxgourd(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Waxgourd::getIdleAnimationName() */

void PlantAnimRig_Waxgourd::getIdleAnimationName(void)

{
  RtMixedPtr<Sexy::Image> *this;
  long lVar1;
  char cVar2;
  long in_x0;
  long lVar3;
  Plant *pPVar4;
  string *in_x8;
  float fVar5;
  float fVar6;
  
  lVar1 = ___stack_chk_guard;
  this = (RtMixedPtr<Sexy::Image> *)(in_x0 + 0x3b8);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this);
  if (cVar2 == '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    fVar5 = (float)FUN_04256ea4(*(undefined4 *)(lVar3 + 0xd8));
    pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
    fVar6 = (float)Plant::GetMaxHealth(pPVar4);
    if (fVar5 <= fVar6 * 0.6666667) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      fVar5 = (float)FUN_04256ea4(*(undefined4 *)(lVar3 + 0xd8));
      pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      fVar6 = (float)Plant::GetMaxHealth(pPVar4);
      if (fVar6 * 0.33333334 < fVar5) {
        std::string::string(in_x8,"damage1");
        nop();
      }
      else {
        std::string::string(in_x8,"damage2");
        nop();
      }
      goto LAB_04257aac;
    }
  }
  std::string::string(in_x8,"idle");
  nop();
LAB_04257aac:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Waxgourd::getAttackAnimationName() */

void PlantAnimRig_Waxgourd::getAttackAnimationName(void)

{
  RtMixedPtr<Sexy::Image> *this;
  long lVar1;
  char cVar2;
  long in_x0;
  long lVar3;
  Plant *pPVar4;
  string *in_x8;
  float fVar5;
  float fVar6;
  
  lVar1 = ___stack_chk_guard;
  this = (RtMixedPtr<Sexy::Image> *)(in_x0 + 0x3b8);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this);
  if (cVar2 == '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    if (*(int *)(lVar3 + 200) == 0xc) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      fVar5 = (float)FUN_04256ea4(*(undefined4 *)(lVar3 + 0xd8));
      pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      fVar6 = (float)Plant::GetMaxHealth(pPVar4);
      if (fVar6 * 0.6666667 < fVar5) {
        std::string::string(in_x8,"attack5_stage1");
        nop();
      }
      else {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        fVar5 = (float)FUN_04256ea4(*(undefined4 *)(lVar3 + 0xd8));
        pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        fVar6 = (float)Plant::GetMaxHealth(pPVar4);
        if (fVar5 <= fVar6 * 0.33333334) {
          std::string::string(in_x8,"attack5_stage3");
          nop();
        }
        else {
          std::string::string(in_x8,"attack5_stage2");
          nop();
        }
      }
      goto LAB_04257bf4;
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    fVar5 = (float)FUN_04256ea4(*(undefined4 *)(lVar3 + 0xd8));
    pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
    fVar6 = (float)Plant::GetMaxHealth(pPVar4);
    if (fVar5 <= fVar6 * 0.6666667) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      fVar5 = (float)FUN_04256ea4(*(undefined4 *)(lVar3 + 0xd8));
      pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      fVar6 = (float)Plant::GetMaxHealth(pPVar4);
      if (fVar6 * 0.33333334 < fVar5) {
        std::string::string(in_x8,"attack_stage2");
        nop();
      }
      else {
        std::string::string(in_x8,"attack_stage3");
        nop();
      }
      goto LAB_04257bf4;
    }
  }
  std::string::string(in_x8,"attack_stage1");
  nop();
LAB_04257bf4:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Waxgourd::getPlantFoodMainAnimName() */

void PlantAnimRig_Waxgourd::getPlantFoodMainAnimName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  Plant *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
  cVar2 = Plant::GetAvatarEnable(this);
  if (cVar2 == '\0') {
    std::string::string(in_x8,"plantfood1");
    nop();
  }
  else {
    std::string::string(in_x8,"plantfood2");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

