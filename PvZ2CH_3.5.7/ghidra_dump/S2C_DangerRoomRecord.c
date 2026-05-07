// Class: S2C_DangerRoomRecord


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DangerRoomRecord::S2C_DangerRoomRecord() */

void __thiscall S2C_DangerRoomRecord::S2C_DangerRoomRecord(S2C_DangerRoomRecord *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660d990;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomRecord_0660d9f8;
  *(undefined4 *)(this + 0x1c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x78) = 0xffffffff;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  std::string::string((string *)(this + 0x90),"");
  nop();
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_DangerRoomRecord::S2C_DangerRoomRecord(S2C_DangerRoomRecord const&) */

void __thiscall
S2C_DangerRoomRecord::S2C_DangerRoomRecord(S2C_DangerRoomRecord *this,S2C_DangerRoomRecord *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined ***)this = &PTR_GetClass_0660d990;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomRecord_0660d9f8;
  *(undefined4 *)(this + 0x1c) = uVar2;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = uVar1;
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  FUN_05475d88(this + 0x48,param_1 + 0x48);
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  uVar3 = *(undefined4 *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(param_1 + 0x74);
  uVar5 = *(undefined4 *)(param_1 + 0x78);
  uVar6 = *(undefined4 *)(param_1 + 0x7c);
  uVar7 = *(undefined4 *)(param_1 + 0x80);
  uVar8 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x68) = uVar1;
  *(undefined4 *)(this + 0x6c) = uVar2;
  *(undefined4 *)(this + 0x70) = uVar3;
  *(undefined4 *)(this + 0x74) = uVar4;
  *(undefined4 *)(this + 0x78) = uVar5;
  *(undefined4 *)(this + 0x7c) = uVar6;
  *(undefined4 *)(this + 0x80) = uVar7;
  *(undefined4 *)(this + 0x84) = uVar8;
  FUN_05475d88(this + 0x90,param_1 + 0x90);
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0x98) = uVar1;
  std::vector<CthulhuDangerroomInfo,std::allocator<CthulhuDangerroomInfo>>::vector
            ((vector<CthulhuDangerroomInfo,std::allocator<CthulhuDangerroomInfo>> *)(this + 0xa0),
             (vector *)(param_1 + 0xa0));
  return;
}


/* S2C_DangerRoomRecord::~S2C_DangerRoomRecord() */

void __thiscall S2C_DangerRoomRecord::~S2C_DangerRoomRecord(S2C_DangerRoomRecord *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d990;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomRecord_0660d9f8;
  std::vector<CthulhuDangerroomInfo,std::allocator<CthulhuDangerroomInfo>>::~vector
            ((vector<CthulhuDangerroomInfo,std::allocator<CthulhuDangerroomInfo>> *)(this + 0xa0));
  std::string::~string((string *)(this + 0x90));
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::~vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x50))
  ;
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomRecord::~S2C_DangerRoomRecord() */

void __thiscall S2C_DangerRoomRecord::~S2C_DangerRoomRecord(S2C_DangerRoomRecord *this)

{
  ~S2C_DangerRoomRecord(this + -8);
  return;
}


/* S2C_DangerRoomRecord::~S2C_DangerRoomRecord() */

void __thiscall S2C_DangerRoomRecord::~S2C_DangerRoomRecord(S2C_DangerRoomRecord *this)

