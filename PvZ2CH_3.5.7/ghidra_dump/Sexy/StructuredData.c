// Class: Sexy::StructuredData


/* Sexy::StructuredData::AddString(char const*, std::string const&) */

void __thiscall Sexy::StructuredData::AddString(StructuredData *this,char *param_1,string *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0547429c(param_2);
  AddString(this,param_1,pcVar1);
  return;
}


/* Sexy::StructuredData::BeginObject() */

void __thiscall Sexy::StructuredData::BeginObject(StructuredData *this)

{
  BeginObject(this,noName);
  return;
}


/* Sexy::StructuredData::~StructuredData() */

void __thiscall Sexy::StructuredData::~StructuredData(StructuredData *this)

{
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x58));
  std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>::~vector
            ((vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *)
             (this + 0x30));
  Buffer::~Buffer((Buffer *)this);
  return;
}


/* Sexy::StructuredData::AddString(char const*) */

void __thiscall Sexy::StructuredData::AddString(StructuredData *this,char *param_1)

{
  AddString(this,noName,param_1);
  return;
}


/* Sexy::StructuredData::AddValue(Sexy::StructuredData::Value const*) */

void __thiscall Sexy::StructuredData::AddValue(StructuredData *this,Value *param_1)

{
  AddValue(this,noName,param_1);
  return;
}


/* Sexy::StructuredData::IndexOfValue(Sexy::StructuredData::Value const*) */

long __thiscall Sexy::StructuredData::IndexOfValue(StructuredData *this,Value *param_1)

{
  long lVar1;
  
  lVar1 = FUN_051e10b4(*(undefined8 *)(this + 0x30),0);
  return (long)param_1 - lVar1 >> 5;
}


/* Sexy::StructuredData::Size() const */

void __thiscall Sexy::StructuredData::Size(StructuredData *this)

{
  FUN_051e10bc(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  return;
}


/* Sexy::StructuredData::Initializing() const */

bool __thiscall Sexy::StructuredData::Initializing(StructuredData *this)

{
  return *(uint *)(this + 0x48) < 2;
}


/* Sexy::StructuredData::Sparse() const */

bool __thiscall Sexy::StructuredData::Sparse(StructuredData *this)

{
  return (*(uint *)(this + 0x48) & 0xfffffffd) == 0;
}


/* Sexy::StructuredData::Readable() const */

byte __thiscall Sexy::StructuredData::Readable(StructuredData *this)

{
  byte bVar1;
  
  bVar1 = Initializing(this);
  return bVar1 ^ 1;
}


/* Sexy::StructuredData::InspectBuffer(Sexy::Buffer const*) */

bool Sexy::StructuredData::InspectBuffer(Buffer *param_1)

{
  int iVar1;
  
  Buffer::SeekFront(param_1);
  iVar1 = Buffer::ReadInt32(param_1);
  Buffer::SeekFront(param_1);
  return iVar1 == 0x50435344;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::Validate(Sexy::StructuredData const*, Sexy::StructuredData*) */

void __thiscall
Sexy::StructuredData::Validate(StructuredData *this,StructuredData *param_1,StructuredData *param_2)

{
  char cVar1;
  StructuredDataValidator aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StructuredDataValidator::StructuredDataValidator(aSStack_28);
  cVar1 = StructuredDataValidator::Validate(aSStack_28,this,param_1,param_2);
  if (cVar1 != '\0') {
    *(StructuredData **)(this + 0x70) = param_1;
  }
  PakRecord::~PakRecord((PakRecord *)aSStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Sexy::StructuredData::Clear() */

void __thiscall Sexy::StructuredData::Clear(StructuredData *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 0x48) = 1;
  std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>::clear
            ((vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *)
             (this + 0x30));
  std::vector<unsigned_int,std::allocator<unsigned_int>>::clear
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x58));
  *(undefined8 *)(this + 0x70) = 0;
  Buffer::Clear((Buffer *)this);
  iVar1 = Buffer::GetDataLen((Buffer *)this);
  *(long *)(this + 0x50) = (long)iVar1;
  return;
}


/* Sexy::StructuredData::GetBufferForTextRead() */

StructuredData * __thiscall Sexy::StructuredData::GetBufferForTextRead(StructuredData *this)

{
  Clear(this);
  *(undefined4 *)(this + 0x48) = 0;
  return this;
}


/* Sexy::StructuredData::ValueAtIndex(long) */

long __thiscall Sexy::StructuredData::ValueAtIndex(StructuredData *this,long param_1)

{
  long lVar1;
  
  lVar1 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                    ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                     (this + 0x30));
  return lVar1 + param_1 * 0x20;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::RebaseStringPointers(char const*, char const*) const */

void __thiscall
Sexy::StructuredData::RebaseStringPointers(StructuredData *this,char *param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_18 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar3) break;
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar5 = FUN_051e0f8c(*(undefined8 *)(lVar4 + 8),param_1,param_2);
    *(undefined8 *)(lVar4 + 8) = uVar5;
    puVar6 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar1 = *puVar6;
    cVar2 = FUN_051e0fb4(uVar1);
    if ((cVar2 != '\0') || (cVar2 = FUN_051e0fc0(uVar1), cVar2 != '\0')) {
      uVar5 = FUN_051e0f8c(*(undefined8 *)(puVar6 + 4),param_1,param_2);
      *(undefined8 *)(puVar6 + 4) = uVar5;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::StructuredData::EmbufferString(char const*, unsigned long) const */

char * __thiscall
Sexy::StructuredData::EmbufferString(StructuredData *this,char *param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  lVar2 = Buffer::GetDataPtr((Buffer *)this);
  if (lVar2 == 0) {
    Buffer::WriteByte((Buffer *)this,'\0');
  }
  if (param_1 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = (char *)Buffer::GetDataPtr((Buffer *)this);
    uVar4 = Buffer::GetDataLen((Buffer *)this);
    pcVar5 = param_1 + param_2;
    pcVar1 = pcVar3 + ((uVar4 & 0xffffffff) - param_2);
    if (pcVar3 < pcVar1) {
      do {
        pcVar6 = param_1;
        if (*pcVar3 == '\0') {
LAB_051e2944:
          if (pcVar6 == pcVar5) {
            return pcVar3;
          }
        }
        else if ((param_1 < pcVar5) && (pcVar7 = pcVar3, *param_1 == *pcVar3)) {
          do {
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
            if (*pcVar7 == '\0') goto LAB_051e2944;
          } while ((pcVar6 != pcVar5) && (*pcVar6 == *pcVar7));
        }
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 != pcVar1);
    }
    pcVar5 = (char *)Buffer::GetDataPtr((Buffer *)this);
    Buffer::WriteBytes((Buffer *)this,(uchar *)param_1,param_2);
    Buffer::WriteByte((Buffer *)this,'\0');
    pcVar3 = (char *)Buffer::GetDataPtr((Buffer *)this);
    if (pcVar3 != pcVar5) {
      RebaseStringPointers(this,pcVar5,pcVar3);
    }
    pcVar3 = pcVar3 + (uVar4 & 0xffffffff);
  }
  return pcVar3;
}


/* Sexy::StructuredData::EmbufferString(char const*) const */

void __thiscall Sexy::StructuredData::EmbufferString(StructuredData *this,char *param_1)

{
  size_t sVar1;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    EmbufferString(this,param_1,sVar1);
    return;
  }
  EmbufferString(this,(char *)0x0,0);
  return;
}


/* Sexy::StructuredData::EmbufferString(std::string const&) const */

void __thiscall Sexy::StructuredData::EmbufferString(StructuredData *this,string *param_1)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)FUN_054742a4(param_1);
  uVar2 = FUN_05474184(param_1);
  EmbufferString(this,pcVar1,uVar2);
  return;
}


