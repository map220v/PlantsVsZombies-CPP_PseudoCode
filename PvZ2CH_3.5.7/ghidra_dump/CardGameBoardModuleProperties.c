// Class: CardGameBoardModuleProperties


/* CardGameBoardModuleProperties::GetModuleClass() const */

long * CardGameBoardModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CardGameBoardModule::sClass != (long *)0x0) {
    return CardGameBoardModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CardGameBoardModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameBoardModule",uVar2,CardGameBoardModule::StaticNew);
  CardGameBoardModule::StaticClassInit();
  return CardGameBoardModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoardModuleProperties::StaticClassInit() */

void CardGameBoardModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameBoardModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03573948,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoardModuleProperties::StaticGetClass() */

long * CardGameBoardModuleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameBoardModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameBoardModuleProperties::GetClass() const */

long * CardGameBoardModuleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameBoardModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameBoardModuleProperties::CardGameBoardModuleProperties() */

void __thiscall
CardGameBoardModuleProperties::CardGameBoardModuleProperties(CardGameBoardModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0665bc10;
  return;
}


/* CardGameBoardModuleProperties::StaticNew() */

CardGameBoardModuleProperties * CardGameBoardModuleProperties::StaticNew(void)

{
  CardGameBoardModuleProperties *this;
  
  this = ::operator_new(0x48);
  CardGameBoardModuleProperties(this);
  return this;
}


/* CardGameBoardModuleProperties::~CardGameBoardModuleProperties() */

void __thiscall
CardGameBoardModuleProperties::~CardGameBoardModuleProperties(CardGameBoardModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0665bc10;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* CardGameBoardModuleProperties::~CardGameBoardModuleProperties() */

void __thiscall
CardGameBoardModuleProperties::~CardGameBoardModuleProperties(CardGameBoardModuleProperties *this)

{
  ~CardGameBoardModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoardModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
CardGameBoardModuleProperties::GatherResourceRequirements
          (CardGameBoardModuleProperties *this,set *param_1)

{
  bool bVar1;
  CardUtils *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar2;
  string *psVar3;
  RAttribute *this_02;
  vector *pvVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  undefined8 local_d8;
  undefined8 local_d0;
  RtWeakPtr aRStack_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_b0 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [24];
  int local_80 [14];
  string asStack_48 [8];
  CardTargetCursorAnim aCStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  std::string::string(asStack_48,"UI_CardGame_Effect");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_48);
  std::string::~string(asStack_48);
  nop();
  CardUtils::GetAllCardType(this_00);
  local_d8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_b0);
  local_d0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_b0);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_d8,(__normal_iterator *)&local_d0), bVar1) {
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    CardTargetCursorConfig::CardTargetCursorConfig
              ((CardTargetCursorConfig *)asStack_48,(CardTargetCursorConfig *)(lVar2 + 0x70));
    CardTargetCursorAnim::CardTargetCursorAnim((CardTargetCursorAnim *)local_80,aCStack_40);
    if (local_80[0] == 2) {
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_c8);
      if (bVar1) {
        this_02 = (RAttribute *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
        pvVar4 = (vector *)Reflection::RAttribute::GetValue(this_02);
        std::vector<std::string,std::allocator<std::string>>::vector
                  ((vector<std::string,std::allocator<std::string>> *)aRStack_98,pvVar4);
        local_c0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aRStack_98);
        local_b8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_98);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8),
              bVar1) {
          psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0)
          ;
          std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
                     psVar3);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
        }
        std::vector<std::string,std::allocator<std::string>>::~vector
                  ((vector<std::string,std::allocator<std::string>> *)aRStack_98);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
    }
    else if (local_80[0] == 3) {
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
      ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_c8);
      if (bVar1) {
        this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
        pvVar4 = (vector *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_03);
        std::vector<std::string,std::allocator<std::string>>::vector
                  ((vector<std::string,std::allocator<std::string>> *)aRStack_98,pvVar4);
        local_c0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aRStack_98);
        local_b8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_98);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8),
              bVar1) {
          psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0)
          ;
          std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
                     psVar3);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
        }
        std::vector<std::string,std::allocator<std::string>>::~vector
                  ((vector<std::string,std::allocator<std::string>> *)aRStack_98);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
    }
    else if (local_80[0] == 1) {
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    }
    CardTargetCursorAnim::~CardTargetCursorAnim((CardTargetCursorAnim *)local_80);
    CardTargetCursorConfig::~CardTargetCursorConfig((CardTargetCursorConfig *)asStack_48);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d8);
  }
  std::vector<Sexy::RtWeakPtr<CardType>,std::allocator<Sexy::RtWeakPtr<CardType>>>::~vector
            ((vector<Sexy::RtWeakPtr<CardType>,std::allocator<Sexy::RtWeakPtr<CardType>>> *)
             avStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

