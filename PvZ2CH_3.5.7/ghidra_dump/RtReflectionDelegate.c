// Class: RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>


/* RtReflectionDelegate<Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&> >::~RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
::~RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
           *this)

{
  std::string::~string((string *)(this + 8));
  Sexy::RtId::~RtId((RtId *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<std::string const&> >::ensureCachedDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::ensureCachedDelegate
          (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *this)

{
  undefined8 uVar1;
  RtId *pRVar2;
  undefined8 *puVar3;
  RtClass *this_00;
  RClass *this_01;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  long lVar4;
  undefined8 *puVar5;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  puVar3 = (undefined8 *)Sexy::RtDb::GetObjectForId(pRVar2);
  if (puVar3 == (undefined8 *)0x0) {
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>)0x1;
    Sexy::RtId::RtId(aRStack_10,0);
    Sexy::RtId::operator=((RtId *)this,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  else if (this[0x40] == (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>)0x0) {
    this_00 = (RtClass *)(**(code **)*puVar3)();
    this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
    this_02 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
              Reflection::RClass::GetMethods(this_01,true);
    lVar4 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                      (this_02,(string *)(this + 8));
    puVar5 = (undefined8 *)FUN_033bd2e8(*(undefined8 *)(lVar4 + 0xa0));
    uVar1 = puVar5[1];
    *(undefined8 *)(this + 0x10) = *puVar5;
    *(undefined8 *)(this + 0x18) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(this + 0x20) = puVar5[2];
    *(undefined8 *)(this + 0x28) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(this + 0x30) = puVar5[4];
    *(undefined8 *)(this + 0x38) = uVar1;
    FUN_033bd2c4(this + 0x28,puVar3);
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<std::string const&> >::RtReflectionDelegate(Sexy::RtId,
   std::string const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *this,RtId *param_2,
          undefined8 param_3)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_10,param_2);
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,aRStack_10,param_3);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>)0x0;
  ensureCachedDelegate(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate1<std::string const&> > const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *this,
          RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate1<std::string_const&>::Delegate1
            ((Delegate1<std::string_const&> *)(this + 0x10),param_1 + 0x10);
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(param_1 + 0x40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate3<std::string const&, std::string const&, int>
   >::ensureCachedDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
ensureCachedDelegate
          (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *this)

{
  undefined8 uVar1;
  RtId *pRVar2;
  undefined8 *puVar3;
  RtClass *this_00;
  RClass *this_01;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  long lVar4;
  undefined8 *puVar5;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  puVar3 = (undefined8 *)Sexy::RtDb::GetObjectForId(pRVar2);
  if (puVar3 == (undefined8 *)0x0) {
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>)
                 0x1;
    Sexy::RtId::RtId(aRStack_10,0);
    Sexy::RtId::operator=((RtId *)this,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  else if (this[0x40] ==
           (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>)0x0) {
    this_00 = (RtClass *)(**(code **)*puVar3)();
    this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
    this_02 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
              Reflection::RClass::GetMethods(this_01,true);
    lVar4 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                      (this_02,(string *)(this + 8));
    puVar5 = (undefined8 *)FUN_033d3810(*(undefined8 *)(lVar4 + 0xa0));
    uVar1 = puVar5[1];
    *(undefined8 *)(this + 0x10) = *puVar5;
    *(undefined8 *)(this + 0x18) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(this + 0x20) = puVar5[2];
    *(undefined8 *)(this + 0x28) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(this + 0x30) = puVar5[4];
    *(undefined8 *)(this + 0x38) = uVar1;
    FUN_033d37ec(this + 0x28,puVar3);
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>)
                 0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate3<std::string const&, std::string const&, int>
   >::RtReflectionDelegate(Sexy::RtId, std::string const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *this,
          RtId *param_2,undefined8 param_3)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_10,param_2);
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,aRStack_10,param_3);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>)0x0
  ;
  ensureCachedDelegate(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RtReflectionDelegate<Sexy::Delegate1<RealObject*>
   >::TEMPNAMEPLACEHOLDERVALUE(RtReflectionDelegate<Sexy::Delegate1<RealObject*> > const&) */

RtReflectionDelegate<Sexy::Delegate1<RealObject*>> * __thiscall
RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
          (RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::operator=
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x10),(Delegate2 *)(param_1 + 0x10));
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(param_1 + 0x40);
  return this;
}


/* RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate0> *this)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase((RtReflectionDelegateBase *)this);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x10),(DummyInit *)0x0);
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate0>)0x0;
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<Zombie*> >::RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *this)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase((RtReflectionDelegateBase *)this);
  Sexy::Delegate1<Zombie*>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<Zombie*>>)0x0;
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<RealObject*> >::doesObjectExist() const */

bool __thiscall
RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::doesObjectExist
          (RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *this)

{
  bool bVar1;
  long lVar2;
  RtId *pRVar3;
  
  lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this);
  bVar1 = false;
  if (lVar2 != 0) {
    pRVar3 = (RtId *)Sexy::RtDb::GetDb();
    lVar2 = Sexy::RtDb::GetObjectForId(pRVar3);
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


/* RtReflectionDelegate<Sexy::Delegate1<RealObject*> >::operator int() const */

int __thiscall RtReflectionDelegate::operator_cast_to_int(RtReflectionDelegate *this)

{
  uint uVar1;
  
  uVar1 = RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::doesObjectExist
                    ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)this);
  return uVar1 & 0xff;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate0>::ensureCachedDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate0>::ensureCachedDelegate
          (RtReflectionDelegate<Sexy::Delegate0> *this)

{
  undefined8 uVar1;
  RtId *pRVar2;
  undefined8 *puVar3;
  RtClass *this_00;
  RClass *this_01;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  long lVar4;
  undefined8 *puVar5;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  puVar3 = (undefined8 *)Sexy::RtDb::GetObjectForId(pRVar2);
  if (puVar3 == (undefined8 *)0x0) {
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate0>)0x1;
    Sexy::RtId::RtId(aRStack_10,0);
    Sexy::RtId::operator=((RtId *)this,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  else if (this[0x40] == (RtReflectionDelegate<Sexy::Delegate0>)0x0) {
    this_00 = (RtClass *)(**(code **)*puVar3)();
    this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
    this_02 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
              Reflection::RClass::GetMethods(this_01,true);
    lVar4 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                      (this_02,(string *)(this + 8));
    puVar5 = (undefined8 *)FUN_033e1214(*(undefined8 *)(lVar4 + 0xa0));
    uVar1 = puVar5[1];
    *(undefined8 *)(this + 0x10) = *puVar5;
    *(undefined8 *)(this + 0x18) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(this + 0x20) = puVar5[2];
    *(undefined8 *)(this + 0x28) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(this + 0x30) = puVar5[4];
    *(undefined8 *)(this + 0x38) = uVar1;
    FUN_033e11f0(this + 0x28,puVar3);
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate0>)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(Sexy::RtId, std::string const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate0> *this,RtId *param_2,undefined8 param_3)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_10,param_2);
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,aRStack_10,param_3);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x10),(DummyInit *)0x0);
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate0>)0x0;
  ensureCachedDelegate(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RtReflectionDelegate<Sexy::Delegate0>::GetDelegate() */

RtReflectionDelegate<Sexy::Delegate0> * __thiscall
RtReflectionDelegate<Sexy::Delegate0>::GetDelegate(RtReflectionDelegate<Sexy::Delegate0> *this)

{
  ensureCachedDelegate(this);
  return this + 0x10;
}


/* RtReflectionDelegate<Sexy::Delegate3<std::string const&, std::string const&, int>
   >::RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *this)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase((RtReflectionDelegateBase *)this);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>)0x0
  ;
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<std::string const&> >::RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *this)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase((RtReflectionDelegateBase *)this);
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*> >::ensureCachedDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::ensureCachedDelegate
          (RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *this)

{
  undefined8 uVar1;
  RtId *pRVar2;
  undefined8 *puVar3;
  RtClass *this_00;
  RClass *this_01;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  long lVar4;
  undefined8 *puVar5;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  puVar3 = (undefined8 *)Sexy::RtDb::GetObjectForId(pRVar2);
  if (puVar3 == (undefined8 *)0x0) {
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>)0x1;
    Sexy::RtId::RtId(aRStack_10,0);
    Sexy::RtId::operator=((RtId *)this,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  else if (this[0x40] == (RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>)0x0) {
    this_00 = (RtClass *)(**(code **)*puVar3)();
    this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
    this_02 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
              Reflection::RClass::GetMethods(this_01,true);
    lVar4 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                      (this_02,(string *)(this + 8));
    puVar5 = (undefined8 *)FUN_03461eb4(*(undefined8 *)(lVar4 + 0xa0));
    uVar1 = puVar5[1];
    *(undefined8 *)(this + 0x10) = *puVar5;
    *(undefined8 *)(this + 0x18) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(this + 0x20) = puVar5[2];
    *(undefined8 *)(this + 0x28) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(this + 0x30) = puVar5[4];
    *(undefined8 *)(this + 0x38) = uVar1;
    FUN_03461e90(this + 0x28,puVar3);
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*> >::RtReflectionDelegate(Sexy::RtId,
   std::string const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *this,RtId *param_2,
          undefined8 param_3)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_10,param_2);
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,aRStack_10,param_3);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::Delegate1<StandaloneEffect*>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>)0x0;
  ensureCachedDelegate(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RtReflectionDelegate<Sexy::Delegate1<Plant*>
   >::TEMPNAMEPLACEHOLDERVALUE(RtReflectionDelegate<Sexy::Delegate1<Plant*> >&&) */

RtReflectionDelegate<Sexy::Delegate1<Plant*>> * __thiscall
RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
          (RtReflectionDelegate<Sexy::Delegate1<Plant*>> *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::operator=
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x10),(Delegate2 *)(param_1 + 0x10));
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(param_1 + 0x40);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<Zombie*> >::ensureCachedDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::ensureCachedDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *this)

