// Class: ZombieAnimRig_Camel


/* ZombieAnimRig_Camel::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_Camel::onPopAnimInitialized(ZombieAnimRig_Camel *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  do {
    lVar2 = 0;
    do {
      lVar1 = lVar2 + lVar3;
      lVar2 = lVar2 + 8;
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(string *)(&DAT_06b16ee0 + lVar1),false);
    } while (lVar2 != 0x18);
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x60);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Camel::GetHeadOffset() */

void __thiscall ZombieAnimRig_Camel::GetHeadOffset(ZombieAnimRig_Camel *this)

{
  float local_18;
  float fStack_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  std::string::string(asStack_10,"zombie_camel_board_head_etching_norm");
  PopAnimRig::CalcLayerTranslation((PopAnimRig *)this,asStack_10,(SexyVector2 *)&local_18);
  std::string::~string(asStack_10);
  nop();
  local_18 = local_18 + 10.0;
  fStack_14 = fStack_14 + 60.0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,fStack_14);
}


/* ZombieAnimRig_Camel::~ZombieAnimRig_Camel() */

void __thiscall ZombieAnimRig_Camel::~ZombieAnimRig_Camel(ZombieAnimRig_Camel *this)

{
  *(undefined ***)this = &PTR_GetClass_0686d800;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Camel_0686da78;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Camel::~ZombieAnimRig_Camel() */

void __thiscall ZombieAnimRig_Camel::~ZombieAnimRig_Camel(ZombieAnimRig_Camel *this)

{
  ~ZombieAnimRig_Camel(this + -0x10);
  return;
}


/* ZombieAnimRig_Camel::~ZombieAnimRig_Camel() */

void __thiscall ZombieAnimRig_Camel::~ZombieAnimRig_Camel(ZombieAnimRig_Camel *this)

{
  ~ZombieAnimRig_Camel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Camel::~ZombieAnimRig_Camel() */

void __thiscall ZombieAnimRig_Camel::~ZombieAnimRig_Camel(ZombieAnimRig_Camel *this)

{
  ~ZombieAnimRig_Camel(this + -0x10);
  return;
}


/* ZombieAnimRig_Camel::ZombieAnimRig_Camel() */

void __thiscall ZombieAnimRig_Camel::ZombieAnimRig_Camel(ZombieAnimRig_Camel *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0686d800;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Camel_0686da78;
  return;
}


/* ZombieAnimRig_Camel::StaticNew() */

ZombieAnimRig_Camel * ZombieAnimRig_Camel::StaticNew(void)

{
  ZombieAnimRig_Camel *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Camel(this);
  return this;
}


/* ZombieAnimRig_Camel::IsWalking() */

bool __thiscall ZombieAnimRig_Camel::IsWalking(ZombieAnimRig_Camel *this)

{
  return *(int *)(this + 0x210) == 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Camel::GetWalkAnimFrame() */

void __thiscall ZombieAnimRig_Camel::GetWalkAnimFrame(ZombieAnimRig_Camel *this)

{
  char cVar1;
  int iVar2;
  PopAnim *this_00;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsWalking(this);
  iVar2 = 0;
  if (cVar1 != '\0') {
    this_00 = (PopAnim *)FUN_045f7bfc(*(undefined8 *)(this + 0x20));
    std::string::string(asStack_10,"walk");
    iVar2 = Sexy::PopAnim::GetLabelFrame(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    lVar3 = FUN_045f7bf8(*(undefined8 *)(this + 0x20));
    iVar2 = (int)*(float *)(*(long *)(lVar3 + 0x50) + 0xc) - iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Camel::SetWalkAnimFrame(int) */

void __thiscall ZombieAnimRig_Camel::SetWalkAnimFrame(ZombieAnimRig_Camel *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  PopAnim *this_00;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsWalking(this);
  if (cVar2 != '\0') {
    this_00 = (PopAnim *)FUN_045f7bfc(*(undefined8 *)(this + 0x20));
    std::string::string(asStack_10,"walk");
    iVar3 = Sexy::PopAnim::GetLabelFrame(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"walk");
    iVar4 = PopAnimRig::CalcAnimLength((PopAnimRig *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    for (iVar1 = iVar3 + param_1; iVar3 + iVar4 <= iVar1; iVar1 = iVar1 - iVar4) {
    }
    for (; iVar1 < iVar3; iVar1 = iVar1 + iVar4) {
    }
    lVar5 = FUN_045f7bf8(*(undefined8 *)(this + 0x20));
    *(float *)(*(long *)(lVar5 + 0x50) + 0xc) = (float)iVar1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieAnimRig_Camel::IsIdling() */

bool __thiscall ZombieAnimRig_Camel::IsIdling(ZombieAnimRig_Camel *this)

{
  return *(int *)(this + 0x210) == 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Camel::GetIdleAnimFrame() */

void __thiscall ZombieAnimRig_Camel::GetIdleAnimFrame(ZombieAnimRig_Camel *this)

{
  char cVar1;
  int iVar2;
  PopAnim *this_00;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsIdling(this);
  iVar2 = 0;
  if (cVar1 != '\0') {
    this_00 = (PopAnim *)FUN_045f7bfc(*(undefined8 *)(this + 0x20));
    std::string::string(asStack_10,"idle");
    iVar2 = Sexy::PopAnim::GetLabelFrame(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    lVar3 = FUN_045f7bfc(*(undefined8 *)(this + 0x20));
    iVar2 = (int)*(float *)(*(long *)(lVar3 + 0x50) + 0xc) - iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Camel::SetIdleAnimFrame(int) */

void __thiscall ZombieAnimRig_Camel::SetIdleAnimFrame(ZombieAnimRig_Camel *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  PopAnim *this_00;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsIdling(this);
  if (cVar2 != '\0') {
    this_00 = (PopAnim *)FUN_045f7bfc(*(undefined8 *)(this + 0x20));
    std::string::string(asStack_10,"idle");
    iVar3 = Sexy::PopAnim::GetLabelFrame(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"idle");
    iVar4 = PopAnimRig::CalcAnimLength((PopAnimRig *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    for (iVar1 = iVar3 + param_1; iVar3 + iVar4 <= iVar1; iVar1 = iVar1 - iVar4) {
    }
    for (; iVar1 < iVar3; iVar1 = iVar1 + iVar4) {
    }
    lVar5 = FUN_045f7bf8(*(undefined8 *)(this + 0x20));
    *(float *)(*(long *)(lVar5 + 0x50) + 0xc) = (float)iVar1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Camel::CursorAnimChange(Zombie*) */

void __thiscall ZombieAnimRig_Camel::CursorAnimChange(ZombieAnimRig_Camel *this,Zombie *param_1)

{
  int iVar1;
  ZombieCamel *pZVar2;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    pZVar2 = Sexy::RtObject::Cast<ZombieCamel>((RtObject *)param_1);
    iVar1 = FUN_045f7c00(*(undefined4 *)(pZVar2 + 0x800));
    if (iVar1 == 2) {
      __s = "zombie_camel_board_hump_etching_norm";
    }
    else {
      if (iVar1 != 3) {
        if (iVar1 == 1) {
          std::string::string(asStack_10,"zombie_camel_board_head_etching_norm");
          PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
          std::string::~string(asStack_10);
          nop();
        }
        goto LAB_045f8214;
      }
      __s = "zombie_camel_board_tail_etching_norm";
    }
    std::string::string(asStack_10,__s);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
  }
LAB_045f8214:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Camel::SetAlmanacArmor(std::vector<Sexy::RtWeakPtr<ArmorPropertySheet>,
   std::allocator<Sexy::RtWeakPtr<ArmorPropertySheet> > >) */

void ZombieAnimRig_Camel::SetAlmanacArmor(PopAnimRig *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"CamelSignHeadDefault");
  nop();
  auVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::StringToWString((Sexy *)asStack_38,auVar5._8_8_);
  Sexy::RtName::RtName((RtName *)local_18,(wstring *)&local_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,auVar5._0_8_,0x67,(RtName *)local_18);
  Sexy::RtName::~RtName((RtName *)local_18);
  FUN_05476c50((exception_ptr *)&local_20);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar2 + 0x28));
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(lVar2 + 0x28));
  bVar4 = true;
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18)
        , bVar1) {
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    FUN_05475d88(asStack_28,uVar3);
    PopAnimRig::SetLayerVisibility(param_1,asStack_28,bVar4);
    std::string::~string(asStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    bVar4 = false;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Camel::StaticClassInit() */

void ZombieAnimRig_Camel::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"blank",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"head",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"body",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"tail",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"ZombieCamelBoardType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ZombieAnimRig_Camel");
    (*pcVar3)(plVar2,avStack_20,FUN_045f8694,0x240,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Camel::StaticGetClass() */

long * ZombieAnimRig_Camel::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Camel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Camel::GetClass() const */

long * ZombieAnimRig_Camel::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Camel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

