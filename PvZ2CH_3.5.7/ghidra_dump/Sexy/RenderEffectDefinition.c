// Class: Sexy::RenderEffectDefinition


/* Sexy::RenderEffectDefinition::StaticClassInit() */

void Sexy::RenderEffectDefinition::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = StaticGetClass();
  uVar2 = ResourceInfoTypes::RenderEffectRes::StaticGetClass();
  FUN_05194360(lVar1 + 0x48,uVar2);
  return;
}


/* Sexy::RenderEffectDefinition::StaticGetClass() */

long * Sexy::RenderEffectDefinition::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"RenderEffectDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::RenderEffectDefinition::GetClass() const */

long * Sexy::RenderEffectDefinition::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"RenderEffectDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::RenderEffectDefinition::RenderEffectDefinition() */

void __thiscall Sexy::RenderEffectDefinition::RenderEffectDefinition(RenderEffectDefinition *this)

{
  BaseResource::BaseResource((BaseResource *)this);
  *(undefined ***)this = &PTR_GetClass_06a2faf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  return;
}


/* Sexy::RenderEffectDefinition::StaticNew() */

RenderEffectDefinition * Sexy::RenderEffectDefinition::StaticNew(void)

{
  RenderEffectDefinition *this;
  
  this = ::operator_new(0x40);
  RenderEffectDefinition(this);
  return this;
}


/* Sexy::RenderEffectDefinition::~RenderEffectDefinition() */

void __thiscall Sexy::RenderEffectDefinition::~RenderEffectDefinition(RenderEffectDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2faf0;
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x18));
  BaseResource::~BaseResource((BaseResource *)this);
  return;
}


/* Sexy::RenderEffectDefinition::~RenderEffectDefinition() */

void __thiscall Sexy::RenderEffectDefinition::~RenderEffectDefinition(RenderEffectDefinition *this)

{
  ~RenderEffectDefinition(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::RenderEffectDefinition::LoadFromMem(unsigned int, void const*, char const*, char const*) */

undefined8 __thiscall
Sexy::RenderEffectDefinition::LoadFromMem
          (RenderEffectDefinition *this,uint param_1,void *param_2,char *param_3,char *param_4)

{
  void *pvVar1;
  void *__n;
  
  __n = (void *)(ulong)param_1;
  pvVar1 = param_2;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::reserve
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x18),(ulong)__n);
  std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x18),(ulong)__n);
  if (param_1 != 0) {
    pvVar1 = (void *)FUN_05194368(*(undefined8 *)(this + 0x18));
    memcpy(pvVar1,param_2,(size_t)__n);
    pvVar1 = __n;
  }
  std::string::append((string *)(this + 0x30),param_3,(size_t)pvVar1);
  std::string::append((string *)(this + 0x38),param_4,(size_t)pvVar1);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderEffectDefinition::LoadFromFile(char const*, char const*) */

void __thiscall
Sexy::RenderEffectDefinition::LoadFromFile(RenderEffectDefinition *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  char *pcVar7;
  string *extraout_x1;
  string asStack_58 [8];
  string asStack_50 [8];
  Sexy aSStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,param_1);
  nop();
  std::string::string(asStack_40,param_1);
  GetFileDir(asStack_40,true);
  FUN_05474278(asStack_58,asStack_38);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,param_1);
  GetFileName(asStack_40,true);
  thunk_FUN_054757c0(asStack_58,asStack_38);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  nop();
  FUN_05475ad8(asStack_58,".popfx");
  Buffer::Buffer((Buffer *)asStack_38);
  cVar1 = SexyAppBase::ReadBufferFromFile(gSexyAppBase,(Buffer *)asStack_58,SUB81(asStack_38,0));
  uVar2 = 0;
  if (cVar1 != '\0') {
    Set8BytesTo0(asStack_50);
    iVar3 = FUN_054744e0(asStack_58,0x2e,0xffffffffffffffff);
    if (iVar3 != -1) {
      FUN_05475ffc(aSStack_48,asStack_58,(long)iVar3,0xffffffffffffffff);
      Lower(aSStack_48,extraout_x1);
      FUN_05474278(asStack_50,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string((string *)aSStack_48);
    }
    uVar5 = FUN_05474184(asStack_50);
    if (1 < uVar5) {
      FUN_05475ffc(asStack_40,asStack_50,1,0xffffffffffffffff);
      FUN_05474278(asStack_50,asStack_40);
      std::string::~string(asStack_40);
    }
    uVar4 = Buffer::GetDataLen((Buffer *)asStack_38);
    pvVar6 = (void *)Buffer::GetDataPtr((Buffer *)asStack_38);
    pcVar7 = (char *)FUN_0547429c(asStack_50);
    uVar2 = LoadFromMem(this,uVar4,pvVar6,param_2,pcVar7);
    std::string::~string(asStack_50);
  }
  Buffer::~Buffer((Buffer *)asStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