{
  undefined8 uVar1;
  RtId *pRVar2;
  undefined8 *puVar3;
  RtClass *this_00;
  RClass *this_01;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  long lVar4;
  undefined8 *puVar5;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  puVar3 = (undefined8 *)Sexy::RtDb::GetObjectForId(pRVar2);
  if (puVar3 == (undefined8 *)0x0) {
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<Zombie*>>)0x1;
    Sexy::RtId::RtId(aRStack_10,0);
    Sexy::RtId::operator=((RtId *)this,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  else if (this[0x40] == (RtReflectionDelegate<Sexy::Delegate1<Zombie*>>)0x0) {
    this_00 = (RtClass *)(**(code **)*puVar3)();
    this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
    this_02 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
              Reflection::RClass::GetMethods(this_01,true);
    lVar4 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                      (this_02,(string *)(this + 8));
    puVar5 = (undefined8 *)FUN_0362beb8(*(undefined8 *)(lVar4 + 0xa0));
    uVar1 = puVar5[1];
    *(undefined8 *)(this + 0x10) = *puVar5;
    *(undefined8 *)(this + 0x18) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(this + 0x20) = puVar5[2];
    *(undefined8 *)(this + 0x28) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(this + 0x30) = puVar5[4];
    *(undefined8 *)(this + 0x38) = uVar1;
    FUN_0362be88(this + 0x28,puVar3);
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<Zombie*>>)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<Zombie*> >::RtReflectionDelegate(Sexy::RtId, std::string
   const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *this,RtId *param_2,undefined8 param_3)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_10,param_2);
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,aRStack_10,param_3);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::Delegate1<Zombie*>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<Zombie*>>)0x0;
  ensureCachedDelegate(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate() */

RtReflectionDelegate<Sexy::Delegate0> * __thiscall
RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate(RtReflectionDelegate<Sexy::Delegate0> *this)

{
  RtReflectionDelegate<Sexy::Delegate0> *pRVar1;
  char cVar2;
  
  ensureCachedDelegate(this);
  pRVar1 = this + 0x10;
  cVar2 = RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::doesObjectExist
                    ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)this);
  if (cVar2 == '\0') {
    pRVar1 = (RtReflectionDelegate<Sexy::Delegate0> *)0x0;
  }
  return pRVar1;
}


/* RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*> >::RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *this)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase((RtReflectionDelegateBase *)this);
  Sexy::Delegate1<StandaloneEffect*>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<RealObject*> >::ensureCachedDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::ensureCachedDelegate
          (RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *this)

{
  undefined8 uVar1;
  RtId *pRVar2;
  undefined8 *puVar3;
  RtClass *this_00;
  RClass *this_01;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  long lVar4;
  undefined8 *puVar5;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  puVar3 = (undefined8 *)Sexy::RtDb::GetObjectForId(pRVar2);
  if (puVar3 == (undefined8 *)0x0) {
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<RealObject*>>)0x1;
    Sexy::RtId::RtId(aRStack_10,0);
    Sexy::RtId::operator=((RtId *)this,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  else if (this[0x40] == (RtReflectionDelegate<Sexy::Delegate1<RealObject*>>)0x0) {
    this_00 = (RtClass *)(**(code **)*puVar3)();
    this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
    this_02 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
              Reflection::RClass::GetMethods(this_01,true);
    lVar4 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                      (this_02,(string *)(this + 8));
    puVar5 = (undefined8 *)FUN_037239e8(*(undefined8 *)(lVar4 + 0xa0));
    uVar1 = puVar5[1];
    *(undefined8 *)(this + 0x10) = *puVar5;
    *(undefined8 *)(this + 0x18) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(this + 0x20) = puVar5[2];
    *(undefined8 *)(this + 0x28) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(this + 0x30) = puVar5[4];
    *(undefined8 *)(this + 0x38) = uVar1;
    FUN_037239bc(this + 0x28,puVar3);
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<RealObject*>>)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<RealObject*> >::RtReflectionDelegate(Sexy::RtId, std::string
   const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *this,RtId *param_2,undefined8 param_3
          )

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_10,param_2);
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,aRStack_10,param_3);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::Delegate1<RealObject*>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<RealObject*>>)0x0;
  ensureCachedDelegate(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RtReflectionDelegate<Sexy::Delegate2<Projectile*, int>
   >::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate2<Projectile*, int> > const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *this,
          RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate2<Projectile*,int>::Delegate2
            ((Delegate2<Projectile*,int> *)(this + 0x10),(Delegate2 *)(param_1 + 0x10));
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *)(param_1 + 0x40);
  return;
}


/* RtReflectionDelegate<Sexy::Delegate2<Projectile*, int> >::RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *this)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase((RtReflectionDelegateBase *)this);
  Sexy::Delegate2<Projectile*,int>::Delegate2((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>)0x0;
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<bool> >::RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<bool>> *this)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase((RtReflectionDelegateBase *)this);
  Sexy::Delegate1<bool>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<bool>>)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate2<Projectile*, int> >::ensureCachedDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::ensureCachedDelegate
          (RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *this)

{
  undefined8 uVar1;
  RtId *pRVar2;
  undefined8 *puVar3;
  RtClass *this_00;
  RClass *this_01;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  long lVar4;
  undefined8 *puVar5;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  puVar3 = (undefined8 *)Sexy::RtDb::GetObjectForId(pRVar2);
  if (puVar3 == (undefined8 *)0x0) {
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>)0x1;
    Sexy::RtId::RtId(aRStack_10,0);
    Sexy::RtId::operator=((RtId *)this,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  else if (this[0x40] == (RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>)0x0) {
    this_00 = (RtClass *)(**(code **)*puVar3)();
    this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
    this_02 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
              Reflection::RClass::GetMethods(this_01,true);
    lVar4 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                      (this_02,(string *)(this + 8));
    puVar5 = (undefined8 *)FUN_037c0d74(*(undefined8 *)(lVar4 + 0xa0));
    uVar1 = puVar5[1];
    *(undefined8 *)(this + 0x10) = *puVar5;
    *(undefined8 *)(this + 0x18) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(this + 0x20) = puVar5[2];
    *(undefined8 *)(this + 0x28) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(this + 0x30) = puVar5[4];
    *(undefined8 *)(this + 0x38) = uVar1;
    FUN_037c0d40(this + 0x28,puVar3);
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<bool> >::RtReflectionDelegate(Sexy::RtId, std::string
   const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<bool>> *this,RtId *param_2,undefined8 param_3)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_10,param_2);
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,aRStack_10,param_3);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::Delegate1<bool>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<bool>>)0x0;
  RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::ensureCachedDelegate
            ((RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RtReflectionDelegate<Sexy::Delegate1<bool> >::TryGetDelegate() */

RtReflectionDelegate<Sexy::Delegate1<bool>> * __thiscall
RtReflectionDelegate<Sexy::Delegate1<bool>>::TryGetDelegate
          (RtReflectionDelegate<Sexy::Delegate1<bool>> *this)

