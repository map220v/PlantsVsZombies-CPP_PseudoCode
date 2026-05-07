// Class: Sexy::OpenGLIdRegistry


/* Sexy::OpenGLIdRegistry::StaticValidateAllIds() */

void Sexy::OpenGLIdRegistry::StaticValidateAllIds(void)

{
  if (spGlobalRegistry != (OpenGLIdRegistry *)0x0) {
    ValidateAllIds(spGlobalRegistry);
    return;
  }
  return;
}


/* Sexy::OpenGLIdRegistry::StaticIsTextureIdValid(unsigned int) */

undefined8 Sexy::OpenGLIdRegistry::StaticIsTextureIdValid(uint param_1)

{
  undefined8 uVar1;
  
  if (spGlobalRegistry != (OpenGLIdRegistry *)0x0) {
    uVar1 = TextureIdIsValid(spGlobalRegistry,param_1);
    return uVar1;
  }
  return 1;
}


/* Sexy::OpenGLIdRegistry::StaticRegisterIds(int, unsigned int const*) */

void Sexy::OpenGLIdRegistry::StaticRegisterIds(int param_1,uint *param_2)

{
  if (spGlobalRegistry != (OpenGLIdRegistry *)0x0) {
    RegisterTextureIds(spGlobalRegistry,param_1,param_2);
    return;
  }
  return;
}


/* Sexy::OpenGLIdRegistry::StaticUnregisterIds(int, unsigned int const*) */

void Sexy::OpenGLIdRegistry::StaticUnregisterIds(int param_1,uint *param_2)

{
  if (spGlobalRegistry != (OpenGLIdRegistry *)0x0) {
    UnregisterTextureIds(spGlobalRegistry,param_1,param_2);
    return;
  }
  return;
}


/* Sexy::OpenGLIdRegistry::StaticIsShaderIdValid(unsigned int) */

undefined8 Sexy::OpenGLIdRegistry::StaticIsShaderIdValid(uint param_1)

{
  undefined8 uVar1;
  
  if (spGlobalRegistry != (OpenGLIdRegistry *)0x0) {
    uVar1 = ShaderIdIsValid(spGlobalRegistry,param_1);
    return uVar1;
  }
  return 1;
}


/* Sexy::OpenGLIdRegistry::StaticRegisterShaderIds(int, unsigned int const*) */

void Sexy::OpenGLIdRegistry::StaticRegisterShaderIds(int param_1,uint *param_2)

{
  if (spGlobalRegistry != (OpenGLIdRegistry *)0x0) {
    RegisterShaderIds(spGlobalRegistry,param_1,param_2);
    return;
  }
  return;
}


/* Sexy::OpenGLIdRegistry::StaticUnregisterShaderIds(int, unsigned int const*) */

void Sexy::OpenGLIdRegistry::StaticUnregisterShaderIds(int param_1,uint *param_2)

{
  if (spGlobalRegistry != (OpenGLIdRegistry *)0x0) {
    UnregisterShaderIds(spGlobalRegistry,param_1,param_2);
    return;
  }
  return;
}


/* Sexy::OpenGLIdRegistry::StaticLostFocus() */

void Sexy::OpenGLIdRegistry::StaticLostFocus(void)

{
  if (spGlobalRegistry != 0) {
    FUN_052d9700(spGlobalRegistry + 0x60);
    return;
  }
  return;
}


/* Sexy::OpenGLIdRegistry::StaticGotFocus() */

void Sexy::OpenGLIdRegistry::StaticGotFocus(void)

{
  if (spGlobalRegistry != 0) {
    FUN_052d970c(spGlobalRegistry + 0x60);
    return;
  }
  return;
}


/* Sexy::OpenGLIdRegistry::OpenGLIdRegistry() */

void __thiscall Sexy::OpenGLIdRegistry::OpenGLIdRegistry(OpenGLIdRegistry *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  this[0x60] = (OpenGLIdRegistry)0x1;
  return;
}


