// Class: DFileHandler


/* DFileHandler::setSercetType(int) */

void __thiscall DFileHandler::setSercetType(DFileHandler *this,int param_1)

{
  *(int *)(this + 0xc) = param_1;
  return;
}


/* DFileHandler::DFileHandler() */

void __thiscall DFileHandler::DFileHandler(DFileHandler *this)

{
  this[8] = (DFileHandler)0x0;
  *(undefined **)this = &DAT_06a23ed0;
  this[9] = (DFileHandler)0x0;
  this[10] = (DFileHandler)0x1;
  this[0xb] = (DFileHandler)0x0;
  *(undefined4 *)(this + 0xc) = 1;
  Set8BytesTo0(this + 0x10);
  return;
}


/* DFileHandler::~DFileHandler() */

void __thiscall DFileHandler::~DFileHandler(DFileHandler *this)

{
  *(undefined **)this = &DAT_06a23ed0;
  std::string::~string((string *)(this + 0x10));
  return;
}


/* DFileHandler::~DFileHandler() */

void __thiscall DFileHandler::~DFileHandler(DFileHandler *this)

{
  ~DFileHandler(this);
  AK::FreeHook(this);
  return;
}


/* DFileHandler::removeAllItems() */

void __thiscall DFileHandler::removeAllItems(DFileHandler *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x10))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x18))(this);
    this[8] = (DFileHandler)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DFileHandler::copyToFile(std::string const&) */