{
  RtReflectionDelegate<Sexy::Delegate1<bool>> *pRVar1;
  char cVar2;
  
  RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::ensureCachedDelegate
            ((RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *)this);
  pRVar1 = this + 0x10;
  cVar2 = RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::doesObjectExist
                    ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)this);
  if (cVar2 == '\0') {
    pRVar1 = (RtReflectionDelegate<Sexy::Delegate1<bool>> *)0x0;
  }
  return pRVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate2<Projectile*, int> >::RtReflectionDelegate(Sexy::RtId,
   std::string const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *this,RtId *param_2,
          undefined8 param_3)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_10,param_2);
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,aRStack_10,param_3);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::Delegate2<Projectile*,int>::Delegate2((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>)0x0;
  ensureCachedDelegate(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RtReflectionDelegate<Sexy::Delegate2<Projectile*, int> >::GetDelegate() */

RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> * __thiscall
RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::GetDelegate
          (RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *this)

{
  ensureCachedDelegate(this);
  return this + 0x10;
}


/* RtReflectionDelegate<Sexy::Delegate1<bool>
   >::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate1<bool> > const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<bool>> *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate1<bool>::Delegate1((Delegate1<bool> *)(this + 0x10),param_1 + 0x10);
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate1<bool>> *)(param_1 + 0x40);
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<bool>
   >::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate1<bool> >&&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<bool>> *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate1<bool>::Delegate1((Delegate1<bool> *)(this + 0x10),param_1 + 0x10);
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate1<bool>> *)(param_1 + 0x40);
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<Zombie*>
   >::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate1<Zombie*> > const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate1<Zombie*>::Delegate1((Delegate1<Zombie*> *)(this + 0x10),param_1 + 0x10);
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(param_1 + 0x40);
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<Zombie*> >::GetDelegate() */

RtReflectionDelegate<Sexy::Delegate1<Zombie*>> * __thiscall
RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::GetDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *this)

{
  ensureCachedDelegate(this);
  return this + 0x10;
}


/* RtReflectionDelegate<Sexy::Delegate1<Zombie*>
   >::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate1<Zombie*> >&&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate1<Zombie*>::Delegate1((Delegate1<Zombie*> *)(this + 0x10),param_1 + 0x10);
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(param_1 + 0x40);
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<float>
   >::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate1<float> > const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<float>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<float>> *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate1<float>::Delegate1((Delegate1<float> *)(this + 0x10),param_1 + 0x10);
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate1<float>> *)(param_1 + 0x40);
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<float> >::RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<float>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<float>> *this)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase((RtReflectionDelegateBase *)this);
  Sexy::Delegate1<float>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<float>>)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<float> >::ensureCachedDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<float>>::ensureCachedDelegate
          (RtReflectionDelegate<Sexy::Delegate1<float>> *this)

{
  undefined8 uVar1;
  RtId *pRVar2;
  undefined8 *puVar3;
  RtClass *this_00;
  RClass *this_01;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  long lVar4;
  undefined8 *puVar5;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  puVar3 = (undefined8 *)Sexy::RtDb::GetObjectForId(pRVar2);
  if (puVar3 == (undefined8 *)0x0) {
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<float>>)0x1;
    Sexy::RtId::RtId(aRStack_10,0);
    Sexy::RtId::operator=((RtId *)this,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  else if (this[0x40] == (RtReflectionDelegate<Sexy::Delegate1<float>>)0x0) {
    this_00 = (RtClass *)(**(code **)*puVar3)();
    this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
    this_02 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
              Reflection::RClass::GetMethods(this_01,true);
    lVar4 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                      (this_02,(string *)(this + 8));
    puVar5 = (undefined8 *)FUN_03868f54(*(undefined8 *)(lVar4 + 0xa0));
    uVar1 = puVar5[1];
    *(undefined8 *)(this + 0x10) = *puVar5;
    *(undefined8 *)(this + 0x18) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(this + 0x20) = puVar5[2];
    *(undefined8 *)(this + 0x28) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(this + 0x30) = puVar5[4];
    *(undefined8 *)(this + 0x38) = uVar1;
    FUN_03868f40(this + 0x28,puVar3);
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<float>>)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RtReflectionDelegate<Sexy::Delegate1<float> >::GetDelegate() */

RtReflectionDelegate<Sexy::Delegate1<float>> * __thiscall
RtReflectionDelegate<Sexy::Delegate1<float>>::GetDelegate
          (RtReflectionDelegate<Sexy::Delegate1<float>> *this)

{
  ensureCachedDelegate(this);
  return this + 0x10;
}


/* RtReflectionDelegate<Sexy::Delegate1<float>
   >::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate1<float> >&&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<float>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<float>> *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate1<float>::Delegate1((Delegate1<float> *)(this + 0x10),param_1 + 0x10);
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate1<float>> *)(param_1 + 0x40);
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<std::string const&> >::GetDelegate() */

RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> * __thiscall
RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::GetDelegate
          (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *this)

{
  ensureCachedDelegate(this);
  return this + 0x10;
}


/* RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate0>
   const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate0> *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x10),(Delegate0 *)(param_1 + 0x10));
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate0> *)(param_1 + 0x40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<Plant*> >::ensureCachedDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<Plant*>>::ensureCachedDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Plant*>> *this)

{
  undefined8 uVar1;
  RtId *pRVar2;
  undefined8 *puVar3;
  RtClass *this_00;
  RClass *this_01;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  long lVar4;
  undefined8 *puVar5;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  puVar3 = (undefined8 *)Sexy::RtDb::GetObjectForId(pRVar2);
  if (puVar3 == (undefined8 *)0x0) {
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<Plant*>>)0x1;
    Sexy::RtId::RtId(aRStack_10,0);
    Sexy::RtId::operator=((RtId *)this,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  else if (this[0x40] == (RtReflectionDelegate<Sexy::Delegate1<Plant*>>)0x0) {
    this_00 = (RtClass *)(**(code **)*puVar3)();
    this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
    this_02 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
              Reflection::RClass::GetMethods(this_01,true);
    lVar4 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                      (this_02,(string *)(this + 8));
    puVar5 = (undefined8 *)FUN_04065138(*(undefined8 *)(lVar4 + 0xa0));
    uVar1 = puVar5[1];
    *(undefined8 *)(this + 0x10) = *puVar5;
    *(undefined8 *)(this + 0x18) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(this + 0x20) = puVar5[2];
    *(undefined8 *)(this + 0x28) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(this + 0x30) = puVar5[4];
    *(undefined8 *)(this + 0x38) = uVar1;
    FUN_04065128(this + 0x28,puVar3);
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<Plant*>>)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate1<Plant*> >::RtReflectionDelegate(Sexy::RtId, std::string
   const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<Plant*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Plant*>> *this,RtId *param_2,undefined8 param_3)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_10,param_2);
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,aRStack_10,param_3);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::Delegate1<Plant*>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<Plant*>>)0x0;
  ensureCachedDelegate(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&> >::ensureCachedDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
::ensureCachedDelegate
          (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
           *this)

{
  undefined8 uVar1;
  RtId *pRVar2;
  undefined8 *puVar3;
  RtClass *this_00;
  RClass *this_01;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  long lVar4;
  undefined8 *puVar5;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  puVar3 = (undefined8 *)Sexy::RtDb::GetObjectForId(pRVar2);
  if (puVar3 == (undefined8 *)0x0) {
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  )0x1;
    Sexy::RtId::RtId(aRStack_10,0);
    Sexy::RtId::operator=((RtId *)this,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  else if (this[0x40] ==
           (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            )0x0) {
    this_00 = (RtClass *)(**(code **)*puVar3)();
    this_01 = (RClass *)Sexy::RtClass::GetBoundReflectionClass(this_00,true);
    this_02 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
              Reflection::RClass::GetMethods(this_01,true);
    lVar4 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed
                      (this_02,(string *)(this + 8));
    puVar5 = (undefined8 *)FUN_041a05d0(*(undefined8 *)(lVar4 + 0xa0));
    uVar1 = puVar5[1];
    *(undefined8 *)(this + 0x10) = *puVar5;
    *(undefined8 *)(this + 0x18) = uVar1;
    uVar1 = puVar5[3];
    *(undefined8 *)(this + 0x20) = puVar5[2];
    *(undefined8 *)(this + 0x28) = uVar1;
    uVar1 = puVar5[5];
    *(undefined8 *)(this + 0x30) = puVar5[4];
    *(undefined8 *)(this + 0x38) = uVar1;
    FUN_041a05ac(this + 0x28,puVar3);
    this[0x40] = (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  )0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RtReflectionDelegate<Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&> >::RtReflectionDelegate(Sexy::RtId, std::string const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
           *this,RtId *param_2,undefined8 param_3)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_10,param_2);
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,aRStack_10,param_3);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::Delegate4
            ((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                )0x0;
  ensureCachedDelegate(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RtReflectionDelegate<Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&> >::RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
           *this)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase((RtReflectionDelegateBase *)this);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::Delegate4
            ((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                )0x0;
  return;
}


/* RtReflectionDelegate<Sexy::Delegate3<std::string const&, std::string const&, int>
   >::GetDelegate() */

RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> * __thiscall
RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::GetDelegate
          (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *this)

{
  ensureCachedDelegate(this);
  return this + 0x10;
}


/* RtReflectionDelegate<Sexy::Delegate4<std::string const&, float, std::string const&, std::string
   const&> >::GetDelegate() */

RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
* __thiscall
RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
::GetDelegate(RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *this)

{
  ensureCachedDelegate(this);
  return this + 0x10;
}


/* RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*> >::TryGetDelegate() */

RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> * __thiscall
RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::TryGetDelegate
          (RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *this)

{
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *pRVar1;
  char cVar2;
  
  ensureCachedDelegate(this);
  pRVar1 = this + 0x10;
  cVar2 = RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::doesObjectExist
                    ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)this);
  if (cVar2 == '\0') {
    pRVar1 = (RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)0x0;
  }
  return pRVar1;
}


/* RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*> >::GetDelegate() */

RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> * __thiscall
RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::GetDelegate
          (RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *this)

{
  ensureCachedDelegate(this);
  return this + 0x10;
}


/* RtReflectionDelegate<Sexy::Delegate3<std::string const&, std::string const&, int>
   >::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate3<std::string const&, std::string
   const&, int> > const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *this,
          RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3
            ((Delegate3<std::string_const&,std::string_const&,int> *)(this + 0x10),
             (Delegate3 *)(param_1 + 0x10));
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
                (param_1 + 0x40);
  return;
}


/* RtReflectionDelegate<Sexy::Delegate3<std::string const&, std::string const&, int>
   >::TryGetDelegate() */

RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> * __thiscall
RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::TryGetDelegate
          (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *this)

{
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *pRVar1;
  char cVar2;
  
  ensureCachedDelegate(this);
  pRVar1 = this + 0x10;
  cVar2 = RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::doesObjectExist
                    ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)this);
  if (cVar2 == '\0') {
    pRVar1 = (RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)0x0
    ;
  }
  return pRVar1;
}


/* RtReflectionDelegate<Sexy::Delegate1<Plant*> >::RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<Plant*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Plant*>> *this)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase((RtReflectionDelegateBase *)this);
  Sexy::Delegate1<Plant*>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<Plant*>>)0x0;
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<Plant*> >::GetDelegate() */

