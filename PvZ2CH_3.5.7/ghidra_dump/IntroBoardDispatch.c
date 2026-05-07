// Class: IntroBoardDispatch


/* IntroBoardDispatch::~IntroBoardDispatch() */

void __thiscall IntroBoardDispatch::~IntroBoardDispatch(IntroBoardDispatch *this)

{
  *(undefined ***)this = &PTR_GetClass_06611180;
  std::string::~string((string *)(this + 0x28));
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* IntroBoardDispatch::~IntroBoardDispatch() */

void __thiscall IntroBoardDispatch::~IntroBoardDispatch(IntroBoardDispatch *this)

{
  ~IntroBoardDispatch(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroBoardDispatch::StaticClassInit() */

void IntroBoardDispatch::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroBoardDispatch");
    (*pcVar2)(plVar1,asStack_10,FUN_032a1558,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroBoardDispatch::StaticGetClass() */

long * IntroBoardDispatch::StaticGetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"IntroBoardDispatch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroBoardDispatch::GetClass() const */

long * IntroBoardDispatch::GetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"IntroBoardDispatch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroBoardDispatch::IntroBoardDispatch() */

void __thiscall IntroBoardDispatch::IntroBoardDispatch(IntroBoardDispatch *this)

{
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined ***)this = &PTR_GetClass_06611180;
  Set8BytesTo0(this + 0x28);
  return;
}


/* IntroBoardDispatch::StaticNew() */

IntroBoardDispatch * IntroBoardDispatch::StaticNew(void)

{
  IntroBoardDispatch *this;
  
  this = ::operator_new(0x30);
  IntroBoardDispatch(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroBoardDispatch::Update(float) */

void IntroBoardDispatch::Update(float param_1)

{
  bool bVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
             ::find((map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
                     *)s_dispatchMap,(string *)(in_x0 + 0x28));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)s_dispatchMap);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (((bVar1) && (gLawnApp != 0)) && (lVar4 = *(long *)(gLawnApp + 0x9f0), lVar4 != 0)) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar3 = (long)*(ulong *)(lVar2 + 0x10) >> 1;
    if ((*(ulong *)(lVar2 + 0x10) & 1) == 0) {
      (**(code **)(lVar2 + 8))(lVar4 + lVar3);
    }
    else {
      (**(code **)(*(code **)(lVar2 + 8) + *(long *)(lVar4 + lVar3)))(lVar4 + lVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroBoardDispatch::Init(std::string const&) */

void __thiscall IntroBoardDispatch::Init(IntroBoardDispatch *this,string *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = std::
          map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
          ::size((map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
                  *)s_dispatchMap);
  if (lVar1 == 0) {
    std::string::string(asStack_10,"EnableGridItems");
    puVar2 = (undefined8 *)
             std::
             map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
             ::operator[]((map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
                           *)s_dispatchMap,asStack_10);
    *puVar2 = Board::EnableGridItems;
    puVar2[1] = 0;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PlaceLawnItems");
    puVar2 = (undefined8 *)
             std::
             map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
             ::operator[]((map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
                           *)s_dispatchMap,asStack_10);
    *puVar2 = Board::PlaceLawnItems;
    puVar2[1] = 0;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PlaceStreetZombies");
    puVar2 = (undefined8 *)
             std::
             map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
             ::operator[]((map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
                           *)s_dispatchMap,asStack_10);
    *puVar2 = Board::PlaceStreetZombies;
    puVar2[1] = 0;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"SpawnStreetDinos");
    puVar2 = (undefined8 *)
             std::
             map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
             ::operator[]((map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
                           *)s_dispatchMap,asStack_10);
    *puVar2 = Board::SpawnStreetDinos;
    puVar2[1] = 0;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PlaceStreetDinos");
    puVar2 = (undefined8 *)
             std::
             map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
             ::operator[]((map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
                           *)s_dispatchMap,asStack_10);
    *puVar2 = Board::PlaceStreetDinos;
    puVar2[1] = 0;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"ShowLawnItems");
    puVar2 = (undefined8 *)
             std::
             map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
             ::operator[]((map<std::string,void(Board::*)(),std::less<std::string>,std::allocator<std::pair<std::string_const,void(Board::*)()>>>
                           *)s_dispatchMap,asStack_10);
    *puVar2 = Board::ShowLawnItems;
    puVar2[1] = 0;
    std::string::~string(asStack_10);
    nop();
  }
  thunk_FUN_05475e00((string *)(this + 0x28),param_1);
  std::string::string(asStack_18,"IntroBoardDispatch ");
  std::operator+(asStack_18,(string *)(this + 0x28));
  AnimationController::SetDescription((string *)this);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* IntroBoardDispatch::onPostLoad() */

void __thiscall IntroBoardDispatch::onPostLoad(IntroBoardDispatch *this)

{
  Init(this,(string *)(this + 0x28));
  return;
}


/* IntroBoardDispatch::Create(std::string const&) */

IntroBoardDispatch * IntroBoardDispatch::Create(string *param_1)

{
  IntroBoardDispatch *this;
  
  this = GameObject::Create<IntroBoardDispatch>();
  AnimationController::SetDuration((AnimationController *)this,0.0);
  Init(this,param_1);
  return this;
}

