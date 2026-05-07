// Class: DTimerManager


/* DTimerManager::setPause(bool) */

void __thiscall DTimerManager::setPause(DTimerManager *this,bool param_1)

{
  if ((this[0xd] != (DTimerManager)param_1) && (this[0xd] = (DTimerManager)param_1, !param_1)) {
    this[0xc] = (DTimerManager)0x1;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTimerManager::calculateDeltaTime() */

void __thiscall DTimerManager::calculateDeltaTime(DTimerManager *this)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  timeval local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = gettimeofday(&local_18,(__timezone_ptr_t)0x0);
  if (iVar1 == 0) {
    if (this[0xc] == (DTimerManager)0x0) {
      plVar2 = *(long **)(this + 0x10);
      fVar3 = (float)(local_18.tv_sec - *plVar2) + (float)(local_18.tv_usec - plVar2[1]) * 1e-06;
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      *(float *)(this + 8) = fVar3;
    }
    else {
      this[0xc] = (DTimerManager)0x0;
      plVar2 = *(long **)(this + 0x10);
      *(undefined4 *)(this + 8) = 0;
    }
    *plVar2 = local_18.tv_sec;
    plVar2[1] = local_18.tv_usec;
  }
  else {
    *(undefined4 *)(this + 8) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DTimerManager::DTimerManager() */

void __thiscall DTimerManager::DTimerManager(DTimerManager *this)

{
  DActionManager *this_00;
  void *pvVar1;
  
  this[0xc] = (DTimerManager)0x0;
  this[0xd] = (DTimerManager)0x0;
  Set8BytesTo0(this + 0x18);
  this[0x20] = (DTimerManager)0x0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x28));
  this_00 = ::operator_new(0x50);
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  this_00[0x48] = (DActionManager)0x0;
  DActionManager::DActionManager(this_00);
  *(DActionManager **)this = this_00;
  pvVar1 = ::operator_new(0x10);
  *(void **)(this + 0x10) = pvVar1;
  return;
}


/* DTimerManager::getInstane() */

DTimerManager * DTimerManager::getInstane(void)

{
  DTimerManager *this;
  
  if (s_pTimeManager != (DTimerManager *)0x0) {
    return s_pTimeManager;
  }
  this = ::operator_new(0x58);
  DTimerManager(this);
  s_pTimeManager = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTimerManager::updateTimer(float) */

void __thiscall DTimerManager::updateTimer(DTimerManager *this,float param_1)

{
  map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
  *this_00;
  DTimerManager DVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  size_t in_x2;
  float fVar6;
  float fVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  lVar3 = std::
          map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
          ::size(this_00);
  if (lVar3 != 0) {
    local_18 = std::
               map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_00);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      this[0x20] = (DTimerManager)0x0;
      uVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      thunk_FUN_05475e00((string *)(this + 0x18),uVar5);
      fVar6 = *(float *)(lVar3 + 8);
      fVar7 = *(float *)(lVar3 + 0xc);
      if (fVar7 <= fVar6) {
        lVar4 = *(long *)(lVar3 + 0x10);
        *(float *)(lVar3 + 8) = fVar6 - fVar7;
        if (lVar4 != 0) {
          if (lVar4 == 1) {
            this[0x20] = (DTimerManager)0x1;
          }
          else {
            *(long *)(lVar3 + 0x10) = lVar4 + -1;
          }
        }
        bVar2 = std::function::operator_cast_to_bool((function *)(lVar3 + 0x30));
        if (bVar2) {
          std::function<void(float)>::operator()((function<void(float)> *)(lVar3 + 0x30),fVar7);
        }
        if (*(char *)(lVar3 + 0x28) != '\0') {
          *(undefined4 *)(lVar3 + 8) = 0;
          *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x20);
          *(undefined1 *)(lVar3 + 0x28) = 0;
          *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(lVar3 + 0x18);
        }
        if (this[0x20] != (DTimerManager)0x0) goto LAB_04f7e628;
LAB_04f7e6b0:
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      }
      else {
        DVar1 = this[0x20];
        *(float *)(lVar3 + 8) = param_1 + fVar6;
        if (DVar1 == (DTimerManager)0x0) goto LAB_04f7e6b0;
LAB_04f7e628:
        uVar5 = FUN_04f7dfa8((rbtree_iterator *)&local_18);
        std::
        map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
        ::erase_abi_cxx11_(this_00,uVar5);
      }
      std::string::append((string *)(this + 0x18),"",in_x2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DTimerManager::update() */

void __thiscall DTimerManager::update(DTimerManager *this)

{
  char cVar1;
  DActionManager *this_00;
  float fVar2;
  
  cVar1 = FUN_04f7dfa4(this[0xd]);
  if (cVar1 != '\0') {
    return;
  }
  fVar2 = (float)PVZ_RealDt();
  updateTimer(this,fVar2);
  this_00 = *(DActionManager **)this;
  fVar2 = (float)PVZ_Dt();
  DActionManager::update(this_00,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTimerManager::setTimer(std::string const&, float, unsigned long) */

void __thiscall
DTimerManager::setTimer(DTimerManager *this,string *param_1,float param_2,ulong param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
             ::find((map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
                     *)(this + 0x28),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x28));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    cVar2 = std::operator==((string *)(this + 0x18),param_1);
    if (cVar2 == '\0') {
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(undefined1 *)(lVar3 + 0x28) = 0;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(undefined4 *)(lVar3 + 8) = 0;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(float *)(lVar3 + 0xc) = param_2;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(ulong *)(lVar3 + 0x10) = param_3;
    }
    else {
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(undefined1 *)(lVar3 + 0x28) = 1;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(float *)(lVar3 + 0x18) = param_2;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(ulong *)(lVar3 + 0x20) = param_3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTimerManager::removeTimer(std::string const&) */

void __thiscall DTimerManager::removeTimer(DTimerManager *this,string *param_1)

{
  map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
             ::find(this_00,param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    cVar2 = std::operator==((string *)(this + 0x18),param_1);
    if (cVar2 == '\0') {
      std::
      map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
      ::erase_abi_cxx11_(this_00,local_18);
    }
    else {
      this[0x20] = (DTimerManager)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTimerManager::addTimer(std::string const&, std::function<void (float)> const&, float, unsigned
   long) */

void __thiscall
DTimerManager::addTimer
          (DTimerManager *this,string *param_1,function *param_2,float param_3,ulong param_4)

{
  DTimerElement *this_00;
  DTimerElement aDStack_50 [4];
  float local_4c;
  ulong local_48;
  function<void(float)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTimerElement::DTimerElement(aDStack_50);
  local_4c = param_3;
  std::function<void(float)>::operator=(afStack_28,param_2);
  local_48 = param_4;
  this_00 = (DTimerElement *)
            std::
            map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
            ::operator[]((map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
                          *)(this + 0x28),param_1);
  DTimerElement::operator=(this_00,aDStack_50);
  DTimerElement::~DTimerElement(aDStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DTimerManager::~DTimerManager() */

void __thiscall DTimerManager::~DTimerManager(DTimerManager *this)

{
  DActionManager *this_00;
  
  this_00 = *(DActionManager **)this;
  if (this_00 != (DActionManager *)0x0) {
    DActionManager::~DActionManager(this_00);
    AK::FreeHook(this_00);
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    AK::FreeHook(*(void **)(this + 0x10));
  }
  std::
  map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
  ::~map((map<std::string,DTimerManager::DTimerElement,std::less<std::string>,std::allocator<std::pair<std::string_const,DTimerManager::DTimerElement>>>
          *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  return;
}


/* DTimerManager::purge() */

void DTimerManager::purge(void)

{
  DTimerManager *pDVar1;
  
  pDVar1 = s_pTimeManager;
  if (s_pTimeManager != (DTimerManager *)0x0) {
    ~DTimerManager(s_pTimeManager);
    AK::FreeHook(pDVar1);
    s_pTimeManager = (DTimerManager *)0x0;
  }
  return;
}

