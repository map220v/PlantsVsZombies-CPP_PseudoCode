// Class: Sexy::CompiledMap


/* Sexy::CompiledMap::Initialized() */

bool __thiscall Sexy::CompiledMap::Initialized(CompiledMap *this)

{
  return *(long *)this != 0;
}


/* Sexy::CompiledMap::CompiledMap() */

void __thiscall Sexy::CompiledMap::CompiledMap(CompiledMap *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* Sexy::CompiledMap::Init(unsigned char*, unsigned int) */

void __thiscall Sexy::CompiledMap::Init(CompiledMap *this,uchar *param_1,uint param_2)

{
  *(uchar **)this = param_1;
  *(uint *)(this + 8) = param_2 >> 2;
  return;
}


/* Sexy::CompiledMap::CompiledMap(unsigned char*, unsigned int) */

void __thiscall Sexy::CompiledMap::CompiledMap(CompiledMap *this,uchar *param_1,uint param_2)

{
  *(uchar **)this = param_1;
  *(uint *)(this + 8) = param_2 >> 2;
  return;
}


/* Sexy::CompiledMap::Find(Sexy::CompiledMap::Node*, unsigned char const*, unsigned char*) */

Node * __thiscall
Sexy::CompiledMap::Find(CompiledMap *this,Node *param_1,uchar *param_2,uchar *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = toupper((uint)*param_2);
  while( true ) {
    while( true ) {
      uVar3 = AssetsManagerManifest::isVersionLoaded((AssetsManagerManifest *)param_1);
      while (uVar2 != (uVar3 & 0xff)) {
        uVar3 = Node::alt(param_1);
        if (uVar3 == 0) {
          return (Node *)0x0;
        }
        param_1 = (Node *)(*(long *)this + (ulong)uVar3 * 4);
        uVar3 = AssetsManagerManifest::isVersionLoaded((AssetsManagerManifest *)param_1);
      }
      if (param_3 == (uchar *)0x0) break;
      *param_3 = (uchar)uVar2;
      param_3 = param_3 + 1;
      cVar1 = AssetsManagerManifest::isVersionLoaded((AssetsManagerManifest *)param_1);
      if (cVar1 == '\0') goto LAB_0539b08c;
      param_1 = param_1 + 4;
      uVar2 = toupper((uint)param_2[1]);
      param_2 = param_2 + 1;
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 4;
    uVar2 = toupper((uint)param_2[1]);
    param_2 = param_2 + 1;
  }
LAB_0539b08c:
  return param_1 + 4;
}


/* Sexy::CompiledMap::FindFast(unsigned char const*) */

AssetsManagerManifest * __thiscall Sexy::CompiledMap::FindFast(CompiledMap *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  AssetsManagerManifest *this_00;
  AssetsManagerManifest *pAVar3;
  
  pAVar3 = *(AssetsManagerManifest **)this;
  this_00 = pAVar3;
  if (pAVar3 == (AssetsManagerManifest *)0x0) {
    return (AssetsManagerManifest *)0x0;
  }
  do {
    while( true ) {
      uVar1 = toupper((uint)*param_1);
      uVar2 = AssetsManagerManifest::isVersionLoaded(this_00);
      if ((uVar1 & 0xff) == (uVar2 & 0xff)) break;
      if ((uVar1 & 0xff) < (uVar2 & 0xff)) {
        return (AssetsManagerManifest *)0x0;
      }
      uVar1 = Node::alt((Node *)this_00);
      if (uVar1 == 0) {
        return (AssetsManagerManifest *)0x0;
      }
      this_00 = pAVar3 + (ulong)uVar1 * 4;
      if (pAVar3 + (ulong)uVar1 * 4 == (AssetsManagerManifest *)0x0) {
        return (AssetsManagerManifest *)0x0;
      }
    }
    if ((uVar1 & 0xff) == 0) {
      return this_00 + 4;
    }
    this_00 = this_00 + 4;
    param_1 = param_1 + 1;
  } while (this_00 != (AssetsManagerManifest *)0x0);
  return (AssetsManagerManifest *)0x0;
}


/* Sexy::CompiledMap::Find(char const*) */

undefined8 __thiscall Sexy::CompiledMap::Find(CompiledMap *this,char *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 8) != 0) {
    uVar1 = FindFast(this,(uchar *)param_1);
    return uVar1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CompiledMap::DebugPrint_rescurive(Sexy::CompiledMap::Node*, std::vector<char,
   std::allocator<char> > const&, std::vector<char, std::allocator<char> >&) */

void __thiscall
Sexy::CompiledMap::DebugPrint_rescurive
          (CompiledMap *this,Node *param_1,vector *param_2,vector *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  string asStack_38 [8];
  undefined8 local_30;
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  local_28;
  undefined7 uStack_27;
  vector<char,std::allocator<char>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Node *)0x0) {
    std::vector<char,std::allocator<char>>::vector(avStack_20,param_2);
    local_28 = (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                )AssetsManagerManifest::isVersionLoaded((AssetsManagerManifest *)param_1);
    if (local_28 ==
        (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
         )0x0) {
      local_28 = (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  )0x3d;
      std::vector<char,std::allocator<char>>::push_back(avStack_20,(char *)&local_28);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                (&local_28,(__normal_iterator *)&local_30);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
      std::vector<char,std::allocator<char>>::
      insert<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,void>
                ((vector<char,std::allocator<char>> *)param_3,CONCAT71(uStack_27,local_28),uVar3,
                 uVar4);
      if (param_1 == (Node *)0xfffffffffffffffc) {
        uVar5 = 0xffffffff;
        uVar2 = 0xffffffff;
        uVar1 = uVar2;
      }
      else {
        uVar2 = *(uint *)(param_1 + 4);
        uVar5 = (ulong)*(uint *)(param_1 + 0xc);
        uVar1 = *(uint *)(param_1 + 8);
      }
      StrFormat("<%d-%d-%d>;\n",asStack_38,(ulong)uVar2,(ulong)uVar1,uVar5);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                (&local_28,(__normal_iterator *)&local_30);
      uVar3 = FUN_05474e7c(asStack_38);
      uVar4 = FUN_05474eb0(asStack_38);
      std::vector<char,std::allocator<char>>::
      insert<__gnu_cxx::__normal_iterator<char*,std::string>,void>
                ((vector<char,std::allocator<char>> *)param_3,CONCAT71(uStack_27,local_28),uVar3,
                 uVar4);
      std::string::~string(asStack_38);
    }
    else {
      std::vector<char,std::allocator<char>>::push_back(avStack_20,(char *)&local_28);
      DebugPrint_rescurive(this,param_1 + 4,(vector *)avStack_20,param_3);
    }
    uVar2 = Node::alt(param_1);
    if (uVar2 != 0) {
      DebugPrint_rescurive
                (this,(Node *)(*(long *)this + (ulong)uVar2 * 4),(vector *)avStack_20,param_3);
    }
    std::vector<char,std::allocator<char>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CompiledMap::DebugPrint(std::string&) */

void __thiscall Sexy::CompiledMap::DebugPrint(CompiledMap *this,string *param_1)

{
  undefined8 uVar1;
  string local_40 [8];
  undefined8 local_38 [3];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OutputDebugStrF((wchar_t *)"==== DebugPrint Begin =====\n");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  DebugPrint_rescurive(this,*(Node **)this,(vector *)avStack_20,(vector *)local_38);
  local_40[0] = (string)0x0;
  std::vector<char,std::allocator<char>>::push_back
            ((vector<char,std::allocator<char>> *)local_38,(char *)local_40);
  StrFormat("(mNumNodes=%d)",local_40,(ulong)*(uint *)(this + 8));
  FUN_05474278(param_1,local_40);
  std::string::~string(local_40);
  uVar1 = thunk_FUN_0539af30(local_38[0]);
  FUN_05475ad8(param_1,uVar1);
  uVar1 = FUN_0547429c(param_1);
  OutputDebugStrF(L"\x000a7325",uVar1);
  OutputDebugStrF((wchar_t *)"==== DebugPrint End =====\n");
  std::vector<char,std::allocator<char>>::~vector((vector<char,std::allocator<char>> *)avStack_20);
  std::vector<char,std::allocator<char>>::~vector((vector<char,std::allocator<char>> *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

