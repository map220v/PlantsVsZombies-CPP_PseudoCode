// Class: EA::Allocator::EAIOZoneObject


/* EA::Allocator::EAIOZoneObject::~EAIOZoneObject() */

void __thiscall EA::Allocator::EAIOZoneObject::~EAIOZoneObject(EAIOZoneObject *this)

{
  long *plVar1;
  
  if (this != (EAIOZoneObject *)0x0) {
    plVar1 = *(long **)(this + -0x10);
    (**(code **)(*plVar1 + 0x20))(plVar1,this + -0x10,0);
  }
  return;
}


/* EA::Allocator::EAIOZoneObject::EAIOZoneObject() */

void __thiscall EA::Allocator::EAIOZoneObject::EAIOZoneObject(EAIOZoneObject *this)

{
  *(undefined ***)this = &PTR_nop_06a366f0;
  return;
}


/* EA::Allocator::EAIOZoneObject::DoInternalAllocate(unsigned long, EA::Allocator::ICoreAllocator*,
   char const*, unsigned int) */

undefined8 *
EA::Allocator::EAIOZoneObject::DoInternalAllocate
          (ulong param_1,ICoreAllocator *param_2,char *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)
           (**(code **)(*(long *)param_2 + 0x18))(param_2,param_1 + 0x10,param_3,param_4,8,0x10);
  puVar2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1 + 2;
    *puVar1 = param_2;
  }
  return puVar2;
}


/* EA::Allocator::EAIOZoneObject::operator new(unsigned long) */

void * __thiscall EA::Allocator::EAIOZoneObject::operator_new(EAIOZoneObject *this,ulong param_1)

{
  ICoreAllocator *pIVar1;
  void *pvVar2;
  
  pIVar1 = (ICoreAllocator *)IO::GetAllocator();
  pvVar2 = (void *)DoInternalAllocate((ulong)this,pIVar1,"EAIO/EAIOZoneObject",0);
  return pvVar2;
}


/* EA::Allocator::EAIOZoneObject::operator new(unsigned long, EA::Allocator::ICoreAllocator*) */

void * EA::Allocator::EAIOZoneObject::operator_new(ulong param_1,ICoreAllocator *param_2)

{
  void *pvVar1;
  ICoreAllocator *pIVar2;
  
  if (param_2 != (ICoreAllocator *)0x0) {
    pvVar1 = (void *)DoInternalAllocate(param_1,param_2,"EAIO/EAIOZoneObject",0);
    return pvVar1;
  }
  pIVar2 = (ICoreAllocator *)IO::GetAllocator();
  pvVar1 = (void *)DoInternalAllocate(param_1,pIVar2,"EAIO/EAIOZoneObject",0);
  return pvVar1;
}


/* EA::Allocator::EAIOZoneObject::operator new(unsigned long, EA::Allocator::ICoreAllocator*, char
   const*) */

void * EA::Allocator::EAIOZoneObject::operator_new
                 (ulong param_1,ICoreAllocator *param_2,char *param_3)

{
  void *pvVar1;
  ICoreAllocator *pIVar2;
  
  if (param_2 != (ICoreAllocator *)0x0) {
    pvVar1 = (void *)DoInternalAllocate(param_1,param_2,param_3,0);
    return pvVar1;
  }
  pIVar2 = (ICoreAllocator *)IO::GetAllocator();
  pvVar1 = (void *)DoInternalAllocate(param_1,pIVar2,param_3,0);
  return pvVar1;
}


/* EA::Allocator::EAIOZoneObject::operator new(unsigned long, char const*, int, int, char const*,
   int) */

void * EA::Allocator::EAIOZoneObject::operator_new
                 (ulong param_1,char *param_2,int param_3,int param_4,char *param_5,int param_6)

{
  ICoreAllocator *pIVar1;
  void *pvVar2;
  
  pIVar1 = (ICoreAllocator *)IO::GetAllocator();
  pvVar2 = (void *)DoInternalAllocate(param_1,pIVar1,param_2,param_3);
  return pvVar2;
}


/* EA::Allocator::EAIOZoneObject::DoInternalDeallocate(void*) */

void EA::Allocator::EAIOZoneObject::DoInternalDeallocate(void *param_1)

{
  long *plVar1;
  
  if (param_1 != (void *)0x0) {
    plVar1 = *(long **)((long)param_1 + -0x10);
    (**(code **)(*plVar1 + 0x20))(plVar1,(undefined8 *)((long)param_1 + -0x10),0);
  }
  return;
}


/* EA::Allocator::EAIOZoneObject::operator delete(void*, char const*, int, int, char const*, int) */

void EA::Allocator::EAIOZoneObject::operator_delete
               (void *param_1,char *param_2,int param_3,int param_4,char *param_5,int param_6)

{
  long *plVar1;
  code *pcVar2;
  
  if (param_1 != (void *)0x0) {
    plVar1 = *(long **)((long)param_1 + -0x10);
    pcVar2 = *(code **)(*plVar1 + 0x20);
    (*pcVar2)(plVar1,(undefined8 *)((long)param_1 + -0x10),0,pcVar2,param_5,param_6);
  }
  return;
}

