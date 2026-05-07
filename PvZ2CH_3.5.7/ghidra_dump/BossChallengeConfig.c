// Class: BossChallengeConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeConfig::StaticClassInit() */

void BossChallengeConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossChallengeConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04baeb68,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossChallengeConfig::StaticGetClass() */

long * BossChallengeConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BossChallengeConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossChallengeConfig::GetClass() const */

long * BossChallengeConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"BossChallengeConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossChallengeConfig::BossChallengeConfig() */

void __thiscall BossChallengeConfig::BossChallengeConfig(BossChallengeConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06976a60;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x10));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x38));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x60));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x88));
  return;
}


/* BossChallengeConfig::StaticNew() */

BossChallengeConfig * BossChallengeConfig::StaticNew(void)

{
  BossChallengeConfig *this;
  
  this = ::operator_new(0xb0);
  BossChallengeConfig(this);
  return this;
}


/* BossChallengeConfig::~BossChallengeConfig() */

void __thiscall BossChallengeConfig::~BossChallengeConfig(BossChallengeConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_06976a60;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x88));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x60));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x38));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x10));
  nop();
  return;
}


/* BossChallengeConfig::~BossChallengeConfig() */

void __thiscall BossChallengeConfig::~BossChallengeConfig(BossChallengeConfig *this)

{
  ~BossChallengeConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallengeConfig::Init() */

void __thiscall BossChallengeConfig::Init(BossChallengeConfig *this)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uchar *puVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  uint local_ec;
  string asStack_e8 [8];
  RtSerialRtonKey aRStack_e0 [8];
  RtSerialRtonSync aRStack_d8 [24];
  RtSerialRtonReader aRStack_c0 [40];
  Buffer aBStack_98 [48];
  Buffer aBStack_68 [48];
  RtSerialRtonKey aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_e8,"packages\\BossChallengeConfig.rton");
  nop();
  Sexy::Buffer::Buffer(aBStack_98);
  cVar1 = Sexy::SexyAppBase::ReadBufferFromFile
                    (Sexy::gSexyAppBase,(Buffer *)asStack_e8,SUB81(aBStack_98,0));
  if (cVar1 != '\0') {
    Sexy::Buffer::Buffer(aBStack_68);
    (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x68) + 0x20))
              (*(long **)(Sexy::gSexyAppBase + 0x68),aBStack_98,aBStack_68);
    puVar4 = (uchar *)Sexy::Buffer::GetDataPtr(aBStack_68);
    uVar3 = Sexy::Buffer::GetDataLen(aBStack_68);
    Sexy::RtSerialRtonReader::RtSerialRtonReader(aRStack_c0,puVar4,uVar3);
    Sexy::RtSerialRtonSync::RtSerialRtonSync(aRStack_d8,aRStack_c0);
    Sexy::RtSerialRtonReader::BeginDocumentObject(aRStack_c0);
    local_ec = 0;
    Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_38,"objects");
    cVar2 = Sexy::RtSerialRtonReader::BeginArray(aRStack_c0,aRStack_38,&local_ec);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_38);
    if (cVar2 != '\0') {
      uVar3 = 0;
      if (local_ec != 0) {
        do {
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_38,(char *)0x0);
          Sexy::RtSerialRtonReader::BeginObject((RtSerialRtonKey *)aRStack_c0);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_38);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_38,"objclass");
          pcVar5 = (char *)Sexy::RtSerialRtonReader::ReadStringDirect((RtSerialRtonKey *)aRStack_c0)
          ;
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_38);
          lVar6 = StaticGetClass();
          lVar7 = Sexy::RtClass::StaticGetClassNamed(pcVar5);
          if (lVar6 == lVar7) {
            pcVar8 = *(code **)(*(long *)this + 0x30);
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_e0,"objdata");
            Sexy::RtSerializeContext::RtSerializeContext
                      ((RtSerializeContext *)aRStack_38,aRStack_d8,aRStack_e0,0);
            (*pcVar8)(this,aRStack_38);
            Sexy::RtSerializeContext::~RtSerializeContext((RtSerializeContext *)aRStack_38);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_e0);
            Sexy::RtSerialRtonReader::EndObject(aRStack_c0);
            break;
          }
          uVar3 = uVar3 + 1;
          Sexy::RtSerialRtonReader::EndObject(aRStack_c0);
        } while (uVar3 < local_ec);
      }
      Sexy::RtSerialRtonReader::EndArray(aRStack_c0);
    }
    Sexy::RtSerialRtonReader::EndDocumentObject(aRStack_c0);
    Sexy::RtSerialRtonReader::~RtSerialRtonReader(aRStack_c0);
    Sexy::Buffer::~Buffer(aBStack_68);
  }
  Sexy::Buffer::~Buffer(aBStack_98);
  std::string::~string(asStack_e8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}

