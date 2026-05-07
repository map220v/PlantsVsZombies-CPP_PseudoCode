// Class: KV


/* KV::~KV() */

void __thiscall KV::~KV(KV *this)

{
  std::_Destroy<std::vector<DString,std::allocator<DString>>*>
            (*(vector **)this,*(vector **)(this + 8));
  std::
  _Vector_base<std::vector<DString,std::allocator<DString>>,std::allocator<std::vector<DString,std::allocator<DString>>>>
  ::~_Vector_base((_Vector_base<std::vector<DString,std::allocator<DString>>,std::allocator<std::vector<DString,std::allocator<DString>>>>
                   *)this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03ec5cf4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* KV::KV(KV const&) */

void __thiscall KV::KV(KV *this,KV *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  vector *pvVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_03eaaf5c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::
  _Vector_base<std::vector<DString,std::allocator<DString>>,std::allocator<std::vector<DString,std::allocator<DString>>>>
  ::_Vector_base((ulong)this,paVar2);
  FUN_03ec0ae8(*(undefined8 *)param_1);
  uVar3 = FUN_03ec0b38(*(undefined8 *)(param_1 + 8));
  pvVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<std::vector<DString,std::allocator<DString>>const*,std::vector<std::vector<DString,std::allocator<DString>>,std::allocator<std::vector<DString,std::allocator<DString>>>>>,std::vector<DString,std::allocator<DString>>*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(vector **)(this + 8) = pvVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KV::add(DString const&) */

void __thiscall KV::add(KV *this,DString *param_1)

{
  char cVar1;
  undefined1 auStack_38 [8];
  undefined8 *local_30 [2];
  vector<DString,std::allocator<DString>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = DString::empty(param_1);
  if (cVar1 == '\0') {
    DString::DString((DString *)local_30,param_1);
    std::vector<DString,std::allocator<DString>>::vector
              (avStack_20,(DString *)local_30,1,auStack_38);
    std::
    vector<std::vector<DString,std::allocator<DString>>,std::allocator<std::vector<DString,std::allocator<DString>>>>
    ::push_back((vector<std::vector<DString,std::allocator<DString>>,std::allocator<std::vector<DString,std::allocator<DString>>>>
                 *)this,(vector *)avStack_20);
    std::vector<DString,std::allocator<DString>>::~vector(avStack_20);
    (*(code *)*local_30[0])((DString *)local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KV::add(DString const&, DString const&) */

void __thiscall KV::add(KV *this,DString *param_1,DString *param_2)

{
  undefined1 auStack_48 [8];
  vector<DString,std::allocator<DString>> avStack_40 [24];
  undefined8 *local_28 [2];
  undefined8 *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString((DString *)local_28,param_1);
  DString::DString((DString *)local_18,param_2);
  std::vector<DString,std::allocator<DString>>::vector(avStack_40,(DString *)local_28,2,auStack_48);
  std::
  vector<std::vector<DString,std::allocator<DString>>,std::allocator<std::vector<DString,std::allocator<DString>>>>
  ::push_back((vector<std::vector<DString,std::allocator<DString>>,std::allocator<std::vector<DString,std::allocator<DString>>>>
               *)this,(vector *)avStack_40);
  std::vector<DString,std::allocator<DString>>::~vector(avStack_40);
  (*(code *)*local_18[0])((DString *)local_18);
  (*(code *)*local_28[0])((DString *)local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* KV::TEMPNAMEPLACEHOLDERVALUE(KV const&) */

KV * __thiscall KV::operator=(KV *this,KV *param_1)

{
  std::
  vector<std::vector<DString,std::allocator<DString>>,std::allocator<std::vector<DString,std::allocator<DString>>>>
  ::operator=((vector<std::vector<DString,std::allocator<DString>>,std::allocator<std::vector<DString,std::allocator<DString>>>>
               *)this,(vector *)param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KV::commit() */

void KV::commit(void)

{
  bool bVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *in_x0;
  vector *pvVar2;
  DString *pDVar3;
  DString *in_x8;
  undefined8 local_40;
  undefined8 local_38;
  DString aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(in_x0);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(in_x0);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    pvVar2 = (vector *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    DString::DString(aDStack_30);
    DString::join(aDStack_30,pvVar2,",");
    std::vector<DString,std::allocator<DString>>::push_back
              ((vector<DString,std::allocator<DString>> *)avStack_20,aDStack_30);
    DString::~DString(aDStack_30);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
  }
  DString::DString(aDStack_30);
  pDVar3 = (DString *)DString::join(aDStack_30,(vector *)avStack_20,";");
  DString::DString(in_x8,pDVar3);
  DString::~DString(aDStack_30);
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

