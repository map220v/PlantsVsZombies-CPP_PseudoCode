// Class: AbtestMgr


/* AbtestMgr::GetActivityInfos() */

void __thiscall AbtestMgr::GetActivityInfos(AbtestMgr *this)

{
  long *plVar1;
  
  plVar1 = (long *)EASquared::Instance();
  (**(code **)(*plVar1 + 0xc0))(plVar1,this + 8);
  return;
}


/* AbtestMgr::CheckActivityInfos() */

void __thiscall AbtestMgr::CheckActivityInfos(AbtestMgr *this)

{
  long *plVar1;
  float fVar2;
  
  plVar1 = (long *)EASquared::Instance();
  (**(code **)(*plVar1 + 200))();
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x3c) = fVar2 + 30.0;
  return;
}


/* AbtestMgr::~AbtestMgr() */

void __thiscall AbtestMgr::~AbtestMgr(AbtestMgr *this)

{
  *(undefined ***)this = &PTR__AbtestMgr_06974970;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 8));
  Sexy::LazySingleton<AbtestMgr>::~LazySingleton((LazySingleton<AbtestMgr> *)this);
  return;
}


/* AbtestMgr::~AbtestMgr() */

void __thiscall AbtestMgr::~AbtestMgr(AbtestMgr *this)

{
  ~AbtestMgr(this);
  AK::FreeHook(this);
  return;
}


/* AbtestMgr::AbtestMgr() */

void __thiscall AbtestMgr::AbtestMgr(AbtestMgr *this)

{
  undefined4 uVar1;
  
  Sexy::LazySingleton<AbtestMgr>::LazySingleton((LazySingleton<AbtestMgr> *)this);
  *(undefined ***)this = &PTR__AbtestMgr_06974970;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  this[0x38] = (AbtestMgr)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x3c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AbtestMgr::GetActivityAbtestId(int) */

void __thiscall AbtestMgr::GetActivityAbtestId(AbtestMgr *this,int param_1)

{
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_00;
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 8);
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  lVar2 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size(this_00);
  if (lVar2 != 0) {
    local_18 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                         (this_00,local_24);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      uVar3 = *(undefined4 *)(lVar2 + 4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AbtestMgr::InitTestData() */

void __thiscall AbtestMgr::InitTestData(AbtestMgr *this)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  long local_8;
  
  local_18 = 0x2a00;
  local_14 = 1;
  local_8 = ___stack_chk_guard;
  local_10 = std::make_pair<FestivalTab,ActivityTypeID>
                       ((FestivalTab *)&local_18,(ActivityTypeID *)&local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
  insert<std::pair<int,int>,void>
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 8),
             (pair *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

