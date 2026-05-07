// Class: Sexy::ResourceGroup


/* Sexy::ResourceGroup::GetLoadableGroup() */

ResourceGroup * __thiscall Sexy::ResourceGroup::GetLoadableGroup(ResourceGroup *this)

{
  ResourceGroup *pRVar1;
  
  pRVar1 = *(ResourceGroup **)(this + 0x30);
  if (*(ResourceGroup **)(this + 0x30) == (ResourceGroup *)0x0) {
    pRVar1 = this;
  }
  return pRVar1;
}


/* Sexy::ResourceGroup::StaticGetClass() */

long * Sexy::ResourceGroup::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceGroup",uVar2,StaticNew);
  return sClass;
}


/* Sexy::ResourceGroup::GetClass() const */

long * Sexy::ResourceGroup::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceGroup",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceGroup::Preload() */

void __thiscall Sexy::ResourceGroup::Preload(ResourceGroup *this)

{
  char cVar1;
  undefined8 uVar2;
  bool *pbVar3;
  ResStreamsManager *this_00;
  bool abStack_20 [8];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(ResStreamsManager **)(*(long *)(*(long *)(this + 8) + 0x1a0) + 0x908);
  if (this_00 != (ResStreamsManager *)0x0) {
    std::string::string(asStack_10,"dynamic.rsb");
    cVar1 = ResStreamsManager::IsInitialized(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      pbVar3 = abStack_20;
      uVar2 = RtName::GetString();
      FUN_05478178(aSStack_18,uVar2);
      WStringToString(aSStack_18,(wstring *)0x0,pbVar3);
      ResStreamsManager::LoadGroup(this_00,asStack_10);
      std::string::~string(asStack_10);
      FUN_05476c50(aSStack_18);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceGroup::UnloadFileIndex() */

void __thiscall Sexy::ResourceGroup::UnloadFileIndex(ResourceGroup *this)

{
  ResourceGroup RVar1;
  undefined8 uVar2;
  bool *pbVar3;
  ResourceGroup RVar4;
  ResStreamsManager *this_00;
  bool abStack_20 [8];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  RVar4 = this[0xa8];
  local_8 = ___stack_chk_guard;
  if ((RVar4 != (ResourceGroup)0x0) &&
     (this_00 = *(ResStreamsManager **)(*(long *)(*(long *)(this + 8) + 0x1a0) + 0x908),
     this_00 != (ResStreamsManager *)0x0)) {
    std::string::string(asStack_10,"dynamic.rsb");
    RVar1 = (ResourceGroup)ResStreamsManager::IsInitialized(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (RVar1 != (ResourceGroup)0x0) {
      pbVar3 = abStack_20;
      uVar2 = RtName::GetString();
      FUN_05478178(aSStack_18,uVar2);
      WStringToString(aSStack_18,(wstring *)0x0,pbVar3);
      ResStreamsManager::UnloadGroupFileIndex(this_00,asStack_10);
      std::string::~string(asStack_10);
      FUN_05476c50(aSStack_18);
      nop();
      this[0xa8] = (ResourceGroup)0x0;
      RVar4 = RVar1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(RVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceGroup::DebugDump(std::string&) */

void __thiscall Sexy::ResourceGroup::DebugDump(ResourceGroup *this,string *param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  a_Stack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = RtName::GetString();
  uVar5 = FUN_05194968(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
  StrFormat("ResourceGroup::DebugDump: Begin Group %S, ResInfoCount %d\r\n",(string *)&local_10,
            uVar4,uVar5 & 0xffffffff);
  thunk_FUN_054757c0(param_1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x50));
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            (a_Stack_28,(__normal_iterator *)&local_10);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x50));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)a_Stack_28,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)a_Stack_28);
    puVar9 = (undefined8 *)*puVar9;
    Set8BytesTo0(asStack_20);
    Set8BytesTo0(asStack_18);
    ResourceInfo::GetRtId();
    RtId::ToString((RtId *)&local_10,asStack_20,true);
    RtId::~RtId((RtId *)&local_10);
    RtId::ToString((RtId *)(puVar9 + 4),asStack_18,true);
    uVar4 = FUN_0547429c(asStack_20);
    uVar6 = FUN_0547429c(asStack_18);
    lVar7 = (**(code **)*puVar9)(puVar9);
    uVar8 = FUN_051948e0(*(undefined8 *)(lVar7 + 8));
    pcVar1 = " (from program)";
    if (*(char *)(puVar9 + 0xc) == '\0') {
      pcVar1 = "";
    }
    StrFormat("Info(%s) Inst(%s) %s %s: \"%s\"%s\r\n",(string *)&local_10,uVar4,uVar6,uVar8,
              puVar9[7],puVar9[8],pcVar1);
    thunk_FUN_054757c0(param_1,(string *)&local_10);
    std::string::~string((string *)&local_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)a_Stack_28);
  }
  lVar7 = 0;
  if (this[0x10] != (ResourceGroup)0x0) {
    while( true ) {
      uVar4 = *(undefined8 *)(this + 0x38);
      iVar3 = FUN_05194954(uVar4,*(undefined8 *)(this + 0x40));
      if (iVar3 <= (int)lVar7) break;
      puVar9 = (undefined8 *)FUN_05194960(uVar4,lVar7);
      DebugDump((ResourceGroup *)*puVar9,param_1);
      lVar7 = lVar7 + 1;
    }
  }
  uVar4 = RtName::GetString();
  StrFormat("ResourceGroup::DebugDump: End Group %S\r\n",(string *)&local_10,uVar4);
  thunk_FUN_054757c0(param_1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceGroup::LoadFileIndex() */

void __thiscall Sexy::ResourceGroup::LoadFileIndex(ResourceGroup *this)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  SoundBankRes *this_00;
  bool *pbVar7;
  uint uVar8;
  ResStreamsManager *this_01;
  RtObject *this_02;
  bool abStack_20 [8];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x11] == (ResourceGroup)0x0) {
    uVar2 = 0;
    if (this[0xa8] == (ResourceGroup)0x0) {
      this_01 = *(ResStreamsManager **)(*(long *)(*(long *)(this + 8) + 0x1a0) + 0x908);
      if (this_01 != (ResStreamsManager *)0x0) {
        std::string::string(asStack_10,"dynamic.rsb");
        cVar1 = ResStreamsManager::IsInitialized(this_01,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (cVar1 != '\0') {
          pbVar7 = abStack_20;
          uVar4 = RtName::GetString();
          FUN_05478178(aSStack_18,uVar4);
          WStringToString(aSStack_18,(wstring *)0x0,pbVar7);
          ResStreamsManager::LoadGroupFileIndex(this_01,asStack_10);
          std::string::~string(asStack_10);
          FUN_05476c50(aSStack_18);
          nop();
          this[0xa8] = (ResourceGroup)0x1;
        }
      }
      uVar4 = *(undefined8 *)(this + 0x50);
      uVar8 = 0;
      uVar5 = FUN_05194968(uVar4,*(undefined8 *)(this + 0x58));
      if (uVar5 != 0) {
        do {
          puVar6 = (undefined8 *)FUN_05194974(uVar4);
          this_02 = (RtObject *)*puVar6;
          if (this_02[0x60] == (RtObject)0x0) {
            bVar3 = RtObject::IsA<Sexy::ResourceInfoTypes::SoundBankRes>(this_02);
            if (bVar3) {
              this_00 = RtObject::Cast<Sexy::ResourceInfoTypes::SoundBankRes>(this_02);
              ResourceInfoTypes::SoundBankRes::DoPrepare(this_00);
            }
            uVar4 = *(undefined8 *)(this + 0x50);
            uVar5 = FUN_05194968(uVar4,*(undefined8 *)(this + 0x58));
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* Sexy::ResourceGroup::VerifyHasNoSoundBanks() */

undefined8 __thiscall Sexy::ResourceGroup::VerifyHasNoSoundBanks(ResourceGroup *this)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x50);
    uVar3 = FUN_05194968(uVar5,*(undefined8 *)(this + 0x58));
    if (uVar3 <= uVar4) {
      return 1;
    }
    puVar2 = (undefined8 *)FUN_05194974(uVar5,uVar4);
    bVar1 = RtObject::IsA<Sexy::ResourceInfoTypes::SoundBankRes>((RtObject *)*puVar2);
    uVar4 = (ulong)((int)uVar4 + 1);
  } while (!bVar1);
  return 0;
}


/* Sexy::ResourceGroup::ResourceGroup() */

void __thiscall Sexy::ResourceGroup::ResourceGroup(ResourceGroup *this)

{
  _func_void *extraout_x1;
  
  RtObject::RtObject((RtObject *)this);
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (ResourceGroup)0x0;
  *(undefined ***)this = &PTR_GetClass_06a30120;
  this[0x11] = (ResourceGroup)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  RtName::RtName((RtName *)(this + 0x20));
  *(undefined8 *)(this + 0x30) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  *(undefined4 *)(this + 0x68) = 0;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 0x70),extraout_x1);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x78));
  this[0xa8] = (ResourceGroup)0x0;
  return;
}