/* Sexy::OpenGLIdRegistry::StaticStartup() */

void Sexy::OpenGLIdRegistry::StaticStartup(void)

{
  OpenGLIdRegistry *this;
  
  this = ::operator_new(0x68);
  OpenGLIdRegistry(this);
  spGlobalRegistry = this;
  return;
}


/* Sexy::OpenGLIdRegistry::~OpenGLIdRegistry() */

void __thiscall Sexy::OpenGLIdRegistry::~OpenGLIdRegistry(OpenGLIdRegistry *this)

{
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x48));
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x30));
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x18));
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)this);
  return;
}


/* Sexy::OpenGLIdRegistry::StaticShutdown() */

void Sexy::OpenGLIdRegistry::StaticShutdown(void)

{
  OpenGLIdRegistry *pOVar1;
  
  pOVar1 = spGlobalRegistry;
  if (spGlobalRegistry != (OpenGLIdRegistry *)0x0) {
    ~OpenGLIdRegistry(spGlobalRegistry);
    AK::FreeHook(pOVar1);
  }
  spGlobalRegistry = (OpenGLIdRegistry *)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::OpenGLIdRegistry::TestIdIsValid(std::vector<unsigned int, std::allocator<unsigned int> >&,
   std::vector<unsigned int, std::allocator<unsigned int> >&, unsigned int, std::string) */

void Sexy::OpenGLIdRegistry::TestIdIsValid
               (undefined8 param_1,
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *param_2,vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_4;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_3);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_3);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
                       (uVar3,uVar4,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_3);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  bVar2 = false;
  if (!bVar1) {
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_2);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_2);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
                         (uVar3,uVar4,local_24);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(param_2);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::OpenGLIdRegistry::TextureIdIsValid(unsigned int) */

void __thiscall Sexy::OpenGLIdRegistry::TextureIdIsValid(OpenGLIdRegistry *this,uint param_1)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&mResourceNameTexture);
  uVar1 = TestIdIsValid(this,this,this + 0x18,param_1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::OpenGLIdRegistry::ShaderIdIsValid(unsigned int) */

void __thiscall Sexy::OpenGLIdRegistry::ShaderIdIsValid(OpenGLIdRegistry *this,uint param_1)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&mResourceNameShader);
  uVar1 = TestIdIsValid(this,this + 0x30,this + 0x48,param_1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::OpenGLIdRegistry::UnregisterIds(std::vector<unsigned int, std::allocator<unsigned int> >&,
   std::vector<unsigned int, std::allocator<unsigned int> >&, int, unsigned int const*, std::string)
    */

void Sexy::OpenGLIdRegistry::UnregisterIds
               (undefined8 param_1,
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *param_2,vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *param_3,int param_4,long param_5)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < param_4) {
    lVar1 = param_5 + ((ulong)(param_4 - 1) + 1) * 4;
    do {
      while( true ) {
        local_18 = 0;
        uVar3 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(param_3);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(param_3);
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
                             (uVar3,uVar4,param_5);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(param_3);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (!bVar2) break;
        param_5 = param_5 + 4;
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        local_18 = std::vector<unsigned_int,std::allocator<unsigned_int>>::erase
                             ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_3,local_10)
        ;
        if (param_5 == lVar1) goto LAB_053e35d4;
      }
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_2);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_2);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
                           (uVar3,uVar4,param_5);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_2);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (bVar2) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        local_18 = std::vector<unsigned_int,std::allocator<unsigned_int>>::erase
                             ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_2,local_10)
        ;
      }
      param_5 = param_5 + 4;
    } while (param_5 != lVar1);
  }
LAB_053e35d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::OpenGLIdRegistry::UnregisterTextureIds(int, unsigned int const*) */