/* Sexy::StructuredData::EmbufferString(char const*, char const*) const */

void __thiscall
Sexy::StructuredData::EmbufferString(StructuredData *this,char *param_1,char *param_2)

{
  EmbufferString(this,param_1,(long)param_2 - (long)param_1);
  return;
}


/* Sexy::StructuredData::InternalizeString(char const*, unsigned long) */

char * __thiscall
Sexy::StructuredData::InternalizeString(StructuredData *this,char *param_1,ulong param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = Sparse(this);
  if (cVar1 == '\0') {
    pcVar2 = (char *)EmbufferString(this,param_1,param_2);
    return pcVar2;
  }
  Buffer::GetDataPtr((Buffer *)this);
  Buffer::GetDataLen((Buffer *)this);
  return param_1;
}


/* Sexy::StructuredData::InternalizeString(char const*) */

void __thiscall Sexy::StructuredData::InternalizeString(StructuredData *this,char *param_1)

{
  size_t sVar1;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    InternalizeString(this,param_1,sVar1);
    return;
  }
  InternalizeString(this,(char *)0x0,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::WriteToConsole() const */

void __thiscall Sexy::StructuredData::WriteToConsole(StructuredData *this)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  Value *this_00;
  ulong uVar4;
  char *__s;
  size_t sVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x30));
  local_10 = local_20;
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_10,(__normal_iterator *)&local_18), bVar2) {
    this_00 = (Value *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
    uVar4 = __gnu_cxx::operator-((__normal_iterator *)&local_10,(__normal_iterator *)&local_20);
    Value::WriteToConsole(this_00,uVar4);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_10);
  }
  __s = (char *)Buffer::GetDataPtr((Buffer *)this);
  iVar3 = Buffer::GetDataLen((Buffer *)this);
  pcVar1 = __s + iVar3;
  for (; __s < pcVar1; __s = __s + sVar5 + 1) {
    sVar5 = strlen(__s);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::StructuredData::StructuredData() */

void __thiscall Sexy::StructuredData::StructuredData(StructuredData *this)

{
  Buffer::Buffer((Buffer *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  Clear(this);
  return;
}


/* Sexy::StructuredData::Empty() const */

void __thiscall Sexy::StructuredData::Empty(StructuredData *this)

{
  std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>::empty
            ((vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *)
             (this + 0x30));
  return;
}


/* Sexy::StructuredData::Root() const */

undefined8 __thiscall Sexy::StructuredData::Root(StructuredData *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>::
          empty((vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *)
                (this + 0x30));
  if (cVar1 == '\0') {
    uVar2 = FUN_051e10b4(*(undefined8 *)(this + 0x30),0);
    return uVar2;
  }
  return 0;
}


/* Sexy::StructuredData::AppendToQueryString(std::string&) const */

void __thiscall Sexy::StructuredData::AppendToQueryString(StructuredData *this,string *param_1)

{
  char cVar1;
  Value *this_00;
  
  this_00 = (Value *)Root(this);
  if ((this_00 != (Value *)0x0) && (cVar1 = FUN_051e0ff4(*(undefined4 *)this_00), cVar1 != '\0')) {
    Value::AppendToQueryString(this_00,param_1);
    return;
  }
  return;
}


/* Sexy::StructuredData::ValueForPath(char const*) const */

undefined8 __thiscall Sexy::StructuredData::ValueForPath(StructuredData *this,char *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  Value *this_00;
  
  bVar1 = std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>::
          empty((vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *)
                (this + 0x30));
  if ((bVar1 < (param_1 != (char *)0x0)) && (*param_1 == '$')) {
    if (param_1[1] == '\0') {
      uVar2 = FUN_051e10b4(*(undefined8 *)(this + 0x30),0);
      return uVar2;
    }
    this_00 = (Value *)FUN_051e10b4(*(undefined8 *)(this + 0x30),0);
    uVar2 = Value::ValueForPath(this_00,param_1 + 1);
    return uVar2;
  }
  return 0;
}


/* Sexy::StructuredData::StringForPath(char const*, char const*) const */

char * __thiscall
Sexy::StructuredData::StringForPath(StructuredData *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  puVar2 = (undefined4 *)ValueForPath(this,param_1);
  if ((puVar2 != (undefined4 *)0x0) && (cVar1 = FUN_051e0fb4(*puVar2), cVar1 != '\0')) {
    pcVar3 = (char *)FUN_051e1028(*(undefined8 *)(puVar2 + 4));
    return pcVar3;
  }
  return param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::SexyStringForPath(char const*, std::wstring const&) const */

void Sexy::StructuredData::SexyStringForPath(char *param_1,wstring *param_2)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)StringForPath((StructuredData *)param_1,(char *)param_2,(char *)0x0);
  if (__s == (char *)0x0) {
    FUN_05477b24();
  }
  else {
    std::string::string(asStack_10,__s);
    ToWString(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::IntegerForPath(char const*, long) const */

void __thiscall
Sexy::StructuredData::IntegerForPath(StructuredData *this,char *param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined4 *)ValueForPath(this,param_1);
  if (puVar3 != (undefined4 *)0x0) {
    uVar2 = *puVar3;
    cVar1 = FUN_051e0fdc(uVar2);
    if (cVar1 != '\0') {
      param_2 = ___stack_chk_guard;
      if (local_8 == ___stack_chk_guard) {
        FUN_051e1020(*(undefined8 *)(puVar3 + 4));
        return;
      }
      goto LAB_051e30c0;
    }
    cVar1 = FUN_051e0fb4(uVar2);
    if (cVar1 != '\0') {
      uVar2 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar2);
      uVar4 = FUN_051e1028(*(undefined8 *)(puVar3 + 4));
      FUN_054603b8(auStack_168,uVar4);
      thunk_FUN_0544b32c(auStack_178,&local_180);
      FUN_054617bc(auStack_178);
      param_2 = local_180;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_051e30c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* Sexy::StructuredData::NumberForPath(char const*, double) const */

undefined1  [16] __thiscall
Sexy::StructuredData::NumberForPath(StructuredData *this,char *param_1,double param_2)

{
  undefined4 uVar1;
  char cVar2;
  Value *this_00;
  undefined1 auVar3 [16];
  
  this_00 = (Value *)ValueForPath(this,param_1);
  if (this_00 != (Value *)0x0) {
    uVar1 = *(undefined4 *)this_00;
    cVar2 = FUN_051e0fcc(uVar1);
    if ((cVar2 != '\0') || (cVar2 = FUN_051e0fdc(uVar1), cVar2 != '\0')) {
      auVar3 = Value::GetNumber(this_00);
      return auVar3;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3;
}


/* Sexy::StructuredData::BooleanForPath(char const*, bool) const */

ulong __thiscall
Sexy::StructuredData::BooleanForPath(StructuredData *this,char *param_1,bool param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_2;
  puVar3 = (undefined4 *)ValueForPath(this,param_1);
  if (puVar3 == (undefined4 *)0x0) {
    return uVar5;
  }
  uVar1 = *puVar3;
  cVar2 = FUN_051e0fe8(uVar1);
  if (cVar2 == '\0') {
    cVar2 = FUN_051e0fdc(uVar1);
    if (cVar2 != '\0') {
      lVar4 = FUN_051e1020(*(undefined8 *)(puVar3 + 4));
      uVar5 = (ulong)(lVar4 != 0);
    }
    return uVar5;
  }
  uVar5 = FUN_051e1024(*(undefined1 *)(puVar3 + 4));
  return uVar5;
}


/* Sexy::StructuredData::ObjectForPath(char const*) const */

undefined4 * __thiscall Sexy::StructuredData::ObjectForPath(StructuredData *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)ValueForPath(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    cVar1 = FUN_051e0ff4(*puVar2);
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)0x0;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


/* Sexy::StructuredData::ArrayForPath(char const*) const */

undefined4 * __thiscall Sexy::StructuredData::ArrayForPath(StructuredData *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)ValueForPath(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    cVar1 = FUN_051e1000(*puVar2);
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)0x0;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


/* Sexy::StructuredData::EndContainer(Sexy::StructuredData::ValueType) */

void Sexy::StructuredData::EndContainer(Buffer *param_1)

{
  char cVar1;
  int iVar2;
  
  std::vector<unsigned_int,std::allocator<unsigned_int>>::back
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(param_1 + 0x58));
  FUN_051e1108(param_1 + 0x60);
  cVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)(param_1 + 0x58));
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x48) == 1) {
      *(undefined4 *)(param_1 + 0x48) = 3;
      iVar2 = Buffer::GetDataLen(param_1);
      *(long *)(param_1 + 0x50) = (long)iVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 2;
    }
  }
  return;
}


/* Sexy::StructuredData::EndObject() */

void __thiscall Sexy::StructuredData::EndObject(StructuredData *this)

{
  EndContainer(this,5);
  return;
}


/* Sexy::StructuredData::EndArray() */

void __thiscall Sexy::StructuredData::EndArray(StructuredData *this)

{
  EndContainer(this,6);
  return;
}


/* Sexy::StructuredData::RebufferString(char const*, char**) const */

char * __thiscall
Sexy::StructuredData::RebufferString(StructuredData *this,char *param_1,char **param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = (char *)Buffer::GetDataPtr((Buffer *)this);
    pcVar3 = *param_2;
    sVar2 = strlen(param_1);
    pcVar1 = std::search<char*,char_const*>(pcVar1,pcVar3,param_1,param_1 + sVar2 + 1);
    if (pcVar1 == pcVar3) {
      pcVar3 = std::copy<char_const*,char*>(param_1,param_1 + sVar2 + 1,pcVar1);
      *param_2 = pcVar3;
    }
  }
  return pcVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::MakeStringsCompact() const */

void __thiscall Sexy::StructuredData::MakeStringsCompact(StructuredData *this)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  char *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined1 *)Buffer::GetDataPtr((Buffer *)this);
  local_20 = puVar4 + 1;
  *puVar4 = 0;
  local_18 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar3) break;
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar6 = RebufferString(this,*(char **)(lVar5 + 8),&local_20);
    *(undefined8 *)(lVar5 + 8) = uVar6;
    puVar7 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar1 = *puVar7;
    cVar2 = FUN_051e0fb4(uVar1);
    if ((cVar2 != '\0') || (cVar2 = FUN_051e0fc0(uVar1), cVar2 != '\0')) {
      uVar6 = RebufferString(this,*(char **)(puVar7 + 4),&local_20);
      *(undefined8 *)(puVar7 + 4) = uVar6;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  *(long *)(this + 0x50) = (long)local_20 - (long)puVar4;
  Buffer::ResizeNonDestructive((Buffer *)this,(long)local_20 - (long)puVar4);
  *(undefined4 *)(this + 0x48) = 3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::StructuredData::Clone(Sexy::StructuredData const&) */

void __thiscall Sexy::StructuredData::Clone(StructuredData *this,StructuredData *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  Buffer::SetData((Buffer *)this,(vector *)(param_1 + 8));
  std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>::operator=
            ((vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<unsigned_int,std::allocator<unsigned_int>>::operator=
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x58),
             (vector *)(param_1 + 0x58));
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x50) = uVar4;
  *(undefined4 *)(this + 0x48) = uVar1;
  pcVar2 = (char *)Buffer::GetDataPtr((Buffer *)param_1);
  pcVar3 = (char *)Buffer::GetDataPtr((Buffer *)this);
  RebaseStringPointers(this,pcVar2,pcVar3);
  return;
}


