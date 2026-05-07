// Class: GachaDetailCacheMgr


/* GachaDetailCacheMgr::isNew(int) */

bool __thiscall GachaDetailCacheMgr::isNew(GachaDetailCacheMgr *this,int param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  switch(param_1) {
  case 0:
    lVar2 = FUN_03d89538(*(undefined8 *)(this + 0xd0),*(undefined8 *)(this + 0xd8));
    bVar1 = true;
    if (lVar2 == 0) {
      lVar2 = FUN_03d89538(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
      return lVar2 != 0;
    }
    break;
  case 1:
    lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
    bVar1 = true;
    if (lVar2 == 0) {
      lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x120));
      bVar1 = lVar2 != 0;
    }
    break;
  case 2:
    lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
    bVar1 = true;
    if (lVar2 == 0) {
      lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x150));
      return lVar2 != 0;
    }
    break;
  case 3:
    lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
    bVar1 = true;
    if (lVar2 == 0) {
      lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x180));
      return lVar2 != 0;
    }
  }
  return bVar1;
}


/* GachaDetailCacheMgr::isTimeLimited(int) */

bool __thiscall GachaDetailCacheMgr::isTimeLimited(GachaDetailCacheMgr *this,int param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  switch(param_1) {
  case 0:
    lVar2 = FUN_03d89538(*(undefined8 *)(this + 400),*(undefined8 *)(this + 0x198));
    bVar1 = true;
    if (lVar2 == 0) {
      lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
      return lVar2 != 0;
    }
    break;
  case 1:
    lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x1c0),*(undefined8 *)(this + 0x1c8));
    bVar1 = true;
    if (lVar2 == 0) {
      lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x1d8),*(undefined8 *)(this + 0x1e0));
      bVar1 = lVar2 != 0;
    }
    break;
  case 2:
    lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x1f0),*(undefined8 *)(this + 0x1f8));
    bVar1 = true;
    if (lVar2 == 0) {
      lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x208),*(undefined8 *)(this + 0x210));
      return lVar2 != 0;
    }
    break;
  case 3:
    lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x220),*(undefined8 *)(this + 0x228));
    bVar1 = true;
    if (lVar2 == 0) {
      lVar2 = FUN_03d89538(*(undefined8 *)(this + 0x238),*(undefined8 *)(this + 0x240));
      return lVar2 != 0;
    }
  }
  return bVar1;
}


/* GachaDetailCacheMgr::getTimeLimitedId(int, bool) */

undefined4 __thiscall
GachaDetailCacheMgr::getTimeLimitedId(GachaDetailCacheMgr *this,int param_1,bool param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  switch(param_1) {
  case 0:
    if (!param_2) {
      cVar1 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)(this + 0x1a8));
      if (cVar1 != '\0') {
        return 0;
      }
      puVar3 = (undefined4 *)FUN_03d89544(*(undefined8 *)(this + 0x1a8),0);
      return *puVar3;
    }
    cVar1 = std::vector<int,std::allocator<int>>::empty
                      ((vector<int,std::allocator<int>> *)(this + 400));
    if (cVar1 != '\0') {
      return 0;
    }
    puVar3 = (undefined4 *)FUN_03d89544(*(undefined8 *)(this + 400),0);
    return *puVar3;
  case 1:
    if (!param_2) {
      cVar1 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)(this + 0x1d8));
      if (cVar1 != '\0') {
        return 0;
      }
      puVar3 = (undefined4 *)FUN_03d89544(*(undefined8 *)(this + 0x1d8),0);
      return *puVar3;
    }
    cVar1 = std::vector<int,std::allocator<int>>::empty
                      ((vector<int,std::allocator<int>> *)(this + 0x1c0));
    if (cVar1 != '\0') {
      return 0;
    }
    puVar3 = (undefined4 *)FUN_03d89544(*(undefined8 *)(this + 0x1c0),0);
    return *puVar3;
  case 2:
    if (!param_2) {
      cVar1 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)(this + 0x208));
      if (cVar1 == '\0') {
        puVar3 = (undefined4 *)FUN_03d89544(*(undefined8 *)(this + 0x208),0);
        return *puVar3;
      }