{
  ~S2C_DangerRoomRecord(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomRecord::~S2C_DangerRoomRecord() */

void __thiscall S2C_DangerRoomRecord::~S2C_DangerRoomRecord(S2C_DangerRoomRecord *this)

{
  ~S2C_DangerRoomRecord(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DangerRoomRecord::StaticClassInit() */

void S2C_DangerRoomRecord::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CthulhuDangerroomInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03205c70,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_DangerRoomRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_032384ec,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_DangerRoomRecord::StaticGetClass() */

long * S2C_DangerRoomRecord::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"S2C_DangerRoomRecord",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DangerRoomRecord::GetClass() const */

long * S2C_DangerRoomRecord::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"S2C_DangerRoomRecord",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DangerRoomRecord::StaticNew() */

S2C_DangerRoomRecord * S2C_DangerRoomRecord::StaticNew(void)

{
  S2C_DangerRoomRecord *this;
  
  this = ::operator_new(0xb8);
  S2C_DangerRoomRecord(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DangerRoomRecord::Compress() */

void __thiscall S2C_DangerRoomRecord::Compress(S2C_DangerRoomRecord *this)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  ulong uVar5;
  string asStack_d8 [8];
  ulong local_d0;
  string asStack_c8 [8];
  string asStack_c0 [8];
  undefined8 local_b8 [2];
  S2C_DangerRoomPlantNumArray aSStack_a8 [24];
  vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> avStack_90 [24];
  MD5 aMStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  S2C_DangerRoomPlantNumArray::S2C_DangerRoomPlantNumArray(aSStack_a8);
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::operator=
            (avStack_90,(vector *)(this + 0x50));
  Set8BytesTo0(asStack_d8);
  S2C_DangerRoomPlantNumArray::ToJason(aSStack_a8,asStack_d8);
  local_d0 = 0x1400;
  AutoBuffer::AutoBuffer((AutoBuffer *)local_b8,0x1400);
  puVar3 = (uchar *)FUN_031fd148(local_b8[0]);
  puVar4 = (uchar *)FUN_0547429c(asStack_d8);
  uVar1 = FUN_05474178(asStack_d8);
  base64_url_safe(puVar4,uVar1);
  puVar4 = (uchar *)FUN_0547429c(asStack_c8);
  uVar5 = FUN_05474178(asStack_c8);
  iVar2 = gzcompress(puVar4,uVar5,puVar3,&local_d0);
  if (iVar2 == 0) {
    base64_url_safe(puVar3,(uint)local_d0);
    FUN_05474278((string *)(this + 0x40),asStack_c0);
    std::string::~string(asStack_c0);
    MD5::MD5(aMStack_78,(string *)(this + 0x40));
    MD5::toString();
    FUN_05474278(this + 0x48,asStack_c0);
    std::string::~string(asStack_c0);
  }
  std::string::~string(asStack_c8);
  AutoBuffer::~AutoBuffer((AutoBuffer *)local_b8);
  std::string::~string(asStack_d8);
  S2C_DangerRoomPlantNumArray::~S2C_DangerRoomPlantNumArray(aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DangerRoomRecord::Decompress() */

void __thiscall S2C_DangerRoomRecord::Decompress(S2C_DangerRoomRecord *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uchar *__s;
  uchar *puVar4;
  ulong uVar5;
  string asStack_d8 [8];
  string asStack_d0 [8];
  ulong local_c8;
  string asStack_c0 [8];
  undefined8 local_b8 [2];
  string asStack_a8 [24];
  vector avStack_90 [24];
  MD5 aMStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = '\0';
  MD5::MD5(aMStack_78,(string *)(this + 0x40));
  MD5::toString();
  cVar1 = std::operator==(asStack_d8,(string *)(this + 0x48));
  if (cVar1 != '\0') {
    base64_decode_url_safe((string *)(this + 0x40));
    local_c8 = 0x100000;
    AutoBuffer::AutoBuffer((AutoBuffer *)local_b8,0x100000);
    __s = (uchar *)FUN_031fd148(local_b8[0]);
    puVar4 = (uchar *)FUN_0547429c(asStack_d0);
    uVar5 = FUN_05474178(asStack_d0);
    iVar3 = gzdecompress(puVar4,uVar5,__s,&local_c8);
    if (iVar3 == 0) {
      (__s + local_c8)[1] = '\0';
      std::string::append(asStack_d0,(char *)__s,(size_t)(__s + local_c8));
      base64_decode_url_safe(asStack_d0);
      FUN_05474278(asStack_d0,asStack_a8);
      std::string::~string(asStack_a8);
      FUN_054755d4(asStack_d0,0,"{\"d\" : {\"pl\" : ");
      FUN_05475aa4(asStack_d0,&DAT_055991f8);
      S2C_DangerRoomPlantNumArray::S2C_DangerRoomPlantNumArray
                ((S2C_DangerRoomPlantNumArray *)asStack_a8);
      std::string::string(asStack_c0,"d");
      cVar2 = Sexy::RtObject::SerializeJsonToObj((RtObject *)asStack_a8,asStack_d0,asStack_c0);
      std::string::~string(asStack_c0);
      nop();
      if (cVar2 != '\0') {
        std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::operator=
                  ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)
                   (this + 0x50),avStack_90);
      }
      S2C_DangerRoomPlantNumArray::~S2C_DangerRoomPlantNumArray
                ((S2C_DangerRoomPlantNumArray *)asStack_a8);
    }
    AutoBuffer::~AutoBuffer((AutoBuffer *)local_b8);
    std::string::~string(asStack_d0);
  }
  std::string::~string(asStack_d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* S2C_DangerRoomRecord::TEMPNAMEPLACEHOLDERVALUE(S2C_DangerRoomRecord&&) */

S2C_DangerRoomRecord * __thiscall
S2C_DangerRoomRecord::operator=(S2C_DangerRoomRecord *this,S2C_DangerRoomRecord *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = uVar1;
  FUN_05474278(this + 0x40,param_1 + 0x40);
  FUN_05474278(this + 0x48,param_1 + 0x48);
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::operator=
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  uVar3 = *(undefined4 *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(param_1 + 0x74);
  uVar5 = *(undefined4 *)(param_1 + 0x78);
  uVar6 = *(undefined4 *)(param_1 + 0x7c);
  uVar7 = *(undefined4 *)(param_1 + 0x80);
  uVar8 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x68) = uVar1;
  *(undefined4 *)(this + 0x6c) = uVar2;
  *(undefined4 *)(this + 0x70) = uVar3;
  *(undefined4 *)(this + 0x74) = uVar4;
  *(undefined4 *)(this + 0x78) = uVar5;
  *(undefined4 *)(this + 0x7c) = uVar6;
  *(undefined4 *)(this + 0x80) = uVar7;
  *(undefined4 *)(this + 0x84) = uVar8;
  FUN_05474278(this + 0x90,param_1 + 0x90);
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0x98) = uVar1;
  std::vector<CthulhuDangerroomInfo,std::allocator<CthulhuDangerroomInfo>>::operator=
            ((vector<CthulhuDangerroomInfo,std::allocator<CthulhuDangerroomInfo>> *)(this + 0xa0),
             (vector *)(param_1 + 0xa0));
  return this;
}


/* S2C_DangerRoomRecord::TEMPNAMEPLACEHOLDERVALUE(S2C_DangerRoomRecord const&) */

S2C_DangerRoomRecord * __thiscall
S2C_DangerRoomRecord::operator=(S2C_DangerRoomRecord *this,S2C_DangerRoomRecord *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = uVar1;
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  thunk_FUN_05475e00(this + 0x48,param_1 + 0x48);
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::operator=
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  uVar3 = *(undefined4 *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(param_1 + 0x74);
  uVar5 = *(undefined4 *)(param_1 + 0x78);
  uVar6 = *(undefined4 *)(param_1 + 0x7c);
  uVar7 = *(undefined4 *)(param_1 + 0x80);
  uVar8 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x68) = uVar1;
  *(undefined4 *)(this + 0x6c) = uVar2;
  *(undefined4 *)(this + 0x70) = uVar3;
  *(undefined4 *)(this + 0x74) = uVar4;
  *(undefined4 *)(this + 0x78) = uVar5;
  *(undefined4 *)(this + 0x7c) = uVar6;
  *(undefined4 *)(this + 0x80) = uVar7;
  *(undefined4 *)(this + 0x84) = uVar8;
  thunk_FUN_05475e00(this + 0x90,param_1 + 0x90);
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0x98) = uVar1;
  std::vector<CthulhuDangerroomInfo,std::allocator<CthulhuDangerroomInfo>>::operator=
            ((vector<CthulhuDangerroomInfo,std::allocator<CthulhuDangerroomInfo>> *)(this + 0xa0),
             (vector *)(param_1 + 0xa0));
  return this;
}

