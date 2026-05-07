// Class: StarConvertConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertConfig::StaticClassInit() */

void StarConvertConfig::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ConvertItem");
    (*pcVar3)(plVar2,asStack_10,FUN_04a6b53c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ConvertObject");
    (*pcVar3)(plVar2,asStack_10,FUN_04a6c370,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"StarConvertConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_04a6c5e0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarConvertConfig::StaticGetClass() */

long * StarConvertConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarConvertConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarConvertConfig::GetClass() const */

long * StarConvertConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"StarConvertConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertConfig::GetConvertItemInfo(std::string, int) */

void __thiscall
StarConvertConfig::GetConvertItemInfo(StarConvertConfig *this,string *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[8] != (StarConvertConfig)0x0) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      cVar2 = std::operator==((string *)(lVar3 + 8),param_2);
      if (cVar2 != '\0') {
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar3 + 0x10));
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar3 + 0x10));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
              bVar1) {
          puVar4 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          if (*(int *)((long)puVar4 + 4) == param_3) {
            local_18 = *puVar4;
            local_10 = *(undefined4 *)(puVar4 + 1);
            goto LAB_04a6bd04;
          }
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_30);
        }
      }
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_40);
    }
  }
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_28);
  local_18 = local_28;
  local_10 = local_20;
LAB_04a6bd04:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertConfig::GetStarRequire(std::string, int) */

void __thiscall
StarConvertConfig::GetStarRequire(StarConvertConfig *this,string *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  if (this[8] != (StarConvertConfig)0x0) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
      if (!bVar1) break;
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      cVar2 = std::operator==((string *)(lVar3 + 8),param_2);
      if (cVar2 != '\0') {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar3 + 0x10));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar3 + 0x10));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar1) {
          puVar4 = (undefined4 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          if (puVar4[1] == param_3) {
            uVar5 = *puVar4;
            goto LAB_04a6bd9c;
          }
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_18);
        }
      }
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_28);
    }
    uVar5 = 0;
  }
LAB_04a6bd9c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertConfig::GetConvertItemId(std::string, int) */

void __thiscall
StarConvertConfig::GetConvertItemId(StarConvertConfig *this,string *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  if (this[8] != (StarConvertConfig)0x0) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
      if (!bVar1) break;
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      cVar2 = std::operator==((string *)(lVar3 + 8),param_2);
      if (cVar2 != '\0') {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar3 + 0x10));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar3 + 0x10));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar1) {
          lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          if (*(int *)(lVar3 + 4) == param_3) {
            uVar4 = *(undefined4 *)(lVar3 + 8);
            goto LAB_04a6bed8;
          }
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_18);
        }
      }
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_28);
    }
    uVar4 = 0;
  }
LAB_04a6bed8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertConfig::GetMaxConvertId() */

void __thiscall StarConvertConfig::GetMaxConvertId(StarConvertConfig *this)

{
  bool bVar1;
  string *psVar2;
  long lVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  if (this[8] != (StarConvertConfig)0x0) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      bVar1 = std::operator!=("Plant",psVar2);
      if (((bVar1) && (bVar1 = std::operator!=("Feature",psVar2), bVar1)) &&
         (bVar1 = std::operator!=("Avatar",psVar2), bVar1)) {
        __gnu_cxx::
        __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
        ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                      *)&local_28);
      }
      else {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(psVar2 + 0x10));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(psVar2 + 0x10));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar1) {
          lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          if (iVar4 < *(int *)(lVar3 + 8)) {
            iVar4 = *(int *)(lVar3 + 8);
          }
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_18);
        }
        __gnu_cxx::
        __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
        ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                      *)&local_28);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* StarConvertConfig::StarConvertConfig() */

void __thiscall StarConvertConfig::StarConvertConfig(StarConvertConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_069383b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  this[8] = (StarConvertConfig)0x0;
  return;
}


/* StarConvertConfig::StaticNew() */

StarConvertConfig * StarConvertConfig::StaticNew(void)

{
  StarConvertConfig *this;
  
  this = ::operator_new(0x28);
  StarConvertConfig(this);
  return this;
}


/* StarConvertConfig::~StarConvertConfig() */

void __thiscall StarConvertConfig::~StarConvertConfig(StarConvertConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_069383b0;
  std::vector<ConvertObject,std::allocator<ConvertObject>>::~vector
            ((vector<ConvertObject,std::allocator<ConvertObject>> *)(this + 0x10));
  nop();
  return;
}


/* StarConvertConfig::~StarConvertConfig() */

void __thiscall StarConvertConfig::~StarConvertConfig(StarConvertConfig *this)

{
  ~StarConvertConfig(this);
  AK::FreeHook(this);
  return;
}


/* StarConvertConfig::GetConvertList() */

vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *
StarConvertConfig::GetConvertList(void)

{
  long in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  if (*(char *)(in_x0 + 8) == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
    return in_x8;
  }
  std::vector<ConvertObject,std::allocator<ConvertObject>>::vector
            ((vector<ConvertObject,std::allocator<ConvertObject>> *)in_x8,(vector *)(in_x0 + 0x10));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertConfig::Refresh() */

void __thiscall StarConvertConfig::Refresh(StarConvertConfig *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  StarConvertConfig *pSVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x60);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_04a6ceb0:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pSVar3 = Sexy::RtObject::Cast<StarConvertConfig>(this_00);
      if (pSVar3 != (StarConvertConfig *)0x0) {
        std::vector<ConvertObject,std::allocator<ConvertObject>>::operator=
                  ((vector<ConvertObject,std::allocator<ConvertObject>> *)(this + 0x10),
                   (vector *)(pSVar3 + 0x10));
        this[8] = (StarConvertConfig)0x1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_04a6ceb0;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}