/* Sexy::StructuredData::StructuredData(Sexy::StructuredData const&) */

void __thiscall Sexy::StructuredData::StructuredData(StructuredData *this,StructuredData *param_1)

{
  Buffer::Buffer((Buffer *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  Clone(this,param_1);
  return;
}


/* Sexy::StructuredData::TEMPNAMEPLACEHOLDERVALUE(Sexy::StructuredData const&) */

StructuredData * __thiscall
Sexy::StructuredData::operator=(StructuredData *this,StructuredData *param_1)

{
  Clone(this,param_1);
  return this;
}


/* Sexy::StructuredData::Reserve(unsigned int) */

void __thiscall Sexy::StructuredData::Reserve(StructuredData *this,uint param_1)

{
  std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>::reserve
            ((vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *)
             (this + 0x30),(ulong)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::AddValue(char const*, Sexy::StructuredData::ValueType) */

void __thiscall
Sexy::StructuredData::AddValue(StructuredData *this,char *param_1,undefined4 param_3)

{
  vector<unsigned_int,std::allocator<unsigned_int>> *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty(this_00);
  if (cVar1 == '\0') {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      lVar3 = FUN_051e10b4(*(undefined8 *)(this + 0x30),*puVar4);
      *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
    }
    puVar4 = (undefined4 *)std::vector<unsigned_int,std::allocator<unsigned_int>>::back(this_00);
    lVar3 = FUN_051e10b4(*(undefined8 *)(this + 0x30),*puVar4);
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  }
  lVar3 = FUN_051e10bc(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>::resize
            ((vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *)
             (this + 0x30),lVar3 + 1);
  puVar4 = (undefined4 *)
           std::vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>::
           back((vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>> *)
                (this + 0x30));
  uVar5 = InternalizeString(this,param_1);
  *puVar4 = param_3;
  *(undefined8 *)(puVar4 + 2) = uVar5;
  *(undefined8 *)(puVar4 + 6) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* Sexy::StructuredData::AddNull(char const*) */

void __thiscall Sexy::StructuredData::AddNull(StructuredData *this,char *param_1)

{
  AddValue(this,param_1,0);
  return;
}


/* Sexy::StructuredData::AddString(char const*, char const*) */

void __thiscall Sexy::StructuredData::AddString(StructuredData *this,char *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = AddValue(this,param_1,1);
  uVar2 = InternalizeString(this,param_2);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  return;
}


/* Sexy::StructuredData::AddJSON(char const*, char const*) */

void __thiscall Sexy::StructuredData::AddJSON(StructuredData *this,char *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = AddValue(this,param_1,7);
  uVar2 = InternalizeString(this,param_2);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  return;
}


/* Sexy::StructuredData::AddNumber(char const*, double) */

void __thiscall Sexy::StructuredData::AddNumber(StructuredData *this,char *param_1,double param_2)

{
  long lVar1;
  
  lVar1 = AddValue(this,param_1,2);
  *(double *)(lVar1 + 0x10) = param_2;
  return;
}


/* Sexy::StructuredData::AddInteger(char const*, long) */

void __thiscall Sexy::StructuredData::AddInteger(StructuredData *this,char *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = AddValue(this,param_1,3);
  *(long *)(lVar1 + 0x10) = param_2;
  return;
}


/* Sexy::StructuredData::AddBoolean(char const*, bool) */

void __thiscall Sexy::StructuredData::AddBoolean(StructuredData *this,char *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = AddValue(this,param_1,4);
  *(bool *)(lVar1 + 0x10) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::ReadFromBuffer(Sexy::Buffer const*) */

void __thiscall Sexy::StructuredData::ReadFromBuffer(StructuredData *this,Buffer *param_1)

{
  vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *this_00;
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  Value *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Clear(this);
  *(undefined4 *)(this + 0x48) = 3;
  iVar2 = Buffer::ReadInt32(param_1);
  if ((iVar2 == 0x50435344) && (iVar2 = Buffer::ReadInt32(param_1), iVar2 < 4)) {
    this_00 = (vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *)
              (this + 0x30);
    Buffer::ReadBuffer(param_1,(Buffer *)this);
    pcVar6 = (char *)Buffer::GetDataPtr((Buffer *)this);
    uVar3 = Buffer::GetDataLen((Buffer *)this);
    iVar4 = Buffer::ReadInt32(param_1);
    std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>::resize
              (this_00,(long)iVar4);
    local_18 = 0;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      this_01 = (Value *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Value::ReadFromBuffer(this_01,param_1,pcVar6,uVar3,iVar2);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
    }
    uVar5 = 1;
    *(ulong *)(this + 0x50) = (ulong)uVar3;
  }
  else {
    uVar5 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::ReplaceChild(Sexy::StructuredData::Value const*&,
   Sexy::StructuredData::Value*, Sexy::StructuredData::Value*, Sexy::StructuredData::Value const*,
   Sexy::StructuredData::Value const*) */

void __thiscall
Sexy::StructuredData::ReplaceChild
          (StructuredData *this,Value **param_1,Value *param_2,Value *param_3,Value *param_4,
          Value *param_5)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  Value *pVVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  lVar4 = IndexOfValue(this,*param_1);
  lVar5 = IndexOfValue(this,param_2);
  lVar6 = IndexOfValue(this,param_3);
  lVar15 = (long)param_3 - (long)param_2 >> 5;
  lVar14 = (long)param_5 - (long)param_4 >> 5;
  local_58 = lVar15;
  local_50 = lVar14;
  plVar7 = std::min<long>(&local_58,&local_50);
  lVar12 = *plVar7;
  local_48 = 0;
  local_40 = 0;
  local_28[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
  local_48 = __gnu_cxx::
             __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
             ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                          *)local_28,lVar5);
  local_38 = __gnu_cxx::
             __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
             ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                          *)&local_48,lVar12);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_30,(__normal_iterator *)&local_38);
  Value::Value((Value *)local_28);
  std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>::insert
            ((vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *)
             this_00,local_30,lVar14 - lVar12,
             (__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
              *)local_28);
  local_28[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
  local_48 = __gnu_cxx::
             __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
             ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                          *)local_28,lVar5);
  local_28[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
  local_40 = __gnu_cxx::
             __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
             ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                          *)local_28,lVar6);
  local_38 = __gnu_cxx::
             __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
             ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                          *)&local_48,lVar12);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_30,(__normal_iterator *)&local_38);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_28,(__normal_iterator *)&local_40);
  std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>::erase
            ((vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>> *)
             this_00,local_30,local_28[0]);
  local_28[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
  local_48 = __gnu_cxx::
             __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
             ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                          *)local_28,lVar5);
  local_40 = __gnu_cxx::
             __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
             ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                          *)&local_48,lVar14);
  local_28[0] = local_48;
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_28,(__normal_iterator *)&local_40);
    if (!bVar2) break;
    puVar8 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
    *puVar8 = *(undefined4 *)param_4;
    lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
    pcVar9 = (char *)FUN_051e0f9c(*(undefined8 *)(param_4 + 8));
    uVar10 = InternalizeString(this,pcVar9);
    *(undefined8 *)(lVar6 + 8) = uVar10;
    lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
    *(undefined8 *)(lVar6 + 0x18) = 0;
    puVar8 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
    cVar3 = FUN_051e0fb4(*puVar8);
    if (cVar3 == '\0') {
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(param_4 + 0x10);
    }
    else {
      pcVar9 = (char *)FUN_051e1028(*(undefined8 *)(param_4 + 0x10));
      uVar10 = InternalizeString(this,pcVar9);
      *(undefined8 *)(puVar8 + 4) = uVar10;
    }
    param_4 = param_4 + 0x20;
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)local_28);
  }
  uVar10 = *(undefined8 *)(this + 0x30);
  uVar13 = 0;
  lVar6 = FUN_051e10b4(uVar10,lVar4);
  iVar1 = *(int *)(lVar6 + 0x10);
  if (lVar14 != 0) {
    iVar1 = iVar1 + 1;
  }
  *(uint *)(lVar6 + 0x10) = iVar1 - (uint)(lVar15 != 0);
  if (-1 < lVar4) {
    do {
      pVVar11 = (Value *)FUN_051e10b4(uVar10);
      cVar3 = Value::IsContainer(pVVar11);
      if ((cVar3 != '\0') && (lVar4 < (long)(ulong)(uint)(*(int *)(pVVar11 + 0x14) + (int)uVar13)))
      {
        *(int *)(pVVar11 + 0x14) = ((int)lVar14 + *(int *)(pVVar11 + 0x14)) - (int)lVar15;
      }
      uVar13 = (ulong)((int)uVar13 + 1);
    } while ((long)uVar13 <= lVar4);
  }
  pVVar11 = (Value *)ValueAtIndex(this,lVar4);
  *param_1 = pVVar11;
  ValueAtIndex(this,lVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::StructuredData::EraseValue(Sexy::StructuredData::Value const*&, char const*) */

void __thiscall Sexy::StructuredData::EraseValue(StructuredData *this,Value **param_1,char *param_2)

{
  Value *this_00;
  long lVar1;
  Value *pVVar2;
  ulong uVar3;
  
  this_00 = (Value *)Value::ValueForName(*param_1,param_2);
  if (this_00 != (Value *)0x0) {
    lVar1 = IndexOfValue(this,this_00);
    pVVar2 = (Value *)ValueAtIndex(this,lVar1);
    uVar3 = Value::Size(this_00);
    ReplaceChild(this,param_1,pVVar2,pVVar2 + (uVar3 & 0xffffffff) * 0x20,(Value *)0x0,(Value *)0x0)
    ;
    return;
  }
  return;
}


/* Sexy::StructuredData::ReplaceValue(Sexy::StructuredData::Value const*&, char const*,
   Sexy::StructuredData::Value const*) */

long __thiscall
Sexy::StructuredData::ReplaceValue
          (StructuredData *this,Value **param_1,char *param_2,Value *param_3)

{
  ulong uVar1;
  Value *pVVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  Value *pVVar6;
  
  uVar1 = Value::Size(param_3);
  pVVar2 = (Value *)Value::ValueForName(*param_1,param_2);
  if (pVVar2 == (Value *)0x0) {
    pVVar2 = *param_1;
    lVar4 = IndexOfValue(this,pVVar2);
    uVar3 = Value::Size(pVVar2);
    pVVar2 = (Value *)ValueAtIndex(this,lVar4 + (uVar3 & 0xffffffff));
    pVVar6 = pVVar2;
  }
  else {
    uVar3 = Value::Size(pVVar2);
    pVVar6 = pVVar2 + (uVar3 & 0xffffffff) * 0x20;
  }
  lVar4 = ReplaceChild(this,param_1,pVVar2,pVVar6,param_3,param_3 + (uVar1 & 0xffffffff) * 0x20);
  uVar5 = InternalizeString(this,param_2);
  *(undefined8 *)(lVar4 + 8) = uVar5;
  return lVar4;
}


/* Sexy::StructuredData::SetValue(Sexy::StructuredData::Value const*&, char const*,
   Sexy::StructuredData::Value const*) */

long __thiscall
Sexy::StructuredData::SetValue(StructuredData *this,Value **param_1,char *param_2,Value *param_3)

{
  ulong uVar1;
  Value *pVVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  Value *pVVar6;
  
  uVar1 = Value::Size(param_3);
  pVVar2 = (Value *)Value::ValueForName(*param_1,param_2);
  if (pVVar2 == (Value *)0x0) {
    pVVar2 = *param_1;
    lVar4 = IndexOfValue(this,pVVar2);
    uVar3 = Value::Size(pVVar2);
    pVVar2 = (Value *)ValueAtIndex(this,lVar4 + (uVar3 & 0xffffffff));
    pVVar6 = pVVar2;
  }
  else {
    uVar3 = Value::Size(pVVar2);
    pVVar6 = pVVar2 + (uVar3 & 0xffffffff) * 0x20;
  }
  lVar4 = ReplaceChild(this,param_1,pVVar2,pVVar6,param_3,param_3 + (uVar1 & 0xffffffff) * 0x20);
  uVar5 = InternalizeString(this,param_2);
  *(undefined8 *)(lVar4 + 8) = uVar5;
  return lVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::SetPrimitive(Sexy::StructuredData::Value const*&, char const*,
   Sexy::StructuredData::ValueType) */

void __thiscall
Sexy::StructuredData::SetPrimitive
          (StructuredData *this,Value **param_1,char *param_2,undefined4 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  Value aVStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Value::Value(aVStack_28);
  puVar2 = (undefined4 *)ReplaceValue(this,param_1,param_2,aVStack_28);
  lVar1 = ___stack_chk_guard;
  *puVar2 = param_4;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::StructuredData::SetNull(Sexy::StructuredData::Value const*&, char const*) */

void Sexy::StructuredData::SetNull(Value **param_1,char *param_2)

{
  SetPrimitive();
  return;
}


/* Sexy::StructuredData::SetString(Sexy::StructuredData::Value const*&, char const*, char const*) */

void __thiscall
Sexy::StructuredData::SetString(StructuredData *this,Value **param_1,char *param_2,char *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = SetPrimitive();
  uVar2 = InternalizeString(this,param_3);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  return;
}


/* Sexy::StructuredData::SetNumber(Sexy::StructuredData::Value const*&, char const*, double) */

void Sexy::StructuredData::SetNumber(Value **param_1,char *param_2,double param_3)

{
  long lVar1;
  
  lVar1 = SetPrimitive();
  *(double *)(lVar1 + 0x10) = param_3;
  return;
}


/* Sexy::StructuredData::SetInteger(Sexy::StructuredData::Value const*&, char const*, long) */

void Sexy::StructuredData::SetInteger(Value **param_1,char *param_2,long param_3)

{
  long lVar1;
  undefined8 in_x3;
  
  lVar1 = SetPrimitive();
  *(undefined8 *)(lVar1 + 0x10) = in_x3;
  return;
}


/* Sexy::StructuredData::SetBoolean(Sexy::StructuredData::Value const*&, char const*, bool) */

void Sexy::StructuredData::SetBoolean(Value **param_1,char *param_2,bool param_3)

{
  long lVar1;
  undefined1 in_w3;
  
  lVar1 = SetPrimitive((StructuredData *)param_1,param_2,param_3,4);
  *(undefined1 *)(lVar1 + 0x10) = in_w3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::BeginContainer(char const*, Sexy::StructuredData::ValueType) */

void __thiscall
Sexy::StructuredData::BeginContainer(StructuredData *this,undefined8 param_1,undefined8 param_3)

{
  long lVar1;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = FUN_051e10bc(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  lVar1 = AddValue(this,param_1,param_3);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x14) = 1;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x58),&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::StructuredData::AddValue(char const*, Sexy::StructuredData::Value const*) */

void __thiscall Sexy::StructuredData::AddValue(StructuredData *this,char *param_1,Value *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  Value *this_00;
  char *pcVar3;
  Value *pVVar4;
  long lVar5;
  double dVar6;
  
  uVar2 = FUN_051e0fa0(*(undefined4 *)param_2);
  switch(uVar2) {
  case 0:
    AddNull(this,param_1);
    return;
  case 1:
    pcVar3 = (char *)FUN_051e1028(*(undefined8 *)(param_2 + 0x10));
    AddString(this,param_1,pcVar3);
    return;
  case 2:
    dVar6 = (double)Value::GetNumber(param_2);
    AddNumber(this,param_1,dVar6);
    return;
  case 3:
    lVar5 = FUN_051e1020(*(undefined8 *)(param_2 + 0x10));
    AddInteger(this,param_1,lVar5);
    return;
  case 4:
    bVar1 = (bool)FUN_051e1024(param_2[0x10]);
    AddBoolean(this,param_1,bVar1);
    return;
  case 5:
  case 6:
    BeginContainer(this,param_1,uVar2);
    break;
  default:
    return;
  }
  for (this_00 = (Value *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)param_2); pVVar4 = (Value *)Value::ChildrenEnd(param_2),
      this_00 != pVVar4; this_00 = (Value *)Value::Next(this_00)) {
    pcVar3 = (char *)FUN_051e0f9c(*(undefined8 *)(this_00 + 8));
    AddValue(this,pcVar3,this_00);
  }
  uVar2 = FUN_051e0fa0(*(undefined4 *)param_2);
  EndContainer(this,uVar2);
  return;
}


/* Sexy::StructuredData::BeginObject(char const*) */

void __thiscall Sexy::StructuredData::BeginObject(StructuredData *this,char *param_1)

{
  BeginContainer(this,param_1,5);
  return;
}


/* Sexy::StructuredData::BeginArray(char const*) */

void __thiscall Sexy::StructuredData::BeginArray(StructuredData *this,char *param_1)

{
  BeginContainer(this,param_1,6);
  return;
}


/* Sexy::StructuredData::BeginArray() */

void __thiscall Sexy::StructuredData::BeginArray(StructuredData *this)

{
  BeginArray(this,noName);
  return;
}


/* Sexy::StructuredData::StructuredData(Sexy::StructuredData::InitializationMode) */

void __thiscall Sexy::StructuredData::StructuredData(StructuredData *this,int param_2)

{
  Buffer::Buffer((Buffer *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  Clear(this);
  if (param_2 == 1) {
    BeginObject(this);
    EndObject(this);
    return;
  }
  if (param_2 != 2) {
    return;
  }
  BeginArray(this);
  EndArray(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::Pop() */

void __thiscall Sexy::StructuredData::Pop(StructuredData *this)

{
  uint uVar1;
  vector<unsigned_int,std::allocator<unsigned_int>> *this_00;
  char cVar2;
  uint uVar3;
  long lVar4;
  Value *this_01;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x58);
  FUN_051e1118(this + 0x38);
  uVar3 = FUN_051e10bc(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  cVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty(this_00);
  if ((cVar2 == '\0') &&
     (puVar5 = (uint *)std::vector<unsigned_int,std::allocator<unsigned_int>>::back(this_00),
     *puVar5 == uVar3)) {
    FUN_051e1108(this + 0x60);
  }
  local_c = 0;
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      uVar1 = local_c;
      uVar6 = *(undefined8 *)(this + 0x30);
      this_01 = (Value *)FUN_051e10b4(uVar6,local_c);
      cVar2 = Value::IsContainer(this_01);
      if ((cVar2 != '\0') && (uVar3 < uVar1 + *(int *)(this_01 + 0x14))) {
        *(int *)(this_01 + 0x14) = *(int *)(this_01 + 0x14) + -1;
        cVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty(this_00);
        uVar7 = uVar1;
        if ((cVar2 == '\0') &&
           (puVar5 = (uint *)std::vector<unsigned_int,std::allocator<unsigned_int>>::back(this_00),
           local_c <= *puVar5)) {
          uVar6 = *(undefined8 *)(this + 0x30);
        }
        else {
          std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back(this_00,&local_c);
          uVar6 = *(undefined8 *)(this + 0x30);
        }
      }
      uVar1 = local_c + 1;
      lVar4 = FUN_051e10b4(uVar6,uVar7);
      *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
      local_c = uVar1;
    } while (uVar1 < uVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::StructuredData::Rewind(unsigned int) */

void __thiscall Sexy::StructuredData::Rewind(StructuredData *this,uint param_1)

{
  ulong uVar1;
  
  while (uVar1 = FUN_051e10bc(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38)),
        param_1 < uVar1) {
    Pop(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::IntegrateStringsAppendix() const */

void __thiscall Sexy::StructuredData::IntegrateStringsAppendix(StructuredData *this)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uchar *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 local_48;
  undefined8 local_40;
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = Buffer::GetDataLen((Buffer *)this);
  if ((int)*(undefined8 *)(this + 0x50) < iVar4) {
    Buffer::Buffer(aBStack_38);
    puVar5 = (uchar *)Buffer::GetDataPtr((Buffer *)this);
    iVar4 = Buffer::GetDataLen((Buffer *)this);
    Buffer::SetData(aBStack_38,puVar5,iVar4);
    uVar6 = Buffer::GetDataPtr(aBStack_38);
    uVar7 = Buffer::GetDataPtr((Buffer *)this);
    Buffer::Clear((Buffer *)this);
    local_48 = 0;
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x30));
    while( true ) {
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x30));
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
      if (!bVar3) break;
      lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      pcVar9 = (char *)FUN_051e0f8c(*(undefined8 *)(lVar8 + 8),uVar7,uVar6);
      uVar10 = EmbufferString(this,pcVar9);
      *(undefined8 *)(lVar8 + 8) = uVar10;
      puVar11 = (undefined4 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      uVar1 = *puVar11;
      cVar2 = FUN_051e0fb4(uVar1);
      if ((cVar2 != '\0') || (cVar2 = FUN_051e0fc0(uVar1), cVar2 != '\0')) {
        pcVar9 = (char *)FUN_051e0f8c(*(undefined8 *)(puVar11 + 4),uVar7,uVar6);
        uVar10 = EmbufferString(this,pcVar9);
        *(undefined8 *)(puVar11 + 4) = uVar10;
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_48);
    }
    iVar4 = Buffer::GetDataLen((Buffer *)this);
    *(long *)(this + 0x50) = (long)iVar4;
    Buffer::~Buffer(aBStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredData::WriteToBuffer(Sexy::Buffer*) const */

void __thiscall Sexy::StructuredData::WriteToBuffer(StructuredData *this,Buffer *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Value *this_00;
  char *pcVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sparse(this);
  if (cVar1 == '\0') {
    IntegrateStringsAppendix(this);
    iVar3 = *(int *)(this + 0x48);
  }
  else {
    MakeStringsCompact(this);
    IntegrateStringsAppendix(this);
    iVar3 = *(int *)(this + 0x48);
  }
  if (iVar3 == 3) {
    pcVar4 = (char *)Buffer::GetDataPtr((Buffer *)this);
  }
  else {
    pcVar4 = (char *)0x0;
  }
  Buffer::WriteInt32(param_1,0x50435344);
  Buffer::WriteInt32(param_1,3);
  Buffer::WriteBuffer(param_1,(Buffer *)this);
  iVar3 = FUN_051e10bc(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  Buffer::WriteInt32(param_1,iVar3);
  local_18 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    this_00 = (Value *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Value::WriteToBuffer(this_00,param_1,pcVar4);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

