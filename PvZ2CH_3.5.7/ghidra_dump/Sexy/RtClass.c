// Class: Sexy::RtClass


/* Sexy::RtClass::GetBoundReflectionClass(bool) const */

long __thiscall Sexy::RtClass::GetBoundReflectionClass(RtClass *this,bool param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x40);
  if ((lVar1 == 0) && (param_1)) {
    do {
      this = (RtClass *)FUN_033bd2b4(*(undefined8 *)(this + 0x10));
      if (this == (RtClass *)0x0) {
        return 0;
      }
      lVar1 = *(long *)(this + 0x40);
    } while (lVar1 == 0);
  }
  return lVar1;
}


/* Sexy::RtClass::IsDerivedFrom(Sexy::RtClass const*) const */

undefined8 __thiscall Sexy::RtClass::IsDerivedFrom(RtClass *this,RtClass *param_1)

{
  if (param_1 == (RtClass *)0x0) {
    return 0;
  }
  while( true ) {
    if (this == (RtClass *)0x0) {
      return 0;
    }
    if (param_1 == this) break;
    this = (RtClass *)FUN_051c4664(*(undefined8 *)(this + 0x10));
  }
  return 1;
}


/* Sexy::RtClass::FindProtocol(Sexy::RtProtocolClass*) const */