LAB_03d8d01c:
      cVar1 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)(this + 0x238));
      if (cVar1 == '\0') {
        puVar3 = (undefined4 *)FUN_03d89544(*(undefined8 *)(this + 0x238),0);
        return *puVar3;
      }
      return 0;
    }
    cVar1 = std::vector<int,std::allocator<int>>::empty
                      ((vector<int,std::allocator<int>> *)(this + 0x1f0));
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)FUN_03d89544(*(undefined8 *)(this + 0x1f0),0);
      return *puVar3;
    }
    break;
  case 3:
    if (!param_2) goto LAB_03d8d01c;
    break;
  default:
    goto switchD_03d8cf84_default;
  }
  cVar1 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(this + 0x220));
  if (cVar1 != '\0') {
    return 0;
  }
  puVar3 = (undefined4 *)FUN_03d89544(*(undefined8 *)(this + 0x220),0);
  uVar2 = *puVar3;
switchD_03d8cf84_default:
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaDetailCacheMgr::requestGetGachaDetail() */

void __thiscall GachaDetailCacheMgr::requestGetGachaDetail(GachaDetailCacheMgr *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_60,"v");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_60);
  thunk_FUN_05475e00(uVar1,this + 8);
  std::string::~string(asStack_60);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V333");
  FUN_03d8ae40(afStack_58,this);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0
            );
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaDetailCacheMgr::loadNativeInfos() */

void __thiscall GachaDetailCacheMgr::loadNativeInfos(GachaDetailCacheMgr *this)

