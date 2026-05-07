// Class: RichmanTileEventConfig


/* RichmanTileEventConfig::RichmanTileEventConfig(RichmanTileEventConfig const&) */

void __thiscall
RichmanTileEventConfig::RichmanTileEventConfig
          (RichmanTileEventConfig *this,RichmanTileEventConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uVar8 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_GetClass_06987da0;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar5;
  *(undefined4 *)(this + 0x1c) = uVar6;
  *(undefined4 *)(this + 0x20) = uVar7;
  *(undefined4 *)(this + 0x24) = uVar8;
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x60),
             (vector *)(param_1 + 0x60));
  return;
}


/* RichmanTileEventConfig::~RichmanTileEventConfig() */

void __thiscall RichmanTileEventConfig::~RichmanTileEventConfig(RichmanTileEventConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_06987da0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x60));
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::~vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x48));
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::~vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30));
  nop();
  return;
}


/* RichmanTileEventConfig::~RichmanTileEventConfig() */

void __thiscall RichmanTileEventConfig::~RichmanTileEventConfig(RichmanTileEventConfig *this)

{
  ~RichmanTileEventConfig(this);
  AK::FreeHook(this);
  return;
}


/* RichmanTileEventConfig::RichmanTileEventConfig() */

void __thiscall RichmanTileEventConfig::RichmanTileEventConfig(RichmanTileEventConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06987da0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x10) = 6;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x1c) = 6;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined4 *)(this + 0x28) = 0;
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::clear
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30));
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::clear
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x48));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x60));
  return;
}


/* RichmanTileEventConfig::StaticNew() */

RichmanTileEventConfig * RichmanTileEventConfig::StaticNew(void)

{
  RichmanTileEventConfig *this;
  
  this = ::operator_new(0x78);
  RichmanTileEventConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEventConfig::TEMPNAMEPLACEHOLDERVALUE(RichmanTileEventConfig const&) */

void __thiscall
RichmanTileEventConfig::operator=(RichmanTileEventConfig *this,RichmanTileEventConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  RichmanItemInfo *pRVar10;
  string *psVar11;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar4;
  *(undefined4 *)(this + 0x1c) = uVar5;
  *(undefined4 *)(this + 0x20) = uVar6;
  *(undefined4 *)(this + 0x24) = uVar7;
  *(undefined4 *)(this + 0x28) = uVar8;
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::clear
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30));
  local_18 = FUN_04c46120(*(undefined8 *)(param_1 + 0x30));
  local_10 = FUN_04c46170(*(undefined8 *)(param_1 + 0x38));
  while (bVar9 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar9) {
    pRVar10 = (RichmanItemInfo *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::push_back
              ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x30),pRVar10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::clear
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x48));
  local_18 = FUN_04c46120(*(undefined8 *)(param_1 + 0x48));
  local_10 = FUN_04c46170(*(undefined8 *)(param_1 + 0x50));
  while (bVar9 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar9) {
    pRVar10 = (RichmanItemInfo *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::push_back
              ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)(this + 0x48),pRVar10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  local_18 = FUN_04c461c0(*(undefined8 *)(param_1 + 0x60));
  local_10 = FUN_04c46210(*(undefined8 *)(param_1 + 0x68));
  while (bVar9 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar9) {
    psVar11 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x60),psVar11);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEventConfig::StaticClassInit() */

void RichmanTileEventConfig::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_20,"RichmanItemInfo");
      (*pcVar3)(plVar2,asStack_20,FUN_04c454c8,8,0);
      std::string::~string(asStack_20);
      nop();
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  local_38[0] = 0xffffffff;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"none",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"move_forward",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"move_backward",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"throw_again",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"start",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"reward",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"reward_big",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 6;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"reward_coin3",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 7;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"reward_coin4",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 8;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"reward_plantpieceschest",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 9;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"reward_avatarpieceschest",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 10;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"mini_game",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xb;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"boss_battle",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xc;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"world_level",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0xd;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"guess_game",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"RichmanTileEventType");
    (*pcVar3)(plVar2,apStack_30,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)asStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"RichmanTileEventConfig");
    (*pcVar3)(plVar2,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20,
              FUN_04c49514,0x78,0);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RichmanTileEventConfig::StaticGetClass() */

long * RichmanTileEventConfig::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RichmanTileEventConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RichmanTileEventConfig::GetClass() const */

long * RichmanTileEventConfig::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RichmanTileEventConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