long * __thiscall Sexy::RtClass::FindProtocol(RtClass *this,RtProtocolClass *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  do {
    uVar6 = *(undefined8 *)(this + 0x28);
    iVar2 = FUN_051c46e8(uVar6,*(undefined8 *)(this + 0x30));
    if (0 < iVar2) {
      lVar4 = 0;
      while( true ) {
        puVar3 = (undefined8 *)FUN_051c4710(uVar6,lVar4);
        plVar5 = (long *)*puVar3;
        if ((plVar5 != (long *)0x0) &&
           (cVar1 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1), cVar1 != '\0')) {
          return plVar5;
        }
        if (iVar2 <= (int)(lVar4 + 1)) break;
        uVar6 = *(undefined8 *)(this + 0x28);
        lVar4 = lVar4 + 1;
      }
    }
    this = (RtClass *)FUN_051c4664(*(undefined8 *)(this + 0x10));
    if (this == (RtClass *)0x0) {
      return (long *)0x0;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtClass::RtClass() */

void __thiscall Sexy::RtClass::RtClass(RtClass *this)

{
  RtDb *pRVar1;
  long lVar2;
  _func_void *extraout_x1;
  size_t in_x2;
  RtId aRStack_30 [8];
  RtName aRStack_28 [16];
  string asStack_18 [8];
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtObject::RtObject((RtObject *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_06a30a90;
  *(undefined8 *)(this + 0x18) = 0;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 0x20),extraout_x1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(undefined8 *)(this + 0x40) = 0;
  pRVar1 = (RtDb *)RtDb::GetDb();
  lVar2 = RtDb::GetTable(pRVar1,0x2002);
  if (lVar2 == 0) {
    RtDbTable::TableOptions::TableOptions((TableOptions *)aRStack_30);
    RtName::operator=(aRStack_28,L"System.RtClasses");
    std::string::append(asStack_18,"System.RtClasses",in_x2);
    local_10 = 1;
    pRVar1 = (RtDb *)RtDb::GetDb();
    lVar2 = RtDb::CreateTable(pRVar1,0x2002,(TableOptions *)aRStack_30);
    RtDbTable::TableOptions::~TableOptions((TableOptions *)aRStack_30);
  }
  RtDbTable::AllocId(aRStack_30,lVar2,this,2,1,0);
  RtId::operator=((RtId *)(this + 0x20),aRStack_30);
  RtId::~RtId(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtClass::StaticNew() */

RtClass * Sexy::RtClass::StaticNew(void)

{
  RtClass *this;
  
  this = ::operator_new(0x48);
  RtClass(this);
  return this;
}


/* Sexy::RtClass::StaticGetClassVectorRef() */

undefined * Sexy::RtClass::StaticGetClassVectorRef(void)

{
  int iVar1;
  
  if (((DAT_06bbdb98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06bbdb98), iVar1 != 0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&DAT_06bbdb78);
    __cxa_guard_release(&DAT_06bbdb98);
    __cxa_atexit(std::vector<Sexy::RtClass*,std::allocator<Sexy::RtClass*>>::~vector,&DAT_06bbdb78,
                 &DAT_06a88000);
    return &DAT_06bbdb78;
  }
  return &DAT_06bbdb78;
}


/* Sexy::RtClass::StaticGetClassCount() */

void Sexy::RtClass::StaticGetClassCount(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)StaticGetClassVectorRef();
  FUN_051c46fc(*puVar1,puVar1[1]);
  return;
}


/* Sexy::RtClass::StaticGetClassIndexed(unsigned long) */

undefined8 Sexy::RtClass::StaticGetClassIndexed(ulong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)StaticGetClassVectorRef();
  puVar1 = (undefined8 *)FUN_051c4708(*puVar1,param_1);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtClass::StaticCleanup() */

void Sexy::RtClass::StaticCleanup(void)

{
  bool bVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)StaticGetClassVectorRef();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(pvVar2);
  while( true ) {
    pvVar2 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)StaticGetClassVectorRef();
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar2);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 0x18))();
    }
    FUN_051c4a2c((exception_ptr *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtClass::~RtClass() */

void __thiscall Sexy::RtClass::~RtClass(RtClass *this)

{
  int iVar1;
  RtDb *this_00;
  RtDbTable *this_01;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined ***)this = &PTR_GetClass_06a30a90;
  this_00 = (RtDb *)RtDb::GetDb();
  this_01 = (RtDbTable *)RtDb::GetTable(this_00,0x2002);
  if (this_01 != (RtDbTable *)0x0) {
    RtDbTable::ReleaseId(this_01,(RtId *)(this + 0x20));
  }
  uVar3 = *(undefined8 *)(this + 0x28);
  iVar1 = FUN_051c46e8(uVar3,*(undefined8 *)(this + 0x30));
  if (0 < iVar1) {
    lVar4 = 0;
    while( true ) {
      plVar2 = (long *)FUN_051c46f4(uVar3,lVar4);
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      if (iVar1 <= (int)(lVar4 + 1)) break;
      uVar3 = *(undefined8 *)(this + 0x28);
      lVar4 = lVar4 + 1;
    }
  }
  std::vector<Sexy::RtProtocol*,std::allocator<Sexy::RtProtocol*>>::~vector
            ((vector<Sexy::RtProtocol*,std::allocator<Sexy::RtProtocol*>> *)(this + 0x28));
  RtId::~RtId((RtId *)(this + 0x20));
  nop();
  return;
}


/* Sexy::RtClass::~RtClass() */

void __thiscall Sexy::RtClass::~RtClass(RtClass *this)

{
  ~RtClass(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::RtClass::StaticGetClassMapRef() */

undefined * Sexy::RtClass::StaticGetClassMapRef(void)

{
  int iVar1;
  
  if (((DAT_06bbdba0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06bbdba0), iVar1 != 0)) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)&DAT_06bbdba8);
    __cxa_guard_release(&DAT_06bbdba0);
    __cxa_atexit(std::
                 map<std::string,Sexy::RtClass*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtClass*>>>
                 ::~map,&DAT_06bbdba8,&DAT_06a88000);
    return &DAT_06bbdba8;
  }
  return &DAT_06bbdba8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtClass::Serialize(Sexy::RtSerializeContext const&) */

void __thiscall Sexy::RtClass::Serialize(RtClass *this,RtSerializeContext *param_1)

{
  char cVar1;
  long lVar2;
  RtSerialRtonWriter *this_00;
  RtSerialRtonKey *pRVar3;
  char *pcVar4;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_051c46e4(*(undefined8 *)(param_1 + 8));
  cVar1 = FUN_051c46d0(*(undefined1 *)(lVar2 + 0x10));
  if (cVar1 != '\0') {
    this_00 = (RtSerialRtonWriter *)FUN_051c46e0(*(undefined8 *)(lVar2 + 8));
    pRVar3 = (RtSerialRtonKey *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                        *)param_1);
    RtSerialRtonWriter::BeginObject(this_00,pRVar3);
    RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"name");
    pcVar4 = (char *)FUN_051c4660(*(undefined8 *)(this + 8));
    RtSerialRtonWriter::WriteString(this_00,aRStack_10,pcVar4,false);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
    lVar2 = FUN_051c4664(*(undefined8 *)(this + 0x10));
    if (lVar2 != 0) {
      RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"super");
      lVar2 = FUN_051c4664(*(undefined8 *)(this + 0x10));
      pcVar4 = (char *)FUN_051c4660(*(undefined8 *)(lVar2 + 8));
      RtSerialRtonWriter::WriteString(this_00,aRStack_10,pcVar4,false);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
    }
    RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtClass::StaticGetClassNamed(char const*) */

