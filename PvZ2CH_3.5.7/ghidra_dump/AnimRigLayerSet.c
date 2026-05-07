// Class: AnimRigLayerSet


/* AnimRigLayerSet::~AnimRigLayerSet() */

void __thiscall AnimRigLayerSet::~AnimRigLayerSet(AnimRigLayerSet *this)

{
  *(undefined ***)this = &PTR_GetClass_067a1ba0;
  std::string::~string((string *)(this + 0x40));
  std::
  map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
  ::~map((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
          *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* AnimRigLayerSet::~AnimRigLayerSet() */

void __thiscall AnimRigLayerSet::~AnimRigLayerSet(AnimRigLayerSet *this)

{
  ~AnimRigLayerSet(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimRigLayerSet::StaticClassInit() */

void AnimRigLayerSet::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimRigLayerSet");
    (*pcVar2)(plVar1,asStack_10,FUN_03f67f60,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimRigLayerSet::StaticGetClass() */

long * AnimRigLayerSet::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"AnimRigLayerSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimRigLayerSet::GetClass() const */

long * AnimRigLayerSet::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"AnimRigLayerSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimRigLayerSet::AnimRigLayerSet() */

void __thiscall AnimRigLayerSet::AnimRigLayerSet(AnimRigLayerSet *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_067a1ba0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  Set8BytesTo0(this + 0x40);
  return;
}


/* AnimRigLayerSet::StaticNew() */

AnimRigLayerSet * AnimRigLayerSet::StaticNew(void)

{
  AnimRigLayerSet *this;
  
  this = ::operator_new(0x48);
  AnimRigLayerSet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimRigLayerSet::ShowSet(PopAnimRig*, std::string) */

void __thiscall AnimRigLayerSet::ShowSet(AnimRigLayerSet *this,PopAnimRig *param_1,string *param_3)

{
  map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
  *this_00;
  char cVar1;
  bool bVar2;
  bool bVar3;
  string *psVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::operator==((string *)(this + 0x40),param_3);
  if (cVar1 == '\0') {
    this_00 = (map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
               *)(this + 0x10);
    local_20 = std::
               map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
               ::begin(this_00);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_10);
    if (bVar2) {
      do {
        psVar4 = (string *)
                 std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
        bVar2 = (bool)std::operator==(psVar4,param_3);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(psVar4 + 8));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(psVar4 + 8));
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar3) {
          psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
          ;
          PopAnimRig::SetLayerVisibility(param_1,psVar4,bVar2);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
        FUN_03f67d50((rbtree_iterator *)&local_20);
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_10);
      } while (bVar2);
    }
    thunk_FUN_05475e00((string *)(this + 0x40),param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimRigLayerSet::AddSet(std::string, std::vector<std::string, std::allocator<std::string > >) */

void __thiscall AnimRigLayerSet::AddSet(AnimRigLayerSet *this,string *param_2,vector *param_3)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)
            std::
            map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
            ::operator[]((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
                          *)(this + 0x10),param_2);
  std::vector<std::string,std::allocator<std::string>>::operator=(this_00,param_3);
  return;
}