void __thiscall DFileHandler::copyToFile(DFileHandler *this,string *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  uchar *puVar4;
  void *pvVar5;
  ulong uVar6;
  DWriteFile aDStack_40 [24];
  DOutputStream aDStack_28 [8];
  undefined8 local_20;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DOutputStream::DOutputStream(aDStack_28,false);
  if (this[0xb] == (DFileHandler)0x0) {
    if (this[10] == (DFileHandler)0x0) {
      cVar1 = DInputStream::readFromFile((DInputStream *)aDStack_28,(string *)(this + 0x10));
    }
    else {
      cVar1 = DInputStream::readFromWritabelPathFile
                        ((DInputStream *)aDStack_28,(string *)(this + 0x10));
    }
  }
  else {
    puVar4 = (uchar *)FUN_0547429c(this + 0x10);
    uVar6 = FUN_05474178(this + 0x10);
    cVar1 = DInputStream::readFromBuffer((DInputStream *)aDStack_28,puVar4,uVar6);
  }
  cVar2 = '\0';
  if (cVar1 != '\0') {
    DWriteFile::DWriteFile(aDStack_40);
    pcVar3 = (char *)FUN_0547429c(param_1);
    cVar2 = DWriteFile::init(aDStack_40,pcVar3,false,true);
    if (cVar2 == '\0') {
      DWriteFile::~DWriteFile(aDStack_40);
    }
    else {
      pvVar5 = (void *)FUN_04f87850(local_20);
      uVar6 = FUN_04f8784c(local_10);
      DWriteFile::writeBytes(aDStack_40,pvVar5,uVar6);
      DWriteFile::~DWriteFile(aDStack_40);
    }
  }
  DOutputStream::~DOutputStream(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DFileHandler::read() */

void __thiscall DFileHandler::read(DFileHandler *this)

{
  char cVar1;
  ulong uVar2;
  uchar *puVar3;
  DStackAllocator *pDVar4;
  uchar *puVar5;
  int iVar6;
  DOutputStream aDStack_28 [24];
  undefined8 local_10;
  long local_8;
  undefined8 uVar7;
  
  local_8 = ___stack_chk_guard;
  DOutputStream::DOutputStream(aDStack_28,false);
  if (this[0xb] == (DFileHandler)0x0) {
    if (this[10] == (DFileHandler)0x0) {
      cVar1 = DInputStream::readFromFile((DInputStream *)aDStack_28,(string *)(this + 0x10));
    }
    else {
      cVar1 = DInputStream::readFromWritabelPathFile
                        ((DInputStream *)aDStack_28,(string *)(this + 0x10));
    }
  }
  else {
    puVar3 = (uchar *)FUN_0547429c(this + 0x10);
    uVar2 = FUN_05474178(this + 0x10);
    cVar1 = DInputStream::readFromBuffer((DInputStream *)aDStack_28,puVar3,uVar2);
  }
  uVar7 = 0;
  iVar6 = 0;
  if ((cVar1 != '\0') && (uVar2 = FUN_04f8784c(local_10), uVar2 != 0)) {
    pDVar4 = (DStackAllocator *)DStackAllocator::getInstance();
    puVar5 = (uchar *)DStackAllocator::push(pDVar4,uVar2 + 2);
    DInputStream::readBuffer((DInputStream *)aDStack_28,puVar5,uVar2);
    puVar3 = puVar5;
    if ((*puVar5 == 'L') && (((puVar5[1] == 'o' && (puVar5[2] == 'c')) && (puVar5[3] == 'k')))) {
      if (puVar5[5] == '$') {
        if (puVar5[4] == '0') {
          *(undefined4 *)(this + 0xc) = 0;
          iVar6 = 6;
        }
        else {
          iVar6 = 6;
          *(undefined4 *)(this + 0xc) = 1;
        }
      }
      else if (puVar5[4] == '$') {
        *(undefined4 *)(this + 0xc) = 0;
        iVar6 = 5;
      }
      puVar3 = puVar5 + iVar6;
      unsercet(puVar3,uVar2 - (long)iVar6,*(int *)(this + 0xc));
    }
    puVar5[uVar2] = '\n';
    uVar7 = 1;
    puVar5[uVar2 + 1] = '\0';
    (**(code **)(*(long *)this + 0x20))(this,puVar3);
    pDVar4 = (DStackAllocator *)DStackAllocator::getInstance();
    DStackAllocator::pop(pDVar4);
  }
  DOutputStream::~DOutputStream(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* DFileHandler::reload() */

void __thiscall DFileHandler::reload(DFileHandler *this)

{
  this[8] = (DFileHandler)0x0;
  (**(code **)(*(long *)this + 0x18))();
  read(this);
  return;
}


/* DFileHandler::initWithString(std::string const&, bool) */

void __thiscall DFileHandler::initWithString(DFileHandler *this,string *param_1,bool param_2)

{
  thunk_FUN_05475e00(this + 0x10);
  this[9] = (DFileHandler)param_2;
  this[10] = (DFileHandler)0x0;
  this[0xb] = (DFileHandler)0x1;
  reload(this);
  return;
}


/* DFileHandler::initWithFile(std::string const&, bool) */

void __thiscall DFileHandler::initWithFile(DFileHandler *this,string *param_1,bool param_2)

{
  thunk_FUN_05475e00(this + 0x10);
  this[9] = (DFileHandler)param_2;
  this[10] = (DFileHandler)0x0;
  this[0xb] = (DFileHandler)0x0;
  reload(this);
  return;
}


/* DFileHandler::initWithWritablePath(std::string const&, bool) */

void __thiscall DFileHandler::initWithWritablePath(DFileHandler *this,string *param_1,bool param_2)

{
  thunk_FUN_05475e00(this + 0x10);
  this[9] = (DFileHandler)param_2;
  this[10] = (DFileHandler)0x1;
  this[0xb] = (DFileHandler)0x0;
  reload(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DFileHandler::writeToFile(std::string const&, bool, bool) */

void __thiscall
DFileHandler::writeToFile(DFileHandler *this,string *param_1,bool param_2,bool param_3)

{
  DFileHandler DVar1;
  char cVar2;
  char *pcVar3;
  uchar *puVar4;
  ulong uVar5;
  void *pvVar6;
  DString aDStack_50 [16];
  DWriteFile aDStack_40 [24];
  DStreamBuffer aDStack_28 [8];
  undefined8 local_20;
  undefined8 local_10;
  long local_8;
  
  DVar1 = this[8];
  local_8 = ___stack_chk_guard;
  if (((byte)DVar1 | param_3) != 0) {
    DWriteFile::DWriteFile(aDStack_40);
    pcVar3 = (char *)FUN_0547429c(param_1);
    cVar2 = DWriteFile::init(aDStack_40,pcVar3,false,param_3);
    if (cVar2 != '\0') {
      DStreamBuffer::DStreamBuffer(aDStack_28,0x400);
      thunk_FUN_05475e00(this + 0x10,param_1);
      this[0xb] = (DFileHandler)0x0;
      this[8] = (DFileHandler)0x0;
      this[10] = (DFileHandler)0x1;
      this[9] = (DFileHandler)param_2;
      if (param_2) {
        DString::DString(aDStack_50);
        DString::format((char *)aDStack_50,"Lock%d$",(ulong)*(uint *)(this + 0xc));
        pvVar6 = (void *)DString::c_str(aDStack_50);
        uVar5 = DString::size(aDStack_50);
        DWriteFile::writeBytes(aDStack_40,pvVar6,uVar5);
        DString::~DString(aDStack_50);
      }
      (**(code **)(*(long *)this + 0x28))(this,aDStack_28);
      puVar4 = (uchar *)FUN_04f87854(local_20);
      uVar5 = FUN_04f87858(local_10);
      if (this[9] != (DFileHandler)0x0) {
        if (*(int *)(this + 0xc) == 0) {
          uVar5 = uVar5 + 0xf & 0xfffffffffffffff0;
        }
        sercet(puVar4,uVar5,*(int *)(this + 0xc));
      }
      DWriteFile::writeBytes(aDStack_40,puVar4,uVar5);
      DStreamBuffer::~DStreamBuffer(aDStack_28);
    }
    DWriteFile::~DWriteFile(aDStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((byte)DVar1 | param_3);
}


/* DFileHandler::write() */

undefined8 __thiscall DFileHandler::write(DFileHandler *this)

{
  undefined8 uVar1;
  
  if (this[10] == (DFileHandler)0x0) {
    return 0;
  }
  uVar1 = writeToFile(this,(string *)(this + 0x10),(bool)this[9],false);
  return uVar1;
}


/* DFileHandler::close() */

void __thiscall DFileHandler::close(DFileHandler *this)

{
  write(this);
  (**(code **)(*(long *)this + 0x18))(this);
  return;
}


/* DFileHandler::flush() */

undefined8 __thiscall DFileHandler::flush(DFileHandler *this)

{
  undefined8 uVar1;
  
  if (this[10] == (DFileHandler)0x0) {
    return 0;
  }
  uVar1 = writeToFile(this,(string *)(this + 0x10),(bool)this[9],false);
  return uVar1;
}

