// Class: Sexy::ResourceInfoTypes::RenderEffectRes


/* Sexy::ResourceInfoTypes::RenderEffectRes::~RenderEffectRes() */

void __thiscall Sexy::ResourceInfoTypes::RenderEffectRes::~RenderEffectRes(RenderEffectRes *this)

{
  *(undefined ***)this = &PTR_GetClass_06a30020;
  std::string::~string((string *)(this + 0x68));
  ResourceInfo::~ResourceInfo((ResourceInfo *)this);
  return;
}


/* Sexy::ResourceInfoTypes::RenderEffectRes::~RenderEffectRes() */

void __thiscall Sexy::ResourceInfoTypes::RenderEffectRes::~RenderEffectRes(RenderEffectRes *this)

{
  ~RenderEffectRes(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ResourceInfoTypes::RenderEffectRes::RenderEffectRes() */

void __thiscall Sexy::ResourceInfoTypes::RenderEffectRes::RenderEffectRes(RenderEffectRes *this)

{
  ResourceInfo::ResourceInfo((ResourceInfo *)this);
  *(undefined ***)this = &PTR_GetClass_06a30020;
  Set8BytesTo0(this + 0x68);
  return;
}


/* Sexy::ResourceInfoTypes::RenderEffectRes::StaticNew() */

RenderEffectRes * Sexy::ResourceInfoTypes::RenderEffectRes::StaticNew(void)

{
  RenderEffectRes *this;
  
  this = ::operator_new(0x70);
  RenderEffectRes(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::RenderEffectRes::DoLoad() */

void __thiscall Sexy::ResourceInfoTypes::RenderEffectRes::DoLoad(RenderEffectRes *this)

{
  char cVar1;
  RenderEffectDefinition *this_00;
  char *pcVar2;
  undefined8 uVar3;
  ResourceManager *this_01;
  AutoCrit aAStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_20,(CritSect *)(*(long *)(this + 8) + 0x1a8));
  this_00 = ::operator_new(0x40);
  RenderEffectDefinition::RenderEffectDefinition(this_00);
  pcVar2 = (char *)FUN_0547429c(this + 0x68);
  cVar1 = RenderEffectDefinition::LoadFromFile(this_00,*(char **)(this + 0x40),pcVar2);
  if (cVar1 == '\0') {
    this_01 = *(ResourceManager **)(this + 8);
    std::string::string(asStack_18,"RenderEffect loading error on file ");
    std::operator+(asStack_18,*(char **)(this + 0x40));
    ResourceManager::Fail(this_01,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    (**(code **)(*(long *)this_00 + 0x18))(this_00);
  }
  else {
    uVar3 = *(undefined8 *)(this + 8);
    ResourceInfo::GetRtId();
    ResourceManager::RegisterResourceInternal((RtId *)asStack_10,uVar3,0,this_00,asStack_18,1);
    RtId::operator=((RtId *)(this + 0x20),(RtId *)asStack_10);
    RtId::~RtId((RtId *)asStack_10);
    RtId::~RtId((RtId *)asStack_18);
  }
  AutoCrit::~AutoCrit(aAStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Sexy::ResourceInfoTypes::RenderEffectRes::StaticGetClass() */

long * Sexy::ResourceInfoTypes::RenderEffectRes::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceInfoClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ResourceInfo::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceInfoTypes::RenderEffectRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ResourceInfoTypes::RenderEffectRes::GetClass() const */

long * Sexy::ResourceInfoTypes::RenderEffectRes::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceInfoClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ResourceInfo::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceInfoTypes::RenderEffectRes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::RenderEffectRes::StaticClassInit() */

void Sexy::ResourceInfoTypes::RenderEffectRes::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  RtName *pRVar3;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = StaticGetClass();
  uVar2 = RenderEffectDefinition::StaticGetClass();
  FUN_05194914(lVar1 + 0x48,uVar2);
  pRVar3 = (RtName *)StaticGetClass();
  RtName::RtName(aRStack_18,L"RenderEffect");
  ResourceInfoClass::SetManifestTypeName(pRVar3);
  RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResourceInfoTypes::RenderEffectRes::ParseRton() */

void __thiscall Sexy::ResourceInfoTypes::RenderEffectRes::ParseRton(RenderEffectRes *this)

{
  RenderEffectRes *pRVar1;
  char cVar2;
  RtSerialRtonReader *this_00;
  uint uVar3;
  RtSerialRtonKey *pRVar4;
  uint local_24;
  RtSerialRtonKey aRStack_20 [8];
  string asStack_18 [8];
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  pRVar1 = this + 0x68;
  local_8 = ___stack_chk_guard;
  FUN_05474ff8(pRVar1);
  local_24 = 0;
  this_00 = *(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8);
  RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"srcpath");
  cVar2 = RtSerialRtonReader::BeginArray(this_00,aRStack_10,&local_24);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  if (cVar2 != '\0') {
    if (local_24 != 0) {
      uVar3 = 0;
      do {
        cVar2 = FUN_0547419c(pRVar1);
        if (cVar2 == '\0') {
          FUN_05475ad8(pRVar1,&DAT_055fe318);
        }
        uVar3 = uVar3 + 1;
        pRVar4 = *(RtSerialRtonKey **)(*(long *)(this + 8) + 0x1f8);
        RtSerialRtonKey::RtSerialRtonKey(aRStack_20,(char *)0x0);
        std::string::string(asStack_18,"");
        RtSerialRtonReader::ReadString(pRVar4,(string *)aRStack_20);
        thunk_FUN_054757c0(pRVar1,aRStack_10);
        std::string::~string((string *)aRStack_10);
        std::string::~string(asStack_18);
        nop();
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_20);
      } while (uVar3 < local_24);
    }
    RtSerialRtonReader::EndArray(*(RtSerialRtonReader **)(*(long *)(this + 8) + 0x1f8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

