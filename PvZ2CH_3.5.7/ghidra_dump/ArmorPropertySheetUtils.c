// Class: ArmorPropertySheetUtils


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorPropertySheetUtils::StaticClassInit() */

void ArmorPropertySheetUtils::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArmorPropertySheetUtils");
    (*pcVar2)(plVar1,asStack_10,FUN_03c53be8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmorPropertySheetUtils::StaticGetClass() */

long * ArmorPropertySheetUtils::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ArmorPropertySheetUtils",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmorPropertySheetUtils::GetClass() const */

long * ArmorPropertySheetUtils::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ArmorPropertySheetUtils",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArmorPropertySheetUtils::~ArmorPropertySheetUtils() */

void __thiscall ArmorPropertySheetUtils::~ArmorPropertySheetUtils(ArmorPropertySheetUtils *this)

{
  *(undefined ***)this = &PTR_GetClass_06753570;
  std::
  map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
  ::~map((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
          *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ArmorPropertySheetUtils::~ArmorPropertySheetUtils() */

void __thiscall ArmorPropertySheetUtils::~ArmorPropertySheetUtils(ArmorPropertySheetUtils *this)

{
  ~ArmorPropertySheetUtils(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorPropertySheetUtils::GetToggleLayers(std::string const&) */

void __thiscall
ArmorPropertySheetUtils::GetToggleLayers(ArmorPropertySheetUtils *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  vector *pvVar4;
  string *psVar5;
  string *extraout_x1;
  vector<std::string,std::allocator<std::string>> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  RtName aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string((string *)&local_30,"ArmorPropertySheetUtilsTemplate");
  Sexy::StringToWString((Sexy *)&local_30,extraout_x1);
  Sexy::RtName::RtName(aRStack_20,(wstring *)&local_28);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar2,0x67,aRStack_20);
  Sexy::RtName::~RtName(aRStack_20);
  FUN_05476c50((wstring *)&local_28);
  std::string::~string((string *)&local_30);
  nop();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  std::string::string((string *)aRStack_20,"all");
  pvVar4 = (vector *)
           std::
           map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
           ::operator[]((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
                         *)(lVar3 + 0x10),(string *)aRStack_20);
  std::vector<std::string,std::allocator<std::string>>::vector(in_x8,pvVar4);
  std::string::~string((string *)aRStack_20);
  nop();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  pvVar4 = (vector *)
           std::
           map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
           ::operator[]((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
                         *)(lVar3 + 0x10),(string *)this);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)aRStack_20,pvVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) break;
    psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    std::vector<std::string,std::allocator<std::string>>::push_back(in_x8,psVar5);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmorPropertySheetUtils::ArmorPropertySheetUtils() */

void __thiscall ArmorPropertySheetUtils::ArmorPropertySheetUtils(ArmorPropertySheetUtils *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06753570;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  std::
  map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
  ::operator=((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
               *)(this + 0x10),auStack_10,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArmorPropertySheetUtils::StaticNew() */

ArmorPropertySheetUtils * ArmorPropertySheetUtils::StaticNew(void)

{
  ArmorPropertySheetUtils *this;
  
  this = ::operator_new(0x40);
  ArmorPropertySheetUtils(this);
  return this;
}