void Sexy::RtClass::StaticGetClassNamed(char *param_1)

{
  char cVar1;
  map<std::string,Sexy::RtClass*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtClass*>>>
  *this;
  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>> *this_00;
  long lVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,param_1);
  nop();
  this = (map<std::string,Sexy::RtClass*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtClass*>>>
          *)StaticGetClassMapRef();
  local_18 = std::
             map<std::string,Sexy::RtClass*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtClass*>>>
             ::find(this,asStack_20);
  this_00 = (map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)StaticGetClassMapRef();
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end(this_00);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  else {
    uVar3 = 0;
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* Sexy::RtClass::AddProtocol(Sexy::RtProtocol*) */

void __thiscall Sexy::RtClass::AddProtocol(RtClass *this,RtProtocol *param_1)

{
  RtProtocol *local_8;
  
  local_8 = param_1;
  std::vector<Sexy::RtProtocol*,std::allocator<Sexy::RtProtocol*>>::push_back
            ((vector<Sexy::RtProtocol*,std::allocator<Sexy::RtProtocol*>> *)(this + 0x28),&local_8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtClass::StaticClassInit() */

void Sexy::RtClass::StaticClassInit(void)

{
  RtIdProtocol *this;
  RtClass *this_00;
  undefined8 local_40;
  Delegate1wRet<Sexy::RtId,Sexy::RtObject*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x38);
  RtIdProtocol::RtIdProtocol(this);
  local_40 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)FUN_051c6338);
  Delegate1wRet<Sexy::RtId,Sexy::RtObject*>::Delegate1wRet<Sexy::RtId(*)(Sexy::RtObject*)>
            (aDStack_38,(CBFunctionTranslatorX *)&local_40);
  RtIdProtocol::SetDelegate(this,(Delegate1wRet *)aDStack_38);
  this_00 = (RtClass *)StaticGetClass();
  AddProtocol(this_00,(RtProtocol *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtClass::StaticGetClass() */

long * Sexy::RtClass::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RtClass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::RtClass::GetClass() const */

long * Sexy::RtClass::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RtClass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtClass::ClassInit(char const*, Sexy::RtClass*, Sexy::RtObject* (*)()) */

void __thiscall
Sexy::RtClass::ClassInit(RtClass *this,char *param_1,RtClass *param_2,_func_RtObject_ptr *param_3)

{
  vector<Sexy::RtClass*,std::allocator<Sexy::RtClass*>> *this_00;
  map<std::string,Sexy::RtClass*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtClass*>>>
  *this_01;
  undefined8 *puVar1;
  RtClass *local_10;
  long local_8;
  
  *(_func_RtObject_ptr **)(this + 0x18) = param_3;
  *(RtClass **)(this + 0x10) = param_2;
  local_8 = ___stack_chk_guard;
  *(char **)(this + 8) = param_1;
  this_00 = (vector<Sexy::RtClass*,std::allocator<Sexy::RtClass*>> *)StaticGetClassVectorRef();
  local_10 = this;
  std::vector<Sexy::RtClass*,std::allocator<Sexy::RtClass*>>::push_back(this_00,&local_10);
  std::string::string((string *)&local_10,param_1);
  nop();
  this_01 = (map<std::string,Sexy::RtClass*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtClass*>>>
             *)StaticGetClassMapRef();
  puVar1 = (undefined8 *)
           std::
           map<std::string,Sexy::RtClass*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RtClass*>>>
           ::operator[](this_01,(string *)&local_10);
  *puVar1 = this;
  std::string::~string((string *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* bool Sexy::RtClass::IsDerivedFrom<Sexy::SoundBank>() const */

bool __thiscall Sexy::RtClass::IsDerivedFrom<Sexy::SoundBank>(RtClass *this)

{
  undefined1 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(long *)this + 0x48);
  uVar2 = SoundBank::StaticGetClass();
  uVar1 = (*pcVar3)(this,uVar2);
  return (bool)uVar1;
}

