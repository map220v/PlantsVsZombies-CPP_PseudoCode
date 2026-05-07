// Class: ZombieGeneralCaesar


/* ZombieGeneralCaesar::onZombieInitialize() */

void __thiscall ZombieGeneralCaesar::onZombieInitialize(ZombieGeneralCaesar *this)

{
  Zombie::SetIsControlled((Zombie *)this,true);
  ZombieGeneralBase::onZombieInitialize((ZombieGeneralBase *)this);
  return;
}


/* ZombieGeneralCaesar::onUpdate() */

void __thiscall ZombieGeneralCaesar::onUpdate(ZombieGeneralCaesar *this)

{
  Zombie::SetIsControlled((Zombie *)this,true);
  ZombieGeneralBase::onUpdate((ZombieGeneralBase *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGeneralCaesar::StaticClassInit() */

void ZombieGeneralCaesar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieGeneralCaesar");
    (*pcVar2)(plVar1,asStack_10,FUN_04efdf00,0x850,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGeneralCaesar::StaticGetClass() */

long * ZombieGeneralCaesar::StaticGetClass(void)

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
  uVar2 = ZombieGeneralBase::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGeneralCaesar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGeneralCaesar::GetClass() const */

long * ZombieGeneralCaesar::GetClass(void)

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
  uVar2 = ZombieGeneralBase::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGeneralCaesar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGeneralCaesar::ZombieGeneralCaesar() */

void __thiscall ZombieGeneralCaesar::ZombieGeneralCaesar(ZombieGeneralCaesar *this)

{
  ZombieGeneralBase::ZombieGeneralBase((ZombieGeneralBase *)this);
  *(undefined ***)this = &PTR_GetClass_06a0a700;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGeneralCaesar_06a0b178;
  return;
}


/* ZombieGeneralCaesar::StaticNew() */

ZombieGeneralCaesar * ZombieGeneralCaesar::StaticNew(void)

{
  ZombieGeneralCaesar *this;
  
  this = ::operator_new(0x850);
  ZombieGeneralCaesar(this);
  return this;
}


/* ZombieGeneralCaesar::~ZombieGeneralCaesar() */

void __thiscall ZombieGeneralCaesar::~ZombieGeneralCaesar(ZombieGeneralCaesar *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0a700;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGeneralCaesar_06a0b178;
  ZombieGeneralBase::~ZombieGeneralBase((ZombieGeneralBase *)this);
  return;
}


/* non-virtual thunk to ZombieGeneralCaesar::~ZombieGeneralCaesar() */

void __thiscall ZombieGeneralCaesar::~ZombieGeneralCaesar(ZombieGeneralCaesar *this)

{
  ~ZombieGeneralCaesar(this + -0x10);
  return;
}


/* ZombieGeneralCaesar::~ZombieGeneralCaesar() */

void __thiscall ZombieGeneralCaesar::~ZombieGeneralCaesar(ZombieGeneralCaesar *this)

{
  ~ZombieGeneralCaesar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieGeneralCaesar::~ZombieGeneralCaesar() */

void __thiscall ZombieGeneralCaesar::~ZombieGeneralCaesar(ZombieGeneralCaesar *this)

{
  ~ZombieGeneralCaesar(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGeneralCaesar::onApplyCondition(ZombieConditions) */

void __thiscall ZombieGeneralCaesar::onApplyCondition(ZombieGeneralCaesar *this,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined8 local_30;
  undefined8 local_28;
  vector<ZombieConditions,std::allocator<ZombieConditions>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::vector
            (avStack_20,&DAT_05755e10,8,(__normal_iterator *)&local_28);
  if ((param_2 == 1) || (param_2 == 0x24)) {
    Zombie::EndCondition((Zombie *)this,param_2);
  }
  else {
    iVar2 = FUN_04efdbb4(*(undefined4 *)(this + 0x814));
    if (iVar2 - 8U < 2) {
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        if (param_2 == *piVar3) {
          Zombie::EndCondition((Zombie *)this,param_2);
        }
        eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                  ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
      }
    }
  }
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGeneralCaesar::IsValidFriendlyTarget(Zombie*) const */

void __thiscall
ZombieGeneralCaesar::IsValidFriendlyTarget(ZombieGeneralCaesar *this,Zombie *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar8;
  ulong uVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Zombie *)0x0) && (this != (ZombieGeneralCaesar *)param_1)) {
    uVar9 = DAT_06ba4ba8 & 1;
    if (((DAT_06ba4ba8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06ba4ba8), iVar4 != 0)) {
      std::string::string((string *)&DAT_06ba4c98,"roman");
      nop();
      std::string::string((string *)&DAT_06ba4ca0,"roman_armor1");
      nop();
      std::string::string((string *)&DAT_06ba4ca8,"roman_armor2");
      nop();
      std::string::string((string *)&DAT_06ba4cb0,"roman_armor3");
      nop();
      std::string::string((string *)&DAT_06ba4cb8,"roman_armor4");
      nop();
      __cxa_guard_release(&DAT_06ba4ba8);
      __cxa_atexit(FUN_04efd960,uVar9,&DAT_06a88000);
    }
    if (((DAT_06ba4b98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06ba4b98), iVar4 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06ba4c78,(string *)&DAT_06ba4c98,
                 (allocator *)&SaucedPlantConditionTargetProps::sClass);
      __cxa_guard_release(&DAT_06ba4b98);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba4c78,
                   &DAT_06a88000);
    }
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&DAT_06ba4c78);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&DAT_06ba4c78);
    uVar7 = Zombie::GetTypeName(param_1);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar5,uVar6,uVar7);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06ba4c78);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((!(bool)bVar1) && (cVar2 = Zombie::IsTargetable(param_1), cVar2 != '\0')) {
      uVar3 = operator|(1,8);
      cVar2 = Zombie::MatchesAny(param_1,uVar3);
      if ((cVar2 != '\0') || (cVar2 = RealObject::IsOnTeam(param_1,1), cVar2 != '\0'))
      goto LAB_04eff73c;
      pEVar8 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(param_1);
      cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar8,0x1b);
      if (cVar2 == '\0') {
        bVar1 = Zombie::HasArmor(param_1,0x40);
        bVar1 = bVar1 ^ 1;
        goto LAB_04eff73c;
      }
    }
  }
  bVar1 = 0;
LAB_04eff73c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGeneralCaesar::FindFriendlyTarget(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) const */

void __thiscall
ZombieGeneralCaesar::FindFriendlyTarget
          (ZombieGeneralCaesar *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  char cVar2;
  ZombieGeneralCaesarProps *pZVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombieGeneralCaesarProps>((Zombie *)this);
  Sexy::Insets::Insets(aIStack_30,(Insets *)(pZVar3 + 0x238));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    nop();
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_2);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_2);
    ToolPacketData::GetProps();
    local_40 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar4,uVar5,aRStack_48);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(param_2);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    p_Var8 = this_01;
    if (((bVar1) && (cVar2 = IsValidFriendlyTarget(this,(Zombie *)this_00), cVar2 != '\0')) &&
       (p_Var8 = this_00,
       this_01 !=
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        *)0x0)) {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_01);
      p_Var8 = this_01;
      if (*pfVar7 < *pfVar6) {
        p_Var8 = this_00;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    this_01 = p_Var8;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}