{
  char cVar1;
  GachaDetailCacheMgr *local_60;
  string asStack_58 [8];
  DIniFile aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_60 = this;
  DIniFile::DIniFile(aDStack_50);
  std::string::string(asStack_58,"GachaDetialInfos.ini");
  cVar1 = DFileHandler::initWithWritablePath((DFileHandler *)aDStack_50,asStack_58,false);
  std::string::~string(asStack_58);
  nop();
  if (cVar1 == '\0') {
    *this = (GachaDetailCacheMgr)0x0;
  }
  else {
    FUN_03d8fab8(&local_60,aDStack_50);
    *this = (GachaDetailCacheMgr)0x1;
  }
  DIniFile::~DIniFile(aDStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaDetailCacheMgr::GachaDetailCacheMgr() */

void __thiscall GachaDetailCacheMgr::GachaDetailCacheMgr(GachaDetailCacheMgr *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *this = (GachaDetailCacheMgr)0x0;
  std::string::string((string *)(this + 8),"20130101");
  nop();
  S2C_PlayerGetGachaGroupInfo::S2C_PlayerGetGachaGroupInfo
            ((S2C_PlayerGetGachaGroupInfo *)(this + 0x10));
  S2C_PlayerGetGachaGroupInfo::S2C_PlayerGetGachaGroupInfo
            ((S2C_PlayerGetGachaGroupInfo *)(this + 0xd0));
  S2C_PlayerGetGachaGroupInfo::S2C_PlayerGetGachaGroupInfo
            ((S2C_PlayerGetGachaGroupInfo *)(this + 400));
  loadNativeInfos(this);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaDetailCacheMgr::saveGachaDetail() */

void __thiscall GachaDetailCacheMgr::saveGachaDetail(GachaDetailCacheMgr *this)

{
  char *pcVar1;
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  DIniFile aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DIniFile::DIniFile(aDStack_50);
  std::string::string(asStack_68,"GachaDetial");
  std::string::string(asStack_60,"version");
  DIniFile::setItem(aDStack_50,asStack_68,asStack_60,(string *)(this + 8));
  std::string::~string(asStack_60);
  nop();
  std::string::~string(asStack_68);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"chest1_plants");
  FUN_03d915b4(asStack_60,this + 0x10);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"chest2_plants");
  FUN_03d915b4(asStack_60,this + 0x40);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"chest3_plants");
  FUN_03d915b4(asStack_60,this + 0x70);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"chest4_plants");
  FUN_03d915b4(asStack_60,this + 0xa0);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"chest1_pieces");
  FUN_03d915b4(asStack_60,this + 0x28);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"chest2_pieces");
  FUN_03d915b4(asStack_60,this + 0x58);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"chest3_pieces");
  FUN_03d915b4(asStack_60,this + 0x88);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"chest4_pieces");
  FUN_03d915b4(asStack_60,this + 0xb8);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"new_chest1_plants");
  FUN_03d915b4(asStack_60,this + 0xd0);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"new_chest2_plants");
  FUN_03d915b4(asStack_60,this + 0x100);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"new_chest3_plants");
  FUN_03d915b4(asStack_60,this + 0x130);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"new_chest4_plants");
  FUN_03d915b4(asStack_60,this + 0x160);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"new_chest1_pieces");
  FUN_03d915b4(asStack_60,this + 0xe8);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"new_chest2_pieces");
  FUN_03d915b4(asStack_60,this + 0x118);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"new_chest3_pieces");
  FUN_03d915b4(asStack_60,this + 0x148);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"new_chest4_pieces");
  FUN_03d915b4(asStack_60,this + 0x178);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"limited_chest1_plants");
  FUN_03d915b4(asStack_60,this + 400);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"limited_chest2_plants");
  FUN_03d915b4(asStack_60,this + 0x1c0);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"limited_chest3_plants");
  FUN_03d915b4(asStack_60,this + 0x1f0);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"limited_chest4_plants");
  FUN_03d915b4(asStack_60,this + 0x220);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"limited_chest1_pieces");
  FUN_03d915b4(asStack_60,this + 0x1a8);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"limited_chest2_pieces");
  FUN_03d915b4(asStack_60,this + 0x1d8);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"limited_chest3_pieces");
  FUN_03d915b4(asStack_60,this + 0x208);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"GachaDetial");
  std::string::string(asStack_70,"limited_chest4_pieces");
  FUN_03d915b4(asStack_60,this + 0x238);
  pcVar1 = (char *)DString::c_str((DString *)asStack_60);
  std::string::string(asStack_68,pcVar1);
  DIniFile::setItem(aDStack_50,asStack_78,asStack_70,asStack_68);
  std::string::~string(asStack_68);
  nop();
  DString::~DString((DString *)asStack_60);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_60,"GachaDetialInfos.ini");
  DFileHandler::writeToFile((DFileHandler *)aDStack_50,asStack_60,false,true);
  std::string::~string(asStack_60);
  nop();
  DIniFile::~DIniFile(aDStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaDetailCacheMgr::updateFromNetWork() */

void __thiscall GachaDetailCacheMgr::updateFromNetWork(GachaDetailCacheMgr *this)

{
  FUN_03d8f31c(this + 0x10,this + 0xd0,*this);
  FUN_03d8f31c(this + 0x40,this + 0x100,*this);
  FUN_03d8f31c(this + 0x70,this + 0x130,*this);
  FUN_03d8f31c(this + 0xa0,this + 0x160,*this);
  FUN_03d8f31c(this + 0x28,this + 0xe8,*this);
  FUN_03d8f31c(this + 0x58,this + 0x118,*this);
  FUN_03d8f31c(this + 0x88,this + 0x148,*this);
  FUN_03d8f31c(this + 0xb8,this + 0x178,*this);
  saveGachaDetail(this);
  return;
}


/* GachaDetailCacheMgr::clean(int, bool) */

void __thiscall GachaDetailCacheMgr::clean(GachaDetailCacheMgr *this,int param_1,bool param_2)

{
  switch(param_1) {
  case 0:
    if (!param_2) {
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xe8));
      saveGachaDetail(this);
      return;
    }
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xd0));
    saveGachaDetail(this);
    return;
  case 1:
    if (!param_2) {
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x118))
      ;
      saveGachaDetail(this);
      return;
    }
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x100));
    saveGachaDetail(this);
    return;
  case 2:
    if (param_2) {
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x130))
      ;
      saveGachaDetail(this);
      return;
    }
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x148));
    break;
  case 3:
    if (!param_2) {
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x178))
      ;
      saveGachaDetail(this);
      return;
    }
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x160));
  }
  saveGachaDetail(this);
  return;
}

