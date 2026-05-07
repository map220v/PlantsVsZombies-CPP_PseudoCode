// Class: DamageLifetime


/* DamageLifetime::DamageLifetime() */

void __thiscall DamageLifetime::DamageLifetime(DamageLifetime *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0675b2d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* DamageLifetime::~DamageLifetime() */

void __thiscall DamageLifetime::~DamageLifetime(DamageLifetime *this)

{
  *(undefined ***)this = &PTR_GetClass_0675b2d0;
  std::vector<DamagePhase,std::allocator<DamagePhase>>::~vector
            ((vector<DamagePhase,std::allocator<DamagePhase>> *)(this + 8));
  nop();
  return;
}


/* DamageLifetime::~DamageLifetime() */

void __thiscall DamageLifetime::~DamageLifetime(DamageLifetime *this)

{
  ~DamageLifetime(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DamageLifetime::StaticClassInit() */

void DamageLifetime::StaticClassInit(void)

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
    std::string::string(asStack_10,"DamageLifetime");
    (*pcVar2)(plVar1,asStack_10,FUN_03c90bb0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DamageLifetime::StaticGetClass() */

long * DamageLifetime::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DamageLifetime",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DamageLifetime::GetClass() const */

long * DamageLifetime::GetClass(void)

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
  (*pcVar3)(plVar1,"DamageLifetime",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DamageLifetime::getDamagePhase(float, float) const */

ulong __thiscall DamageLifetime::getDamagePhase(DamageLifetime *this,float param_1,float param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 8);
  lVar1 = FUN_03c90060(uVar5,*(undefined8 *)(this + 0x10));
  if (lVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0;
    if (lVar1 != 1) {
      uVar3 = 0;
      do {
        lVar2 = FUN_03c90090(uVar5,uVar3);
        if (*(float *)(lVar2 + 8) <= param_1 / param_2) {
          return uVar3 & 0xffffffff;
        }
        uVar4 = (ulong)((int)uVar3 + 1);
        uVar3 = uVar3 + 1;
      } while (lVar1 - 1U != uVar3);
    }
  }
  return uVar4;
}


/* DamageLifetime::StaticNew() */

DamageLifetime * DamageLifetime::StaticNew(void)

{
  DamageLifetime *this;
  
  this = ::operator_new(0x20);
  DamageLifetime(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DamageLifetime::switchToPhase(int, PopAnimRig*) const */

void __thiscall DamageLifetime::switchToPhase(DamageLifetime *this,int param_1,PopAnimRig *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (PopAnimRig *)0x0) {
    uVar6 = *(undefined8 *)(this + 8);
    lVar3 = FUN_03c90060(uVar6,*(undefined8 *)(this + 0x10));
    if (lVar3 != 0) {
      lVar7 = 0;
      while( true ) {
        lVar4 = FUN_03c90090(uVar6,lVar7);
        if (param_1 == (int)lVar7) {
          cVar1 = FUN_0547419c(lVar4 + 0x10);
          if (cVar1 == '\0') {
            pcVar5 = *(code **)(*(long *)param_2 + 0x78);
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
            (*pcVar5)(param_2,lVar4 + 0x10,0,0,(string *)local_20);
            std::vector<int,std::allocator<int>>::~vector
                      ((vector<int,std::allocator<int>> *)local_20);
          }
          cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                            ((vector<std::string,std::allocator<std::string>> *)(lVar4 + 0x18));
          if (cVar1 == '\0') {
            local_28 = FUN_03c906d0(*(undefined8 *)(lVar4 + 0x18));
            while( true ) {
              local_20[0] = FUN_03c90720(*(undefined8 *)(lVar4 + 0x20));
              bVar2 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
              if (!bVar2) break;
              uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
              FUN_05475d88((string *)local_20,uVar6);
              PopAnimRig::SetLayerVisibility(param_2,(string *)local_20,true);
              std::string::~string((string *)local_20);
              FUN_03c90770((exception_ptr *)&local_28);
            }
          }
        }
        else {
          cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                            ((vector<std::string,std::allocator<std::string>> *)(lVar4 + 0x18));
          if (cVar1 == '\0') {
            local_28 = FUN_03c906d0(*(undefined8 *)(lVar4 + 0x18));
            while( true ) {
              local_20[0] = FUN_03c90720(*(undefined8 *)(lVar4 + 0x20));
              bVar2 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
              if (!bVar2) break;
              uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
              FUN_05475d88((string *)local_20,uVar6);
              PopAnimRig::SetLayerVisibility(param_2,(string *)local_20,false);
              std::string::~string((string *)local_20);
              FUN_03c90770((exception_ptr *)&local_28);
            }
          }
        }
        if (lVar7 + 1 == lVar3) break;
        lVar7 = lVar7 + 1;
        uVar6 = *(undefined8 *)(this + 8);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DamageLifetime::OnHealthChanged(float, float, PopAnimRig*, int) const */

int __thiscall
DamageLifetime::OnHealthChanged
          (DamageLifetime *this,float param_1,float param_2,PopAnimRig *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_03c90060(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  if (lVar2 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = getDamagePhase(this,param_1,param_2);
    if ((iVar1 != param_4) && (-1 < iVar1)) {
      switchToPhase(this,iVar1,param_3);
      return iVar1;
    }
  }
  return iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DamageLifetime::SetAnimRigToPhase(int, PopAnimRig*) const */

void __thiscall
DamageLifetime::SetAnimRigToPhase(DamageLifetime *this,int param_1,PopAnimRig *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_28;
  undefined8 auStack_20 [3];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_2 != (PopAnimRig *)0x0) {
    uVar6 = *(undefined8 *)(this + 8);
    lVar3 = FUN_03c90060(uVar6,*(undefined8 *)(this + 0x10));
    if (lVar3 != 0) {
      lVar7 = 0;
      while( true ) {
        lVar4 = FUN_03c90090(uVar6,lVar7);
        if (param_1 == (int)lVar7) {
          cVar1 = FUN_0547419c(lVar4 + 0x10);
          if (cVar1 == '\0') {
            pcVar5 = *(code **)(*(long *)param_2 + 0x78);
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)auStack_20);
            (*pcVar5)(param_2,lVar4 + 0x10,0,0,(string *)auStack_20);
            std::vector<int,std::allocator<int>>::~vector
                      ((vector<int,std::allocator<int>> *)auStack_20);
          }
          cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                            ((vector<std::string,std::allocator<std::string>> *)(lVar4 + 0x18));
          if (cVar1 == '\0') {
            uStack_28 = FUN_03c906d0(*(undefined8 *)(lVar4 + 0x18));
            while( true ) {
              auStack_20[0] = FUN_03c90720(*(undefined8 *)(lVar4 + 0x20));
              bVar2 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&uStack_28,(__normal_iterator *)auStack_20);
              if (!bVar2) break;
              uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_28);
              FUN_05475d88((string *)auStack_20,uVar6);
              PopAnimRig::SetLayerVisibility(param_2,(string *)auStack_20,true);
              std::string::~string((string *)auStack_20);
              FUN_03c90770((exception_ptr *)&uStack_28);
            }
          }
        }
        else {
          cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                            ((vector<std::string,std::allocator<std::string>> *)(lVar4 + 0x18));
          if (cVar1 == '\0') {
            uStack_28 = FUN_03c906d0(*(undefined8 *)(lVar4 + 0x18));
            while( true ) {
              auStack_20[0] = FUN_03c90720(*(undefined8 *)(lVar4 + 0x20));
              bVar2 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&uStack_28,(__normal_iterator *)auStack_20);
              if (!bVar2) break;
              uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_28);
              FUN_05475d88((string *)auStack_20,uVar6);
              PopAnimRig::SetLayerVisibility(param_2,(string *)auStack_20,false);
              std::string::~string((string *)auStack_20);
              FUN_03c90770((exception_ptr *)&uStack_28);
            }
          }
        }
        if (lVar7 + 1 == lVar3) break;
        lVar7 = lVar7 + 1;
        uVar6 = *(undefined8 *)(this + 8);
      }
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