RtReflectionDelegate<Sexy::Delegate1<Plant*>> * __thiscall
RtReflectionDelegate<Sexy::Delegate1<Plant*>>::GetDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Plant*>> *this)

{
  ensureCachedDelegate(this);
  return this + 0x10;
}


/* RtReflectionDelegate<Sexy::Delegate1<Plant*>
   >::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate1<Plant*> > const&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<Plant*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Plant*>> *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate1<Plant*>::Delegate1((Delegate1<Plant*> *)(this + 0x10),param_1 + 0x10);
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(param_1 + 0x40);
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<Plant*>
   >::RtReflectionDelegate(RtReflectionDelegate<Sexy::Delegate1<Plant*> >&&) */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<Plant*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<Plant*>> *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase
            ((RtReflectionDelegateBase *)this,(RtReflectionDelegateBase *)param_1);
  Sexy::Delegate1<Plant*>::Delegate1((Delegate1<Plant*> *)(this + 0x10),param_1 + 0x10);
  this[0x40] = *(RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(param_1 + 0x40);
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<RealObject*> >::RtReflectionDelegate() */

void __thiscall
RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
          (RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *this)

{
  RtReflectionDelegateBase::RtReflectionDelegateBase((RtReflectionDelegateBase *)this);
  Sexy::Delegate1<RealObject*>::Delegate1((DummyInit *)(this + 0x10));
  this[0x40] = (RtReflectionDelegate<Sexy::Delegate1<RealObject*>>)0x0;
  return;
}


/* RtReflectionDelegate<Sexy::Delegate1<RealObject*> >::GetDelegate() */

RtReflectionDelegate<Sexy::Delegate1<RealObject*>> * __thiscall
RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::GetDelegate
          (RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *this)

{
  ensureCachedDelegate(this);
  return this + 0x10;
}