/* Sexy::ResourceGroup::StaticNew() */

ResourceGroup * Sexy::ResourceGroup::StaticNew(void)

{
  ResourceGroup *this;
  
  this = ::operator_new(0xb0);
  ResourceGroup(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceGroup::GetResourceCount(Sexy::ResourceInfoClass*, bool, bool) */

void __thiscall
Sexy::ResourceGroup::GetResourceCount
          (ResourceGroup *this,ResourceInfoClass *param_1,bool param_2,bool param_3)

{
  map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
  *this_00;
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ResourceGroup *pRVar5;
  ResourceInfoClass *pRVar6;
  uint uVar7;
  uint uVar8;
  ResourceManager *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = (uint)param_2;
  if (param_1 == (ResourceInfoClass *)0x0) {
    this_01 = *(ResourceManager **)(this + 8);
    uVar2 = ResourceManager::GetInfoClassCount(this_01);
    if (uVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      uVar8 = 0;
      while( true ) {
        pRVar6 = (ResourceInfoClass *)ResourceManager::GetInfoClassIndexed(this_01,uVar8);
        iVar3 = GetResourceCount(this,pRVar6,param_2,param_3);
        uVar7 = uVar7 + iVar3;
        if (uVar8 + 1 == uVar2) break;
        this_01 = *(ResourceManager **)(this + 8);
        uVar8 = uVar8 + 1;
      }
    }
  }
  else {
    this_00 = (map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               *)(param_1 + 0x68);
    local_18 = std::
               map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               ::begin(this_00);
    if (param_3) {
      if (uVar7 == 0) {
        while( true ) {
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          if (!bVar1) break;
          lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          lVar4 = *(long *)(lVar4 + 8);
          if (((*(int *)(lVar4 + 0x5c) == 0) ||
              (*(int *)(lVar4 + 0x5c) == *(int *)(*(long *)(this + 8) + 0x20c))) &&
             (((*(ResourceGroup **)(lVar4 + 0x30) == this ||
               (*(ResourceGroup **)(*(ResourceGroup **)(lVar4 + 0x30) + 0x30) == this)) &&
              (*(char *)(lVar4 + 0x60) == '\0')))) {
            uVar7 = uVar7 + 1;
          }
          std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        }
      }
      else {
        uVar7 = 0;
        while( true ) {
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          if (!bVar1) break;
          lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          lVar4 = *(long *)(lVar4 + 8);
          if ((((*(int *)(lVar4 + 0x58) == 0) ||
               (*(int *)(lVar4 + 0x58) == *(int *)(*(long *)(this + 8) + 0x208))) &&
              ((*(int *)(lVar4 + 0x5c) == 0 ||
               (*(int *)(lVar4 + 0x5c) == *(int *)(*(long *)(this + 8) + 0x20c))))) &&
             (((*(ResourceGroup **)(lVar4 + 0x30) == this ||
               (*(ResourceGroup **)(*(ResourceGroup **)(lVar4 + 0x30) + 0x30) == this)) &&
              (*(char *)(lVar4 + 0x60) == '\0')))) {
            uVar7 = uVar7 + 1;
          }
          std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        }
      }
    }
    else if (param_2) {
      uVar7 = 0;
      while( true ) {
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar1) break;
        lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        lVar4 = *(long *)(lVar4 + 8);
        if ((((*(int *)(lVar4 + 0x58) == 0) ||
             (*(int *)(lVar4 + 0x58) == *(int *)(*(long *)(this + 8) + 0x208))) &&
            ((*(ResourceGroup **)(lVar4 + 0x30) == this ||
             (*(ResourceGroup **)(*(ResourceGroup **)(lVar4 + 0x30) + 0x30) == this)))) &&
           (*(char *)(lVar4 + 0x60) == '\0')) {
          uVar7 = uVar7 + 1;
        }
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      }
    }
    else {
      while( true ) {
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar1) break;
        lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        pRVar5 = *(ResourceGroup **)(*(long *)(lVar4 + 8) + 0x30);
        if (((pRVar5 == this) || (*(ResourceGroup **)(pRVar5 + 0x30) == this)) &&
           (*(char *)(*(long *)(lVar4 + 8) + 0x60) == '\0')) {
          uVar7 = uVar7 + 1;
        }
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* Sexy::ResourceGroup::~ResourceGroup() */

void __thiscall Sexy::ResourceGroup::~ResourceGroup(ResourceGroup *this)

{
  *(undefined ***)this = &PTR_GetClass_06a30120;
  std::
  map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
  ::~map((map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
          *)(this + 0x78));
  RtId::~RtId((RtId *)(this + 0x70));
  std::vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>>::~vector
            ((vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>> *)(this + 0x50));
  std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::~vector
            ((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>> *)(this + 0x38));
  RtName::~RtName((RtName *)(this + 0x20));
  nop();
  return;
}


/* Sexy::ResourceGroup::~ResourceGroup() */

void __thiscall Sexy::ResourceGroup::~ResourceGroup(ResourceGroup *this)

{
  ~ResourceGroup(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceGroup::Unload() */

void __thiscall Sexy::ResourceGroup::Unload(ResourceGroup *this)

{
  ResourceGroup RVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  bool *pbVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ResStreamsManager *this_00;
  bool abStack_38 [8];
  Sexy aSStack_30 [8];
  ResourceGroup *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  RVar1 = this[0x11];
  local_8 = ___stack_chk_guard;
  if (RVar1 != (ResourceGroup)0x0) {
    ResourceManager::ClearError(*(ResourceManager **)(this + 8));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    if (this[0x10] == (ResourceGroup)0x0) {
      local_28 = this;
      std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::push_back
                ((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>> *)&local_20,
                 &local_28);
    }
    else {
      uVar9 = *(undefined8 *)(this + 0x38);
      iVar3 = FUN_05194954(uVar9,*(undefined8 *)(this + 0x40));
      if (0 < iVar3) {
        lVar10 = 0;
        while( true ) {
          puVar6 = (undefined8 *)FUN_05194960(uVar9,lVar10);
          local_28 = (ResourceGroup *)*puVar6;
          cVar2 = FUN_051948c8(*(undefined4 *)(local_28 + 0x20));
          if (cVar2 != '\0') {
            std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::push_back
                      ((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>> *)
                       &local_20,&local_28);
          }
          if (iVar3 <= (int)lVar10 + 1) break;
          lVar10 = lVar10 + 1;
          uVar9 = *(undefined8 *)(this + 0x38);
        }
      }
    }
    uVar9 = local_20;
    uVar4 = FUN_05194954(local_20,local_18);
    if (uVar4 != 0) {
      lVar10 = 0;
      do {
        plVar7 = (long *)FUN_05194960(uVar9,lVar10);
        lVar12 = *plVar7;
        uVar9 = *(undefined8 *)(lVar12 + 0x50);
        uVar5 = FUN_05194968(uVar9,*(undefined8 *)(lVar12 + 0x58));
        if (uVar5 != 0) {
          lVar11 = 0;
          while( true ) {
            puVar6 = (undefined8 *)FUN_05194974(uVar9,lVar11);
            ResourceInfo::DeleteResource((ResourceInfo *)*puVar6);
            if (uVar5 <= (uint)(lVar11 + 1)) break;
            uVar9 = *(undefined8 *)(lVar12 + 0x50);
            lVar11 = lVar11 + 1;
          }
        }
        lVar10 = lVar10 + 1;
        uVar9 = local_20;
      } while ((uint)lVar10 < uVar4);
    }
    this_00 = *(ResStreamsManager **)(*(long *)(*(long *)(this + 8) + 0x1a0) + 0x908);
    if (this_00 != (ResStreamsManager *)0x0) {
      std::string::string((string *)&local_28,"dynamic.rsb");
      cVar2 = ResStreamsManager::IsInitialized(this_00,(string *)&local_28);
      std::string::~string((string *)&local_28);
      nop();
      if (cVar2 != '\0') {
        pbVar8 = abStack_38;
        uVar9 = RtName::GetString();
        FUN_05478178(aSStack_30,uVar9);
        WStringToString(aSStack_30,(wstring *)0x0,pbVar8);
        ResStreamsManager::DeleteGroup(this_00,(string *)&local_28);
        std::string::~string((string *)&local_28);
        FUN_05476c50(aSStack_30);
        nop();
      }
    }
    lVar10 = 0;
    if (uVar4 != 0) {
      do {
        lVar12 = lVar10 + 1;
        plVar7 = (long *)FUN_05194960(local_20,lVar10);
        lVar10 = *plVar7;
        *(undefined1 *)(lVar10 + 0x11) = 0;
        std::
        map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
        ::clear((map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
                 *)(lVar10 + 0x78));
        lVar10 = lVar12;
      } while ((uint)lVar12 < uVar4);
    }
    if (this[0x10] != (ResourceGroup)0x0) {
      this[0x11] = (ResourceGroup)0x0;
      std::
      map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
      ::clear((map<std::pair<std::string,std::string>,Sexy::RtId,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string>const,Sexy::RtId>>>
               *)(this + 0x78));
    }
    std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::~vector
              ((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(RVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceGroup::Load() */

void __thiscall Sexy::ResourceGroup::Load(ResourceGroup *this)

{
  ResourceGroup RVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  bool *pbVar13;
  long lVar14;
  long lVar15;
  ResStreamsManager *this_00;
  ResourceGroup *pRVar16;
  ResourceManager *pRVar17;
  RtObject *this_01;
  long lVar18;
  uint uVar19;
  ResourceGroup RVar20;
  bool abStack_40 [16];
  Sexy aSStack_30 [8];
  ResourceGroup *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x11] != (ResourceGroup)0x0) {
    RVar20 = (ResourceGroup)0x0;
    goto LAB_051a1528;
  }
  this_00 = *(ResStreamsManager **)(*(long *)(*(ResourceManager **)(this + 8) + 0x1a0) + 0x908);
  RVar20 = (ResourceGroup)0x0;
  if (this_00 == (ResStreamsManager *)0x0) {
    ResourceManager::ClearError(*(ResourceManager **)(this + 8));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    if (this[0x10] == (ResourceGroup)0x0) goto LAB_051a158c;
LAB_051a12c4:
    uVar10 = *(undefined8 *)(this + 0x38);
    iVar4 = FUN_05194954(uVar10,*(undefined8 *)(this + 0x40));
    if (iVar4 < 1) {
      uVar9 = 0;
    }
    else {
      lVar14 = 0;
      uVar9 = 0;
      while( true ) {
        puVar11 = (undefined8 *)FUN_05194960(uVar10,lVar14);
        pRVar16 = (ResourceGroup *)*puVar11;
        local_28 = pRVar16;
        cVar2 = FUN_051948c8(*(undefined4 *)(pRVar16 + 0x20));
        if (((cVar2 != '\0') &&
            ((*(int *)(pRVar16 + 0x14) == 0 ||
             (*(int *)(pRVar16 + 0x14) == *(int *)(*(long *)(this + 8) + 0x208))))) &&
           ((*(int *)(pRVar16 + 0x18) == 0 ||
            (*(int *)(pRVar16 + 0x18) == *(int *)(*(long *)(this + 8) + 0x20c))))) {
          std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::push_back
                    ((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>> *)&local_20,
                     &local_28);
          iVar5 = FUN_05194968(*(undefined8 *)(local_28 + 0x50),*(undefined8 *)(local_28 + 0x58));
          uVar9 = uVar9 + iVar5;
        }
        if (iVar4 <= (int)lVar14 + 1) break;
        lVar14 = lVar14 + 1;
        uVar10 = *(undefined8 *)(this + 0x38);
      }
    }
  }
  else {
    std::string::string((string *)&local_20,"dynamic.rsb");
    cVar2 = ResStreamsManager::IsInitialized(this_00,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    if (cVar2 != '\0') {
      pbVar13 = abStack_40;
      uVar10 = RtName::GetString();
      FUN_05478178(aSStack_30,uVar10);
      WStringToString(aSStack_30,(wstring *)0x0,pbVar13);
      std::string::string((string *)&local_20,"ResourceGroup::Load");
      cVar2 = ResStreamsManager::ForceLoadGroup((string *)this_00,(string *)&local_28);
      std::string::~string((string *)&local_20);
      nop();
      std::string::~string((string *)&local_28);
      FUN_05476c50(aSStack_30);
      nop();
      if (cVar2 == '\0') {
        pRVar17 = *(ResourceManager **)(this + 8);
        std::string::string((string *)&local_20,"<ResourceGroup::Load() Failed!> ");
        ResourceManager::Fail(pRVar17,(string *)&local_20);
        std::string::~string((string *)&local_20);
        nop();
        goto LAB_051a1528;
      }
    }
    ResourceManager::ClearError(*(ResourceManager **)(this + 8));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    if (this[0x10] != (ResourceGroup)0x0) goto LAB_051a12c4;
LAB_051a158c:
    local_28 = this;
    std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::push_back
              ((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>> *)&local_20,
               &local_28);
    uVar9 = FUN_05194968(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
  }
  uVar6 = FUN_05194954(local_20,local_18);
  if (uVar6 != 0) {
    pRVar17 = *(ResourceManager **)(this + 8);
    uVar19 = 0;
    lVar14 = 0;
    cVar2 = ResourceManager::HadError(pRVar17);
LAB_051a13c4:
    if (cVar2 == '\0') {
      plVar12 = (long *)FUN_05194960(local_20,lVar14);
      lVar18 = *plVar12;
      uVar7 = FUN_05194968(*(undefined8 *)(lVar18 + 0x50),*(undefined8 *)(lVar18 + 0x58));
      iVar4 = 0;
LAB_051a13f4:
      if (uVar7 != 0) {
        lVar15 = 0;
        do {
          puVar11 = (undefined8 *)FUN_05194974(*(undefined8 *)(lVar18 + 0x50),lVar15);
          this_01 = (RtObject *)*puVar11;
          bVar3 = RtObject::IsA<Sexy::ResourceInfoTypes::ImageRes>(this_01);
          iVar8 = strncmp(*(char **)(this_01 + 0x40),"!ref:",5);
          iVar5 = 0;
          if (!bVar3) {
            iVar5 = 2;
          }
          if (iVar8 == 0) {
            iVar5 = iVar5 + 1;
          }
          if (iVar4 == iVar5) {
            if (this_01[0x60] == (RtObject)0x0) {
              (**(code **)(*(long *)this_01 + 0x58))(this_01);
            }
            RVar1 = this[0x10];
            *(float *)(lVar18 + 0x68) = (100.0 / (float)uVar7) * (float)((int)lVar15 + 1);
            if (RVar1 != (ResourceGroup)0x0) {
              uVar19 = uVar19 + 1;
              *(float *)(this + 0x68) = (100.0 / (float)uVar9) * (float)uVar19;
              goto LAB_051a1408;
            }
            pRVar17 = *(ResourceManager **)(this + 8);
            uVar19 = uVar19 + 1;
          }
          else {
LAB_051a1408:
            pRVar17 = *(ResourceManager **)(this + 8);
          }
          if (uVar7 <= (int)lVar15 + 1U) goto LAB_051a14a4;
          lVar15 = lVar15 + 1;
          cVar2 = ResourceManager::HadError(pRVar17);
          if (cVar2 != '\0') {
            if (iVar4 == 3) goto LAB_051a14c0;
            goto LAB_051a14bc;
          }
        } while( true );
      }
      cVar2 = ResourceManager::HadError(pRVar17);
      goto LAB_051a14ac;
    }
    goto LAB_051a1520;
  }
  cVar2 = ResourceManager::HadError(*(ResourceManager **)(this + 8));
  if (cVar2 == '\0') goto LAB_051a150c;
  goto LAB_051a1520;
LAB_051a14a4:
  cVar2 = ResourceManager::HadError(pRVar17);
LAB_051a14ac:
  iVar4 = iVar4 + 1;
  if (iVar4 == 4) goto LAB_051a14c0;
  if (cVar2 != '\0') goto LAB_051a14bc;
  goto LAB_051a13f4;
LAB_051a14bc:
  cVar2 = '\x01';
LAB_051a14c0:
  lVar14 = lVar14 + 1;
  if (uVar6 <= (uint)lVar14) goto code_r0x051a14d8;
  goto LAB_051a13c4;
code_r0x051a14d8:
  if (cVar2 == '\0') {
    lVar14 = 0;
    do {
      lVar18 = lVar14 + 1;
      plVar12 = (long *)FUN_05194960(local_20,lVar14);
      *(undefined1 *)(*plVar12 + 0x11) = 1;
      lVar14 = lVar18;
    } while ((uint)lVar18 < uVar6);
LAB_051a150c:
    RVar20 = this[0x10];
    if (RVar20 == (ResourceGroup)0x0) {
      RVar20 = (ResourceGroup)0x1;
    }
    else {
      this[0x11] = (ResourceGroup)0x1;
    }
  }
LAB_051a1520:
  std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::~vector
            ((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>> *)&local_20);
LAB_051a1528:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(RVar20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceGroup::GetResources(std::vector<Sexy::ResourceInfo*,
   std::allocator<Sexy::ResourceInfo*> >&, Sexy::ResourceInfoClass*, bool, bool) */

void __thiscall
Sexy::ResourceGroup::GetResources
          (ResourceGroup *this,vector *param_1,ResourceInfoClass *param_2,bool param_3,bool param_4)

{
  map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
  *this_00;
  bool bVar1;
  uint uVar2;
  long lVar3;
  ResourceInfoClass *pRVar4;
  uint uVar5;
  ResourceManager *this_01;
  undefined8 local_18;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (ResourceInfoClass *)0x0) {
    this_01 = *(ResourceManager **)(this + 8);
    uVar2 = ResourceManager::GetInfoClassCount(this_01);
    if (uVar2 != 0) {
      uVar5 = 0;
      while( true ) {
        pRVar4 = (ResourceInfoClass *)ResourceManager::GetInfoClassIndexed(this_01,uVar5);
        GetResources(this,param_1,pRVar4,param_3,param_4);
        if (uVar5 + 1 == uVar2) break;
        this_01 = *(ResourceManager **)(this + 8);
        uVar5 = uVar5 + 1;
      }
    }
  }
  else {
    this_00 = (map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               *)(param_2 + 0x68);
    local_18 = std::
               map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
               ::begin(this_00);
    if (param_3) {
      if (param_4) {
        while( true ) {
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          if (!bVar1) break;
          lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          local_10 = *(long *)(lVar3 + 8);
          if ((((*(int *)(local_10 + 0x58) == 0) ||
               (*(int *)(local_10 + 0x58) == *(int *)(*(long *)(this + 8) + 0x208))) &&
              ((*(int *)(local_10 + 0x5c) == 0 ||
               (*(int *)(local_10 + 0x5c) == *(int *)(*(long *)(this + 8) + 0x20c))))) &&
             (((*(ResourceGroup **)(local_10 + 0x30) == this ||
               (*(ResourceGroup **)(*(ResourceGroup **)(local_10 + 0x30) + 0x30) == this)) &&
              (*(char *)(local_10 + 0x60) == '\0')))) {
            std::vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>>::push_back
                      ((vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>> *)param_1,
                       (ResourceInfo **)&local_10);
          }
          std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        }
      }
      else {
        while( true ) {
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          if (!bVar1) break;
          lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          local_10 = *(long *)(lVar3 + 8);
          if (((*(int *)(local_10 + 0x58) == 0) ||
              (*(int *)(local_10 + 0x58) == *(int *)(*(long *)(this + 8) + 0x208))) &&
             (((*(ResourceGroup **)(local_10 + 0x30) == this ||
               (*(ResourceGroup **)(*(ResourceGroup **)(local_10 + 0x30) + 0x30) == this)) &&
              (*(char *)(local_10 + 0x60) == '\0')))) {
            std::vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>>::push_back
                      ((vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>> *)param_1,
                       (ResourceInfo **)&local_10);
          }
          std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        }
      }
    }
    else if (param_4) {
      while( true ) {
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar1) break;
        lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        local_10 = *(long *)(lVar3 + 8);
        if ((((*(int *)(local_10 + 0x5c) == 0) ||
             (*(int *)(local_10 + 0x5c) == *(int *)(*(long *)(this + 8) + 0x20c))) &&
            ((*(ResourceGroup **)(local_10 + 0x30) == this ||
             (*(ResourceGroup **)(*(ResourceGroup **)(local_10 + 0x30) + 0x30) == this)))) &&
           (*(char *)(local_10 + 0x60) == '\0')) {
          std::vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>>::push_back
                    ((vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>> *)param_1,
                     (ResourceInfo **)&local_10);
        }
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      }
    }
    else {
      while( true ) {
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar1) break;
        lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        local_10 = *(long *)(lVar3 + 8);
        if (((*(ResourceGroup **)(local_10 + 0x30) == this) ||
            (*(ResourceGroup **)(*(ResourceGroup **)(local_10 + 0x30) + 0x30) == this)) &&
           (*(char *)(local_10 + 0x60) == '\0')) {
          std::vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>>::push_back
                    ((vector<Sexy::ResourceInfo*,std::allocator<Sexy::ResourceInfo*>> *)param_1,
                     (ResourceInfo **)&local_10);
        }
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

