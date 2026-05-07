// Class: EA::Thread::AtomicInt<int>


/* EA::Thread::AtomicInt<int>::GetValue() const */

undefined4 __thiscall EA::Thread::AtomicInt<int>::GetValue(AtomicInt<int> *this)

{
  return *(undefined4 *)this;
}


/* EA::Thread::AtomicInt<int>::Increment() */

int __thiscall EA::Thread::AtomicInt<int>::Increment(AtomicInt<int> *this)

{
  int iVar1;
  
  iVar1 = __atomic_inc_ex2((int *)this);
  return iVar1 + 1;
}


/* EA::Thread::AtomicInt<int>::Decrement() */

int __thiscall EA::Thread::AtomicInt<int>::Decrement(AtomicInt<int> *this)

{
  int iVar1;
  
  iVar1 = __atomic_dec_ex2((int *)this);
  return iVar1 + -1;
}


/* EA::Thread::AtomicInt<unsigned long>::SetValue(unsigned long) */

undefined8 __thiscall
EA::Thread::AtomicInt<unsigned_long>::SetValue(AtomicInt<unsigned_long> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)this;
  android_fake_atomic_swap_64(param_1,(long *)this);
  return uVar1;
}


/* EA::Thread::AtomicInt<unsigned long>::SetValueConditional(unsigned long, unsigned long) */

bool __thiscall
EA::Thread::AtomicInt<unsigned_long>::SetValueConditional
          (AtomicInt<unsigned_long> *this,ulong param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = android_fake_atomic_cmpxchg_64(param_2,param_1,(long *)this);
  return iVar1 == 0;
}


/* EA::Thread::AtomicInt<unsigned long>::Add(unsigned long) */

undefined8 __thiscall
EA::Thread::AtomicInt<unsigned_long>::Add(AtomicInt<unsigned_long> *this,ulong param_1)

{
  int iVar1;
  
  do {
    iVar1 = android_fake_atomic_cmpxchg_64(*(long *)this,param_1 + *(long *)this,(long *)this);
  } while (iVar1 != 0);
  return *(undefined8 *)this;
}


/* EA::Thread::AtomicInt<unsigned long>::Increment() */

void __thiscall EA::Thread::AtomicInt<unsigned_long>::Increment(AtomicInt<unsigned_long> *this)

{
  Add(this,1);
  return;
}


/* EA::Thread::AtomicInt<unsigned long>::Decrement() */

void __thiscall EA::Thread::AtomicInt<unsigned_long>::Decrement(AtomicInt<unsigned_long> *this)

{
  Add(this,0xffffffffffffffff);
  return;
}


/* EA::Thread::AtomicInt<unsigned long>::AtomicInt(unsigned long) */

undefined8 __thiscall
EA::Thread::AtomicInt<unsigned_long>::AtomicInt(AtomicInt<unsigned_long> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)this;
  android_fake_atomic_swap_64(param_1,(long *)this);
  return uVar1;
}


/* EA::Thread::AtomicInt<unsigned long>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall EA::Thread::AtomicInt<unsigned_long>::operator++(AtomicInt<unsigned_long> *this)

{
  Add(this,1);
  return;
}


/* EA::Thread::AtomicInt<unsigned long>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall EA::Thread::AtomicInt<unsigned_long>::operator--(AtomicInt<unsigned_long> *this)

{
  Add(this,0xffffffffffffffff);
  return;
}


/* EA::Thread::AtomicInt<int>::AtomicInt(int) */

void __thiscall EA::Thread::AtomicInt<int>::AtomicInt(AtomicInt<int> *this,int param_1)

{
  Sexy::__atomic_swap_ex(param_1,(int *)this);
  return;
}


/* EA::Thread::AtomicInt<int>::TEMPNAMEPLACEHOLDERVALUE() */

int __thiscall EA::Thread::AtomicInt<int>::operator++(AtomicInt<int> *this)

{
  int iVar1;
  
  iVar1 = __atomic_inc_ex2((int *)this);
  return iVar1 + 1;
}


/* EA::Thread::AtomicInt<int>::SetValueConditional(int, int) */

bool __thiscall
EA::Thread::AtomicInt<int>::SetValueConditional(AtomicInt<int> *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __atomic_cmpxchg_ex2(param_2,param_1,(int *)this);
  return iVar1 == 0;
}


/* EA::Thread::AtomicInt<int>::TEMPNAMEPLACEHOLDERVALUE(int) */

int __thiscall EA::Thread::AtomicInt<int>::operator=(AtomicInt<int> *this,int param_1)

{
  Sexy::AtomicSet((int *)this,param_1);
  return param_1;
}


/* EA::Thread::AtomicInt<int>::TEMPNAMEPLACEHOLDERVALUE() */

int __thiscall EA::Thread::AtomicInt<int>::operator--(AtomicInt<int> *this)

{
  int iVar1;
  
  iVar1 = __atomic_dec_ex2((int *)this);
  return iVar1 + -1;
}


/* EA::Thread::AtomicInt<int>::operator int const() const */

int __thiscall EA::Thread::AtomicInt::operator_cast_to_int(AtomicInt *this)

{
  return *(int *)this;
}

