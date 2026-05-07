// Class: ZombossSteamRestActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRestActionHandler::StaticClassInit() */

void ZombossSteamRestActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamRestActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_03c4a228,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamRestActionHandler::StaticGetClass() */

long * ZombossSteamRestActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRestActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamRestActionHandler::GetClass() const */

long * ZombossSteamRestActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRestActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRestActionHandler::onUpdateAction() */

void __thiscall ZombossSteamRestActionHandler::onUpdateAction(ZombossSteamRestActionHandler *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr *this_00;
  EASquaredImpl *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      this_01 = (EASquaredImpl *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = EASquaredImpl::IsEnabledForUser(this_01);
      if (cVar2 == '\0') goto LAB_03c461dc;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
LAB_03c461dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamRestActionHandler::ZombossSteamRestActionHandler() */

void __thiscall
ZombossSteamRestActionHandler::ZombossSteamRestActionHandler(ZombossSteamRestActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06752ed0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* ZombossSteamRestActionHandler::StaticNew() */

ZombossSteamRestActionHandler * ZombossSteamRestActionHandler::StaticNew(void)

{
  ZombossSteamRestActionHandler *this;
  
  this = ::operator_new(0x40);
  ZombossSteamRestActionHandler(this);
  return this;
}


/* ZombossSteamRestActionHandler::~ZombossSteamRestActionHandler() */

void __thiscall
ZombossSteamRestActionHandler::~ZombossSteamRestActionHandler(ZombossSteamRestActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06752ed0;
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::~vector((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
             *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSteamRestActionHandler::~ZombossSteamRestActionHandler() */

void __thiscall
ZombossSteamRestActionHandler::~ZombossSteamRestActionHandler(ZombossSteamRestActionHandler *this)

{
  ~ZombossSteamRestActionHandler(this);
  AK::FreeHook(this);
  return;
}