void __thiscall
Sexy::OpenGLIdRegistry::UnregisterTextureIds(OpenGLIdRegistry *this,int param_1,uint *param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&mResourceNameTexture);
  UnregisterIds(this,this,this + 0x18,param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::OpenGLIdRegistry::UnregisterShaderIds(int, unsigned int const*) */

void __thiscall
Sexy::OpenGLIdRegistry::UnregisterShaderIds(OpenGLIdRegistry *this,int param_1,uint *param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&mResourceNameShader);
  UnregisterIds(this,this + 0x30,this + 0x48,param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::OpenGLIdRegistry::ValidateAllIds(std::vector<unsigned int, std::allocator<unsigned int> >&,
   std::vector<unsigned int, std::allocator<unsigned int> >&, unsigned char (*)(unsigned int),
   std::string) */

void Sexy::OpenGLIdRegistry::ValidateAllIds
               (long param_1,
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *param_2,vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *param_3,code *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(param_1 + 0x60) == '\0') {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::clear
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_3);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(param_2);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20)
      ;
      cVar2 = (*param_4)(*puVar3);
      if (cVar2 != '\0') break;
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_3);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_3);
      uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
                           (uVar4,uVar5,uVar6);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_3);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (bVar1) {
        puVar7 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_3,puVar7);
      }
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_20);
      local_20 = std::vector<unsigned_int,std::allocator<unsigned_int>>::erase
                           ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_2,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_2);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::OpenGLIdRegistry::ValidateAllIds() */

void __thiscall Sexy::OpenGLIdRegistry::ValidateAllIds(OpenGLIdRegistry *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&mResourceNameTexture);
  ValidateAllIds(this,this,this + 0x18,glIsTexture,asStack_10);
  std::string::~string(asStack_10);
  FUN_05475d88(asStack_10,&mResourceNameShader);
  ValidateAllIds(this,this + 0x30,this + 0x48,glIsShader,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::OpenGLIdRegistry::RegisterIds(std::vector<unsigned int, std::allocator<unsigned int> >&,
   std::vector<unsigned int, std::allocator<unsigned int> >&, int, unsigned int const*, std::string)
    */

void __thiscall
Sexy::OpenGLIdRegistry::RegisterIds
          (undefined8 param_1_00,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_1,vector<unsigned_int,std::allocator<unsigned_int>> *param_2,int param_3,
          uint *param_4,undefined8 param_6)

{
  uint *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < param_3) {
    puVar5 = param_4;
    do {
      while( true ) {
        uVar3 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(param_1);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(param_1);
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
                             (uVar3,uVar4,puVar5);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(param_1);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (bVar2) break;
        puVar1 = puVar5 + 1;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1,puVar5);
        puVar5 = puVar1;
        if (puVar1 == param_4 + (ulong)(param_3 - 1) + 1) goto LAB_053e3a60;
      }
      puVar1 = puVar5 + 1;
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back(param_2,puVar5);
      uVar3 = FUN_0547429c(param_6);
      OutputDebugStrF((wchar_t *)
                      "WARNING!! - Registering %s %d in the GLIdRegistry that was already there!!",
                      uVar3,(ulong)*puVar5);
      puVar5 = puVar1;
    } while (puVar1 != param_4 + (ulong)(param_3 - 1) + 1);
  }
LAB_053e3a60:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::OpenGLIdRegistry::RegisterTextureIds(int, unsigned int const*) */

void __thiscall
Sexy::OpenGLIdRegistry::RegisterTextureIds(OpenGLIdRegistry *this,int param_1,uint *param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&mResourceNameTexture);
  RegisterIds(this,this,this + 0x18,param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::OpenGLIdRegistry::RegisterShaderIds(int, unsigned int const*) */

void __thiscall
Sexy::OpenGLIdRegistry::RegisterShaderIds(OpenGLIdRegistry *this,int param_1,uint *param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,&mResourceNameShader);
  RegisterIds(this,this + 0x30,this + 0x48,param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

